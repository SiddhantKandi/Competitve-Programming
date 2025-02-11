#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        int num = 5;
        int sum = 0;

        for(int j=0;j<10;j++){
            for(int k=1;k<=10;k++){
                char ch;
                cin>>ch;

                if(ch=='X'){
                    if(k<=5){
                        sum+=k;
                    }
                    else{
                        index = 10-k +1;
                        if(index==5){
                            
                        }
                    }
                }
            }
        }

        cout<<sum<<endl;
        
    }

    return 0;
}