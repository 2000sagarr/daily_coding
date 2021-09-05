#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    cout<<"1 ";
    for(int i=2;i<= num/2;i++){
        if(num % i == 0){
            cout<<i<<" ";
        }
    }
    cout<<num;
    return 0;
}