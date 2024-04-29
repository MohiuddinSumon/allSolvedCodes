# Reads two integers and prints their sum
def basic_io():
    a, b = map(int, input().split())
    print(a + b)


def is_perfect_number(n):
    # Euclid-Euler theorem: Even perfect numbers are of the form 2^(p-1) * (2^p - 1)
    for p in range(2, 64):  # Check for possible values of p
        if (1 << (p - 1)) * ((1 << p) - 1) == n:
            return True
    return False


def divisor_sum(number):
    count = 0

    for i in range(1, int(number**0.5) + 1):
        # print(i, number%i, count)
        if number % i == 0:
            count += i
            if i != number // i and i != 1:
                count += number // i

            if count > number:
                break
    return count


def main():
    # basic_io()
    # Your python code here
    test_case = int(input())

    while test_case:
        test_case -= 1

        number = int(input())

        # if number == divisor_sum(number):
        if is_perfect_number(number):
            print(f"YES, {number} is a perfect number!")
        else:
            print(f"NO, {number} is not a perfect number!")


main()
