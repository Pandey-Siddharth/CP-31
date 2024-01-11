#include <iostream>
#include <vector>
using namespace std;

int f(vector<int>arr,int x,int n){
    int maxi = INT_MIN;
    for(int i=1;i<n;i++){
        int diff = arr[i] - arr[i-1];
        maxi = max(diff,maxi);
    }
    int first = arr[0]-0;
    int last = 2*(x - arr[n-1]);
    maxi = max(max(last,first),maxi);
    return maxi;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans = f(arr,x,n);
        cout<<ans<<endl;
    }
}