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

        weight = float(input())
        count = 0
        while weight > 1.0:
            weight /= 2
            count += 1

        print(count, "days")


main()
