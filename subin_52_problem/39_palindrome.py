# Reads two integers and prints their sum
def basic_io():
    a, b = map(int, input().split())
    print(a + b)


def main():
    # basic_io()
    # Your python code here
    NO = "Sorry! It is not palindrome!"
    YES = "Yes! It is palindrome!"

    test_case = int(input())
    while test_case:
        test_case -= 1
        palin = input()

        print(YES) if palin == palin[::-1] else print(NO)


main()
