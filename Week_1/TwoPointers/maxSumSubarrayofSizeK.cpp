class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long sum = 0;
        long ans = 0;
        
        int l = 0, r = 0;
        
        while(r < N){
            sum += Arr[r];
            
            if(r - l + 1 > K){
                sum -= Arr[l];
                l++;
            }
            
            ans = max(ans,sum);
            r++;
        }
        
        return ans;
    }
};
