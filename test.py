class Solution:
    def maxSub(self, nums: List[int], k: int) -> List[int]:
        list1 = [x[1] for x in sorted(sorted([[i, nums[i]] for i in range(len(nums))], reverse = True, key=lambda x: x[1])[:k], key=lambda x: x[0])]
        return list1