#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

   while(t--){
    int n;
    cin>>n;

    vector<int> a(n,0);

    for(int i= 0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end(),greater<int>());

    if(a[0] == a[n-1]){
        cout<<-1<<endl;
    }
    else{
        vector<int> b;
        vector<int> c;

        c.push_back(a[0]);


        int j = 1;

        while(a[j] == a[0]){
            c.push_back(a[j]);
            j++;
        }

        for(int i = j;i<n;i++){
            b.push_back(a[i]);
        }

        cout<<b.size()<<" "<<c.size()<<endl;

        for(int i = 0;i<b.size();i++){
            cout<<b[i]<<" ";
        }

        cout<<endl;

        for(int i = 0;i<c.size();i++){
            cout<<c[i]<<" ";
        }

        cout<<endl;
    }


   } 

    return 0;
}