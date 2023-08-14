//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        deque<int> dq;
        vector <int> v;
        for(int i=0;i<k;i++){
            while(!dq.empty() && arr[i]>=arr[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        
         v.push_back(arr[dq.front()]);
         
        for(int i=k;i<n;i++){
            
            while(!dq.empty() && dq.front()<=i-k){
                dq.pop_front();
            }
            while(!dq.empty() && arr[i]>=arr[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
             v.push_back(arr[dq.front()]);
        }
       return v;
    }
};