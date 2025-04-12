#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
    int t;
    cin>>t;
 
    while(t--){
       ll n;
       cin>>n;

       ll left = 1;

       while(n%left==0){
         left++;
       }

       cout<<left-1<<endl;
    }

       
    return 0;
}
        