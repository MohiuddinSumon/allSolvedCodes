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
        text = input()
        vowel = {"a", "e", "i", "o", "u"}

        vowel_letters = ""
        consonent_letters = ""

        for ch in text:
            if ch.lower() in vowel:
                vowel_letters += ch
            elif (
                ch != " "
            ):  # this is wrong, ch.isalpha() should pass as statement says it will be lowercase string
                consonent_letters += ch

        print(vowel_letters)
        print(consonent_letters)


main()
