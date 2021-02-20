class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) 
    {
        int codeSize = code.size();
        vector<int> ans;
        
        int tempSum = 0;
        
        if (k > 0)
        {
            for (int i = 0; i < codeSize; i++)
            {
                tempSum = 0;
                for (int j = 1; j <= k; j++)
                {
                    int tempInd = abs(i + j) % codeSize;
                    tempSum += code[tempInd];
                }
                ans.push_back(tempSum);
            }
            
            
        }
        else if (k < 0)
        {
            for (int i = 0; i < codeSize; i++)
            {
                //int tempLoop = codeSize + k + i;
                tempSum = 0;
                for (int j = k; j < 0; j++)
                {
                    int tempInd = (i + j + codeSize) % codeSize;
                    tempSum += code[tempInd];
                }
                
                ans.push_back(tempSum);
            }
            
        }
        else
        {
            for (int i = 0; i < codeSize; i++)
            {
                ans.push_back(0);
            }
        }
        
        return ans;
        
        
    }
};