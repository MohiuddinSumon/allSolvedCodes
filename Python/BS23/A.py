from collections import Counter
test_case = int(input())
all_values = [int(x) for x in input(). split()]

frequency = Counter(all_values)
# print(frequency)

if frequency[7] or frequency[5]:
    print(-1)
    exit()
if frequency[1] != frequency[4] + frequency[6] or frequency[3] > frequency[6] or frequency[1] != frequency[2] + frequency[3]:
	print('-1')
	exit()

for i in range(frequency[3]):
	print('1 3 6')
for i in range(frequency[6] - frequency[3]):
	print('1 2 6')
for i in range(frequency[4]):
	print('1 2 4')

