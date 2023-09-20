class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        rs = []
        for i in range(len(nums)):
            if nums[i] == target:
                rs.append(i)

        if len(rs) == 1:
            return [rs[0], rs[0]]
        if len(rs) > 2:
            return [rs[0], rs[len(rs) - 1]]
        if len(rs) == 0:
            rs = [-1, -1]
        return rs
                