def  gnome_sort(nums):
    if len(nums) <= 1:
        return nums
        
    i = 1
    
    while i < len(nums):
        if nums[i-1] <= nums[i]:
            i += 1
        else:
            nums[i-1], nums[i] = nums[i], nums[i-1]
            i -= 1
            if (i == 0):
                i = 1
           
user_input = input("Input numbers separated by a comma:\n").strip()
nums = [int(item) for item in user_input.split(',')]
gnome_sort(nums)
print(nums)
