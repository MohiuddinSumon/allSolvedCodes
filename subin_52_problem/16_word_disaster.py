# Reads two integers and prints their sum
def basic_io():
    a, b = map(int, input().split())
    print(a + b)


def main():
    test_case = int(input())
    while test_case:
        test_case -= 1

        words = input().split()
        for word in words:
            # print(word[::-1], end=" ")
            print("".join(reversed(word)), end=" ")
        print()


main()
