#include<iostream>
#include<vector>
using namespace std;

int f(string s,int n){
    int ans = 0;
    int dis = 0;
    for(int i=0;i<s.length();i++){
        char c = s[i];
        if(c == '.'){
            dis++;
        }
        if(i == s.length()-1 || c == '#'){
            if(dis>=3){
                ans = 2;
                break;
            }
            else{
                ans = ans + dis;
                dis = 0;
            }
        }

    }

    return ans;
}

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = f(s,n);
        cout<<ans<<endl;
    }
}