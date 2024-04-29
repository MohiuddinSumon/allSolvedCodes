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
        for ch in text:
            if ch.isalpha() and ch == ch.upper():
                print("Uppercase Character")
            elif ch.isalpha() and ch == ch.lower():
                print("Lowercase Character")
            elif ch.isdigit():
                print("Numerical Digit")
            else:
                print("Special Characters")

main()
