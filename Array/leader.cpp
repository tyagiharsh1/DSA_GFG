    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>ans;
        stack<int>st;
        ans.push_back(a[n-1]);
        st.push(a[n-1]);
        for(int i=n-2;i>=0;i--)
        {
           
            if(a[i]>=st.top())
            {
                ans.push_back(a[i]);
                st.push(a[i]);
            }
            else
            {
                continue;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};