class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        l = len(nums)
        for i in reversed(range(l-1)):
            cand = -1
            for j in range(i+1,l):
                if(nums[j]>nums[i]):
                    if cand < 0 or nums[j]<nums[cand]: cand = j
            if cand < 0: continue
            
            nums[i],nums[cand] = nums[cand], nums[i]

            j = i + 2
            while j < l:
                k = j
                while k-1 > i and nums[k-1]>nums[k]:
                    nums[k-1],nums[k]=nums[k],nums[k-1]
                    k -= 1
            
                j += 1
        
            break
        else:
            nums.reverse()
        