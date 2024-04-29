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
        n = list(map(int, input().split()))
        n.pop(0)

        for i in range(0, len(n), 2):
            print(n[i], end=" ")
        print("")


main()
