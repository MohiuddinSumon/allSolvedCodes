# Reads two integers and prints their sum
def basic_io():
    a, b = map(int, input().split())
    print(a + b)


def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


def lcm(a, b):
    return (a * b) // gcd(a, b)


def main():
    # basic_io()
    # Your python code here

    test_case = int(input())

    while test_case:
        test_case -= 1

        a, b = map(int, input().split())

        print("LCM =", lcm(a, b))


main()
