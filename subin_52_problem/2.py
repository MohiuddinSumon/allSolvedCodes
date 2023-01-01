test_case = int(input())

for i in range(test_case):
    str_inp = input()
    # "12345"
    number = int(str_inp[-1])
    print(number, type(number))

    if number % 2 == 0:
        print('even')
    else:
      print('odd')


