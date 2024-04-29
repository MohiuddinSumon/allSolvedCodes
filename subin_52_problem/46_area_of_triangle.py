import math


def main():
    # basic_io()
    # Your python code here
    test_case = int(input())
    while test_case:
        test_case -= 1

        a, b, c = map(int, input().split())

        s = (a + b + c) / 2

        # Calculate the area using Heron's formula
        area = math.sqrt(s * (s - a) * (s - b) * (s - c))
        print(f"Area = {area :.3f}")


main()
