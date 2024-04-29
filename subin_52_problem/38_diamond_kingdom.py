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

        line, number = map(int, input().split())

        for i in range(line):
            print((str(number) + " ") * (i + 1))
        for i in range(line - 1, 0, -1):
            print((str(number) + " ") * (i))

        print()


main()
