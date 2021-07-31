from typing import List
import random

def tow_sum(nums: List[int], target: int) -> List[int]:
    # nums: List[int], target: int) -> List[int] here List[int] -> these are function annotation 
    end = len(nums)
    for first in range(end):
        for second in range(first+1, end):
            if nums[first] + nums[second] == target:
                print(nums[first] ,nums[second])
                return [first, second]

def tow_sum_dictionary(nums: List[int], target: int) -> List[int]:
    """
        There is ALWAYS only 1 pair of correct numbers. so there exist one such pair 
        where xa+xb=target (or) xa = target-xb
        say we have 1 2 3 4 and target 7 , 
        index  value  value-required
          0     1       7-1=6
          1     2       7-2=5
          2     3       7-3=4
          3     4       7-4=3
        what it means is for one index to be result there have to be another input with 
        value=value-required, we can see this in case of index 3. 
    """
    result = {}

    for index, value in enumerate(nums):
        print(f" index = {index} , value = {value} , Result = {result} ")
        if value in result:
            return [result[value], index]
        result[target-value] = index
        print(f" Res = {result}")

for i in range(1, 11):
    # nums=list(range(1, 51))
    nums = random.sample(range(1,51), 50)
    target=random.randint(1,50) 
    print(f" {i, target} => {tow_sum(nums, target)}")
    print(f" {i, target} => {tow_sum_dictionary([4,7,13,56], 21)}")
