def factorial(n):
    if n < 2:
        return 1
    return n*factorial(n-1)

def main():
    test_case = int(input())
    for _ in range(test_case):
        n = int(input())
        print(factorial(n))
        

main()
