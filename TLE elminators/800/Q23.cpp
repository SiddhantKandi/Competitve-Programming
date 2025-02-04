#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    

    for(int i=0;i<t;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

       if( c > a && c-a > d-b){
        cout<<-1<<"\n";
       }
       else if(d < b){
        cout<<"-1"<<"\n";
       }
       else if(d==b){
        cout<<abs(c-a)<<"\n";
       }
       else {
        a = a + abs(d-b);
        cout<<abs(c-a) + abs(d-b)<<"\n";
       }
    }

    return 0;
}