# Reads two integers and prints their sum
def basic_io():
    a, b = map(int, input().split())
    print(a + b)


from typing import List


def first_missing_positive(nums: List[int]) -> int:
    max_possible_number = len(nums) + 1
    nums_set = set(nums)

    for i in range(1, max_possible_number + 1):
        if i not in nums_set:
            return i


def main():
    # basic_io()
    # Your python code here
    test_case = int(input())
    while test_case:
        test_case -= 1

        list1 = list(map(int, input().split()))
        m = list1[0]
        del list1[0]
        print(first_missing_positive(list1))


main()
