# Reads two integers and prints their sum
def basic_io():
    a, b = map(int, input().split())
    print(a + b)


def divisor_sum(number):
    count = 0

    for i in range(1, number):
        # print(i, number%i, count)
        if number % i == 0:
            count += i
            if count > number:
                break
    return count


def is_perfect_number(n):
    # Euclid-Euler theorem: Even perfect numbers are of the form 2^(p-1) * (2^p - 1)
    for p in range(2, 64):  # Check for possible values of p
        if (1 << (p - 1)) * ((1 << p) - 1) == n:
            return True
    return False


def main():
    # basic_io()
    # Your python code here

    perfect_numbers = [6, 28, 496, 8128, 33550336]

    # for i in range(1, 40000000+1):
    #     if is_perfect_number(i):
    #         perfect_numbers.append(i)
    # print(perfect_numbers)

    test_case = int(input())

    while test_case:
        test_case -= 1

        n = int(input())

        for number in perfect_numbers:
            if number <= n:
                print(number)
        print()


main()
