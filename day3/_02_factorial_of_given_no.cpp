#include<bits/stdc++.h>
using namespace std;
int fact(int num){
    if(num == 1 || num == 0){
        return 1;
    }
    return num*fact(num-1);
}
int main(){
    int num;
    cin>>num;
    int fac = fact(num);
    cout<<fac;
    return 0;
}