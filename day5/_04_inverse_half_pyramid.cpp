/*
            * * * * *
            * * * *
            * * *
            * *
            *
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=row;i>=1;i--){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}