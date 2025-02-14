#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 

 
int main() {
    int t;
    cin>>t;
 
    while(t--){
       int a,b;
       
       cin>>a>>b;

       int xK,yK;

       cin>>xK>>yK;

       int xQ,yQ;
       cin>>xQ>>yQ;

       vector<pair<int,int> > coordinates = {{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};


       set<pair<int,int> > st;
       set<pair<int,int> > st2;

       for(auto it : coordinates){
        int xco = it.first;
        int yco = it.second;

        st.insert({xK + xco,yK + yco});
       }

       for(auto it : coordinates){
        int xco = it.first;
        int yco = it.second; 

        st2.insert({xco + xQ,yco + yQ});
       }

       set<pair<int,int>> result; 

       set_intersection(st.begin(), st.end(), st2.begin(), st2.end(), inserter(result, result.begin()));

       cout<<result.size()<<endl;
        
 
    }
 
    return 0;
}
