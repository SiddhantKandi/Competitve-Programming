#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        int board[10][10] = {{1,1,1,1,1,1,1,1,1,1},
                             {1,2,2,2,2,2,2,2,2,1},
                             {1,2,3,3,3,3,3,3,2,1},
                             {1,2,3,4,4,4,4,3,2,1},
                             {1,2,3,4,5,5,4,3,2,1},
                             {1,2,3,4,5,5,4,3,2,1},
                             {1,2,3,4,4,4,4,3,2,1},
                             {1,2,3,3,3,3,3,3,2,1},
                             {1,2,2,2,2,2,2,2,2,1},
                             {1,1,1,1,1,1,1,1,1,1}};

        int sum = 0;

        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                char ch;
                cin >> ch;

                if(ch != '.'){
                    sum += board[j][k];
                }
            }
        }

        cout<<sum<<"\n";
    }

    return 0;
}