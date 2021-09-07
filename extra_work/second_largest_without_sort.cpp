#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[], int n){
    int first_largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > first_largest){
            first_largest = arr[i];
        }
    }
    int second_largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > second_largest && arr[i] != first_largest){
            second_largest = arr[i];
        }
    }
    return second_largest;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    cout<<secondLargest(arr,n);
    return 0;
}