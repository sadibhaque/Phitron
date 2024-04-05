#include <bits/stdc++.h>
using namespace std;

void solve() {
	// your code goes here
    int sum = 0;
    int ans = 0;
    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        sum ^= arr[i];
    }
    
    ans = sum;
    
    for(int i = 0; i < n; i++){
        ans = min(ans,(sum^arr[i]));
    }
    
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
}
