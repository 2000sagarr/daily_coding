#include<bits/stdc++.h>
using namespace std;
int power(int base, int expo){
    if(expo == 0){
        return 1;
    }
    if(expo == 1){
        return base;
    }
    return base * power(base, expo-1);
}
int main(){
    int b,e;
    cin>>b>>e;
    cout<<power(b,e);
    return 0;
}