#include<bits/stdc++.h>
using namespace std;
int isAmstrong(int num){
    int sum = 0;
    int temp = num;
    while(num > 0){
        int rem = num % 10;
        sum += (rem*rem*rem);
        num /= 10;
    }
    return temp == sum;
}
int main(){
    int num;
    cin>>num;
    if(isAmstrong(num)){
        cout<<"Amstrong";
    }else{
        cout<<"Not amstrong";
    }
    return 0;
}