#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
int main(){
    //freopen("input.txt", "r", stdin);
 
    int n;
    cin>>n;
 
    ll arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    ll ans = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] > arr[i + 1]){
            ans += arr[i] - arr[i + 1];
            arr[i + 1] += arr[i] - arr[i + 1];
        }
        
    }
 
    cout<<ans<<endl;
 
    return 0;
}
