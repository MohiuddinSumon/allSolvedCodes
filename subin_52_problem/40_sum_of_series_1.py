def main():
    # basic_io()
    # Your python code here

    test_case = int(input())

    while test_case:
        test_case -= 1

        x, k = map(int, input().split())

        if x == 1:
            print(f"Result = {k + 1}")
        else:
            print(f"Result = {int((1*(x**(k+1) - 1)) / (x-1))}")


main()
