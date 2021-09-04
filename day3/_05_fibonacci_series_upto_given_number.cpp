#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int first = 0;
    int last = 1;
    int next;
    
    while(first != num){
        cout<<first<<" ";
        next = first + last;
        first = last;
        last = next;
    }
    cout<<first;
  return 0;
}