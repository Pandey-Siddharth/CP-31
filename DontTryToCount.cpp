#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool check(string s,string t){
    int n = t.length();
    int m = s.length();
    if(m<n){
        return false;
    }
    for(int i=0;i<=m-n;i++){
        if(s.substr(i,n) == t){
            return true;
        }
    }
    return false;
}

int f(string x,string s,int &count){
    while(count<=6){
                if(check(x,s)){
            return count;
        }
        x = x+x;
        count++;
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
        int count = 0;
        int ans = f(x,s,count);
        cout<<ans<<endl;
    }
}