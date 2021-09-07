#include<bits/stdc++.h>
using namespace std;
void moveZero(int arr[], int n){
    int count = 0;
    if(arr[n-1] == 0){
        count++;
    }
    for(int i=n-2;i>=0;i--){
        if(arr[i] == 0){
            for(int j =i+1; j <= n-1-count;j++){
                swap(arr[j-1] , arr[j]);
            }
            count++;
        }
    }
}
int main(){
    int arr[] = {1,0,1,0,4,3,0,4,5,4,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    moveZero(arr, size);
    for(auto data:arr){
        cout<<data<<" ";
    }
    return 0;
}