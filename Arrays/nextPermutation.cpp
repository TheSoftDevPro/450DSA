#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void nextPermutation(vector<int> &arr){
    int pivot;
    int n = arr.size();
    if(n == 1){
        return;
    }
    if(n == 2){
        swap(arr[0],arr[1]);
        return;
    }
    int i = n-2;
    while(arr[i] >= arr[i+1]){
        i--;
        if(i==-1){
            reverse(arr.begin(),arr.end());
            return;
        }
    }
    pivot = i;
    i = n-1;
    while(arr[i] <= arr[pivot]){
        i--;
    }
    swap(arr[i],arr[pivot]);
    reverse(arr.begin()+pivot+1,arr.end());
}

int main(){
    vector<int> arr = {2,3,1};
    nextPermutation(arr);
    for(int i:arr) cout << i << " ";
    return 0;

}