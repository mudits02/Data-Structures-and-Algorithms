class Solution
{
public:
    int maxAbsoluteSum(vector<int> &nums)
    {
        int maxSum = nums[0];
        int minSum = nums[0];
        int curMax = 0;
        int curMin = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            curMax += nums[i];
            curMin += nums[i];

            if (curMax < nums[i])
            {
                curMax = nums[i];
            }
            maxSum = max(maxSum, curMax);

            if (nums[i] < curMin)
            {
                curMin = nums[i];
            }

            minSum = min(minSum, curMin);
        }

        return max(maxSum, abs(minSum));
    }
};