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

        number = input()
        NOT = ""
        result = str(int(number[0]) ** 3 + int(number[1]) ** 3 + int(number[2]) ** 3)
        # print(result, number)
        if number != result:
            NOT = "not "
        print(f"{number} is {NOT}an armstrong number!")


main()
