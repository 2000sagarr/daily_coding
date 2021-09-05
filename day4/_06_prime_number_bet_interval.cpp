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
    int start, end;
    cin>>start>>end;
    if(start % 2 == 0){
        start++;
    }
    for(int i=start; i<= end; i+=2){
        if(isPrime(i)){
            cout<<i<<"  ";
        }
    }
    return 0;
}