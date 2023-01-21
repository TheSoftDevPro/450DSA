#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Find the "Kth" max and min element of an array 

int partition(vector<int> &arr,int low,int high){
    int pivot = arr[high];
    int i=low,j = low;
    while(j < high){
        if(arr[j] < pivot){
            swap(arr[i],arr[j]);
            i++;
        }
        j++;
    }
    swap(arr[high],arr[i]);
    return i;
}


int kthlargest(vector<int> arr,int low,int high,int K){
    if(K < 0 || K > high-low + 1){
        return -1;
    }
    int pos = partition(arr,low,high);
    if(high - pos == K-1){
        return arr[pos];
    }
    else if(high - pos > K - 1){
        return kthlargest(arr,pos+1,high,K);
    }
    else{
        return kthlargest(arr,low,pos-1,K- high +pos-1);
    }
}

int main(){
    vector<int> arr = {3,7,5,2,9,6,11,0};
    int ans = kthlargest(arr,0,arr.size()-1,4);
    cout << ans;
    return 0;
}