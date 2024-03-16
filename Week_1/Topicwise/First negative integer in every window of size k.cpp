vector<long long> printFirstNegativeInteger(long long int A[],
long long int N, long long int K) {
    
    vector <long long int> ans;
    
    int l = 0;
    int r = 0;
    
    queue <long long int> q;
    
    while(r < N){
        if(A[r] < 0) q.push(A[r]);
        if(r - l + 1 == K){
            if(!q.empty()){
                ans.push_back(q.front());
                if(A[l] < 0)q.pop();
            }
            else{
                ans.push_back(0);
            }
            l++;
        }
        r++;
    }
    
    return ans;
}
