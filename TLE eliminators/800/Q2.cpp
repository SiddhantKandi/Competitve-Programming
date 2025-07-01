#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

   while(t--){
    int n,x;
    cin>>n>>x;
    
    vector<int> dist(n,0);
    
    for(int i = 0;i<n;i++){
        cin>>dist[i];
    }
    int max_dis = max(dist[0],2*(x-dist[n-1]));

    for(int i = 1;i<n;i++){
      max_dis = max(max_dis,dist[i]-dist[i-1]); 
    }

    cout<<max_dis<<endl;
   } 

    return 0;
}
