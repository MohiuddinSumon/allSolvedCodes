# Reads two integers and prints their sum
def basic_io():
    a, b = map(int, input().split())
    print(a + b)


def get_vowel_count(text):
    VOWELS = set(("A", "E", "I", "O", "U"))  # "AEIOU"
    count = 0
    for charecter in text:
        if charecter.upper() in VOWELS:
            count += 1
    return count


def main():
    # basic_io()
    # Your python code here
    test_case = int(input())
    while test_case:
        test_case -= 1

        text = input()
        result = get_vowel_count(text)
        print(f"Number of vowels = {result}")


main()
