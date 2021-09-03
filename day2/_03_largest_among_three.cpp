#include<bits/stdc++.h>
using namespace std;
int largestNumber(int num1, int num2, int num3){
    if(num1 >= num2 && num1 >= num3){
        return num1;
    }else if(num2 >= num1 && num3 >= num1){
        return num2;
    }
    return num3;
}
int main(){
    int num1, num2, num3;
    cin>>num1>>num2>>num3;
    cout<<largestNumber(num1, num2, num3);
    return 0;
}