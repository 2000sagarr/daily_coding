#include<bits/stdc++.h>
using namespace std;
int reverseNo(int num){
    int reverse = 0;
    int rem;
    while(num > 0){
        rem = num % 10;
        reverse = (reverse * 10) + rem;
        num /= 10;
    }
    return reverse;
}
int main(){
    int num;
    cin>>num;
    int rev = reverseNo(num);
    cout<<rev;
    return 0;
}