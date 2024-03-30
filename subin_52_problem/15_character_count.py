""" solved using set """


def main():
    """
    This function takes user input and counts the frequency of each character in the input string.
    It takes no parameters and does not return any values.
    """
    test_case = int(input())
    for loop in range(test_case):
        S = input()
        letters = {}
        for i in S:
            letters[i] = letters.get(i, 0) + 1

        for k, v in letters.items():
            print(k, "=", v)
        if test_case - 1 != loop:
            print()


main()


# unique_chars = set(S)
# +        for char in unique_chars:
# +            print(char, '=', S.count(char))
