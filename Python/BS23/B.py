test_case = int(input())
all_values = [int(x) for x in input(). split()]

five = all_values.count(5)
zero = all_values.count(0)

useable_five = (five//9)*9


if zero == 0:
    print(-1)
    exit()
if useable_five == 0:
    print(0)
    exit()

print('5'*useable_five, end="")
print('0'*zero)