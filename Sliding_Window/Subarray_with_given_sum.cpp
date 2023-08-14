class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
       long long currSum = 0;
    int start = 0, i;
    vector<int> res;
    
    for (i = 0; i < n; i++) {
        currSum += arr[i];
        
        while (currSum > s && start < i) {
            currSum -= arr[start];
            start++;
        }
        
        if (currSum == s) {
            res.push_back(start + 1);  // 1-based indexing, so add 1 to start
            res.push_back(i + 1);      // 1-based indexing, so add 1 to i
            return res;
        }
    }
    
    res.push_back(-1);  // If no subarray with the target sum is found
    return res;
    }
};