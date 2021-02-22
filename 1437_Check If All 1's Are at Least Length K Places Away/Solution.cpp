class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) 
    {
        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        int dist = 0;
        int exists = 0; // to check for the first occurrence of 1
        
        int arrSize = nums.size() ;
        
        for (int i = 0 ;i < arrSize; i++)
        {
            if (nums[i] == 0)
            {
                dist++;
            }
            else
            {
                if (exists != 0 && dist < k)
                {
                    return false;
                }
                exists = 1;
                dist = 0;
            }
        }
        return true;
        
    }
};