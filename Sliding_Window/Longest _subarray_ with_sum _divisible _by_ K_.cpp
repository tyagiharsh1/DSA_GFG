

class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    int sum=0;
	    int rem=0;
	    int ans=0;
	    unordered_map<int,int>mp;
	    mp.insert({0,-1});
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	        rem=sum%k;
	        if(rem<0)
	        {
	            rem=rem+k;
	        }
	        if(mp.find(rem)!=mp.end())
	        {
	            ans=max(ans,i-mp[rem]);
	        }
	        else
	        {
	            mp.insert({rem,i});
	        }
	    }
	    return ans;
	}
};