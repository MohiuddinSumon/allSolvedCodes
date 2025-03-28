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

        text = input()
        print("".join(reversed(text)))

        for i in range(len(text)-1, -1, -1):
            print(text[i], end="")
        print()


main()
