class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int sum;
        vector<int> sumArray;
        for (int i = 0; i < accounts.size(); ++i)
        {
            sum = 0;
            for (int j = 0; j < accounts[i].size(); ++j)
            {
                sum = sum + accounts[i][j]; //SUM OF THE ROW
            }
            sumArray.push_back(sum); //STORING SUM IN SUMARRAY
        }
        int max = sumArray[0];
        for (int k = 0; k < sumArray.size(); k++)
        {
            if (max > sumArray[k])
            {
                max = max; //FINDING LARGEST NUMBER IN THE SUMARRAY
            }
            else
            {
                max = sumArray[k];
            }
        }
        return max;
    }
};