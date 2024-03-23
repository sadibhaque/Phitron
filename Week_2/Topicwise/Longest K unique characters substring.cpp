class Solution{
  public:
    int check(vector<int>& freq){
        int ctr = 0;
        for(int i = 0; i < 26; i++){
            if(freq[i] > 0)ctr++;
        }
        return ctr;
    }
    
    int longestKSubstr(string s, int k) {
        vector<int> freq(26, 0); 
        int l = 0, r = 0, mx = -1;
    
        while(r < s.length()){
            int idx = s[r] - 'a';
            freq[idx]++;
    
            int ctr = check(freq);
    
            if (ctr < k) r++; 
            else if(ctr == k){
                mx = max(mx, r - l + 1);
                r++;
            } 
            else if(ctr > k){
                while(check(freq) > k){
                    int tmp = s[l] - 'a';
                    freq[tmp]--;
                    l++;
                }
                r++;
            }
        }
        return mx;
    }

};
