# Reads two integers and prints their sum
def basic_io():
    a, b = map(int, input().split())
    print(a + b)


def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)


def sum_of_series(n):
    result = 0

    for i in range(1, n + 1):
        result += i / factorial(i)
    return result


def main():
    # basic_io()
    # Your python code here

    test_case = int(input())

    while test_case:
        test_case -= 1

        n = int(input())
        print(f"{sum_of_series(n):.4f}")


main()
