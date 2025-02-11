#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

int main(){
    string s;
    cin>>s;
    int count = 0 ;
    int maxi = 0;

    char ch = s[0];

    for(auto it : s){
        if(it==ch){
            count++;
        }
        else{
            maxi = max(maxi,count);
            count = 1;
            ch = it;
        }
    }

    cout<<max(maxi,count)<<endl;
    return 0;
}