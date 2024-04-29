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

        for i in range(0, len(text)):
            if text[i] == "L":
                print(text[i - 1], end="")
            elif text[i] == "R":
                print(text[i + 1], end="")
            else:
                print(text[i], end="")
        print()


main()
