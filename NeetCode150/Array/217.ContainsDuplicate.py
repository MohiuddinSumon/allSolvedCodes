from typing import List


def contain_duplicates(nums: List)->bool:
    seen = set()

    for num in nums:
        if num in seen:
            return True
        seen.add(num)

    return False

print(contain_duplicates([1,2,3,4,5]))
