#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool f(vector<int> arr,int n){
    unordered_map<int,int>mpp;
    for(int i=0;i<arr.size();i++){
        mpp[arr[i]]++;
    }
    if(mpp.size()>2){
        return false;
    }
    if(mpp.size() == 1){
        return true;
    }
    int c =0;
    int f = 0;
    int s = 0;
    for(auto it:mpp){
        if(c == 0){
            f = it.second;
        }
        if(c ==1){
            s = it.second;
        }
        c++;
    }
    if(abs(f-s)>1){
        return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<< (f(arr,n)?"Yes":"No")<<endl;
    }
}
