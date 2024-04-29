# Reads two integers and prints their sum
def basic_io():
    a, b = map(int, input().split())
    print(a + b)


from math import sqrt


def main():
    # basic_io()
    # Your python code here
    test_case = int(input())

    for _ in range(test_case):
        x, y = map(int, input().split())
        radius = int(input())
        a, b = map(int, input().split())

        distance = sqrt((a - x) ** 2 + (b - y) ** 2)
        # print(distance)

        if distance <= radius * 1.0:
            print("The point is inside the circle")
        else:
            print("The point is not inside the circle")


main()
