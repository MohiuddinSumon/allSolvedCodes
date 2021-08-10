test_case = int(input())

for _ in range(test_case):
    length = int(input())
    # array = []
    array = [ int(x) for x in input().split()]
    # for i in range(length):
    #     array.append(int(input()))
    array.sort()
    # print(array)
    max_item = array.pop()
    sum = 0
    for i in array:
        sum += i
    # print(f"SUm = {sum}")
    print(f"{max_item + (sum/len(array))}")

