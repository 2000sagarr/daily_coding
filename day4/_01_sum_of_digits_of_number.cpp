#include<bits/stdc++.h>
using namespace std;
int sum(int num){
    int sum = 0;
    while (num > 0){
        int rem = num % 10;
        sum += rem;
        num /= 10;
    }
    return sum;
    
}
int main(){
    int num;
    cin>>num;
    cout<<sum(num);
    return 0;
}