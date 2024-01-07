class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        result = {}
        for index, num in enumerate(nums):
            # 2 , 9-2 = 7
            current_need = target - num
            if current_need in result.keys():
                return [index, result[current_need]]
            else:
                result[num] = index