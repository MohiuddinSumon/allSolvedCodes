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

        n = int(input())
        # result = 0
        # # while n >
        # if n<0:
        #     n *= -1
        #     n = str(n)
        #     print(f"-{n[::-1]}")
        # else:
        n = str(n)
        r = n[::-1]
        print(int(r))


main()
