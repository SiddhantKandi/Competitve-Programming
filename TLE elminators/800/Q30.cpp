#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int count = 0;

        if(n<10){
            count = n;
        }
        else if(n >=10 && n <100){
            count = 9 + (n/10);
        }
        else if(n >=100 && n <1000){
            count = 9 + 9 + n/100;
        }
        else if(n >=1000 && n <10000){
            count = 9 + 9 + 9 + n/1000;
        }
        else if(n >=10000 && n <100000){
            count = 9 + 9 + 9 + 9 + n/10000;
        }
        else{
            count = 9 + 9 + 9 + 9 + 9 + n/100000;
        }

        cout<<count<<"\n";

    }

    return 0;
}