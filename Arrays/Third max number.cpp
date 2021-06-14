class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        int i = 1, j = 0;
        
        sort(nums.begin(), nums.end());

        
        while (i < nums.size())
        {
            if (nums[i] != nums[j])
            {
                j++;
                nums[j] = nums[i];
            }
            i++;
        }

        
        if (j < 2)
        {
            return nums[j];
        }

        
        return nums[j - 2];
    }
};