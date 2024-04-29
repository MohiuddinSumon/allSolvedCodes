# Reads two integers and prints their sum
def basic_io():
    a, b = map(int, input().split())
    print(a + b)


def print_pascal_triangle(n):
    triangle = [[1 for _ in range(i + 1)] for i in range(n)]
    # print(triangle)
    for i in range(2, n):
        for j in range(1, i):
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j]
    for row in triangle:
        print(" ".join(str(num) for num in row))
    print()


def main():
    # basic_io()
    # Your python code here
    test_case = int(input())
    while test_case:
        test_case -= 1
        n = int(input())
        print_pascal_triangle(n + 1)


main()
