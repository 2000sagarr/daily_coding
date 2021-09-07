#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,3,2,5,6,7,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+size);
    vector<int> arr1;
    arr1.push_back(arr[0]);
    for(int i=1;i<size;i++){
        if(arr[i] != arr[i-1]){
            arr1.push_back(arr[i]);
        }
    }
    for(auto data : arr1){
        cout<<data<<" ";
    }
     
    return 0;
}