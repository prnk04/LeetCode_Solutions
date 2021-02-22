/*
    Approach: create a hash map to keep tracsk of the occurrence of each number in the array.
    Iterate over the map and if the key is equal to the value and is the greatest number, return the value
*/

class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        unordered_map<int, int> keepCount;
        int retVal = -1;
        
        for (auto it = arr.begin(); it != arr.end(); it++)
        {
            int num = (*it);
            keepCount[num]++;
        }
        
        for (auto it = keepCount.begin(); it != keepCount.end(); it++)
        {
            if (it->first == it->second)
            {
                retVal = (retVal > it->first)? retVal: (it->first);
            }
        }
        return retVal;
    }
};