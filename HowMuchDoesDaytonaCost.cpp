#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool check (vector<int> arr,int low,int high,int n){
    if(low>high) return false;
    int mid = (high+low)/2;
    if(arr[mid] == n) return true;
    if(arr[mid]>n) return check(arr,low,mid-1,n);
    if(arr[mid]<n) return check(arr,mid+1,high,n);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        cout<< (check(arr,0,n-1,k)?"Yes":"No")<<endl;
    }
}