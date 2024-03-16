class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int n = pat.size();
	    int m = txt.size();
	    
	    vector <int> t1(26,0), t2(26,0);
	    
	    for(int i = 0; i<n; i++){
	        t1[pat[i] - 'a']++;
	    }
	    
	    int ctr = 0, l = 0, r = 0;
	    
	    while(r < m){
	        t2[txt[r] - 'a']++;
	        
	        if(r - l + 1 == n){
	            
	            bool f = true;
	            for(int i = 0; i < 26; i++){
	                if(t1[i] != t2[i]){
	                    f = false;
	                    break;
	                }
	            }
	            if(f) ctr++;
	            
	            t2[txt[l] - 'a']--;
	            l++;
	        }
	        r++;
	    }
	    
	    
	    return ctr;
	}

};
