def main():
    test_case = int(input())
    
    for _ in range(test_case):
        number = int(input())
        result = 'YES' if int(number**0.5)**2 == number else 'NO' 
        print(result)

main()
