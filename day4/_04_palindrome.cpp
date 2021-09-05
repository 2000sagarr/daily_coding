#include<bits/stdc++.h>
using namespace std;
int isPalindrome(int num){
    int reverse = 0;
    int temp = num;
    while(num > 0){
        int rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }
    return reverse == temp;
}
int main(){
    int num;
    cin>>num;
    if(isPalindrome(num)){
        cout<<"Palindrome";
    }else{
        cout<<"Not palindrome";
    }
    return 0;
}