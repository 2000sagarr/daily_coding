#include<bits/stdc++.h>
using namespace std;
int isOdd(int num){
    if(num & 1){
        return 1;
    }
    return 0;
}
int main(){
    int num;
    cin>>num;
    if(isOdd(num)){
        cout<<"Odd Number";
    }else{
        cout<<"Even Number";
    }
    return 0;
}