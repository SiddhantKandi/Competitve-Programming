#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    

    for(int i=0;i<t;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(c-a > d-b){
            cout<<-1<<endl;
        }
        if(d-b == c-a){
            cout<<abs(d-b)<<endl;
        }
        else if(d-b > c-a) {
            cout<< abs((d-b) + (a+d-b-c))<<endl;
        }
    }

    return 0;
}