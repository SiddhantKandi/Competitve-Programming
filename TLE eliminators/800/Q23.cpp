#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    

   while(t--){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;

    if(d<b){
        cout<<-1<<endl;
    }
    else if(c > a && c-a > d-b){
        cout<<-1<<endl;
    }
    else{
        long long newa = a+abs(b-d);

        long long steps = abs(b-d) + abs(newa - c);

        cout<<steps<<endl;
    }
    
   } 

    return 0;
}