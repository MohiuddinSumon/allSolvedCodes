test_case = int(input())

for i in range(test_case):
    number = int(input())

    for j in range(number):
        print(number*'*')
    
    if i != test_case-1:
        print()
