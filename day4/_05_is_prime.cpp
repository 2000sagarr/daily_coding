#include<bits/stdc++.h>
using namespace std;
int isPrime(int num){
    if(num == 1){
        return 1;
    }
    if(num%2 == 0){
        return 0;
    }
    for(int i = 3;i <= num/2;i += 2){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;
    cin>>num;
    if(isPrime(num)){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }
    return 0;
}