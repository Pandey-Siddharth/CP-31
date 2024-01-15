#include<iostream>
#include<vector>
using namespace std;

void f(int n){
    if(n%3!=0){
        cout<<"First"<<endl;;
    }
    else{cout<<"Second"<<endl;}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        f(n);
    }
    return 0;
}