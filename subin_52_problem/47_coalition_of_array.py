from typing import List


def merge_sorted_array(nums1: List[int], m: int, nums2: List[int], n: int) -> None:
    k = m + n - 1
    m -= 1
    n -= 1

    nums1 += nums2

    while n >= 0:
        if nums1[m] >= nums2[n] and m >= 0:
            nums1[k] = nums1[m]
            k -= 1
            m -= 1
        else:
            nums1[k] = nums2[n]
            k -= 1
            n -= 1


def main():
    # basic_io()
    # Your python code here
    test_case = int(input())
    while test_case:
        test_case -= 1

        list1 = list(map(int, input().split()))
        m = list1[0]
        del list1[0]

        list2 = list(map(int, input().split()))
        n = list2[0]
        del list2[0]

        merge_sorted_array(list1, m, list2, n)

        for number in list1:
            print(number, end=" ")
        print()


main()
