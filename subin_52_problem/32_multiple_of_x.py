# Reads two integers and prints their sum
def basic_io():
    a, b = map(int, input().split())
    print(a + b)


def main():
    # basic_io()
    # Your python code here
    test_case = int(input())
    while test_case:
        test_case -= 1

        a, b = map(int, input().split())
        if b < a:
            print("Invalid!")
        else:
            n = b // a
            for i in range(1, n + 1):
                print(a * i)

        print()


main()
