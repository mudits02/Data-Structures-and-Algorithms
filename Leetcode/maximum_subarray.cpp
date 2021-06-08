class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int curr = 0;
        int best = INT_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            curr = curr + nums[i];
            if (best < curr)
            {
                best = curr;
            }
            if (curr < 0)
            {
                curr = 0;
            }
        }
        return best;
    }
};