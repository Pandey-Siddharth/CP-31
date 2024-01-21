#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int f(int i,string &s,bool flag, unordered_map <string,char> &mpp,vector<vector<int>>&dp){
        if(i == s.size()){
            return 1;
        }
        if(dp[i][flag]!=-1){
            return dp[i][flag];
        }
        int take = 0;
        if( mpp.find(to_string(s[i]-'0'))!=mpp.end()){
            take = f(i+1,s,true,mpp,dp);
        }
        int not_take = 0;
        if( flag && mpp.find(s.substr(i-1,2))!=mpp.end()){
            not_take = f(i+1,s,false,mpp,dp);
        }
        return dp[i][flag] = take + not_take;
    }

    int numDecodings(string s) {
        unordered_map <string,char>mpp;
        int n = s.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        for(int i=1;i<=26;i++){
            mpp[to_string(i)] = 'A' + i-1;
        }
        bool flag = true;
        if(s[0] == '0'){
           return 0;
        }
        return f(1,s,flag,mpp,dp);
    }
};
