class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int len=0;
        int sum=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
            int tar=sum-K;
            if(mp.find(tar)!=mp.end())
            {
                len=max(len,i-mp[tar]);
            }
            if(mp.find(sum)==mp.end())
            {
                mp[sum]=i;
            }
        }
        return len;
    } 

};