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
        given_list = []
        while n:
            n -= 1
            temp = int(input())
            given_list.append(temp)
        # print(sorted(given_list, reverse=True))
        # print(given_list)
        if given_list == sorted(given_list):
            print("YES")
        elif given_list == sorted(given_list, reverse=True):
            print("YES")
        else:
            print("NO")


main()
