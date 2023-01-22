#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> rotateArr(vector<int> &arr){
    if(arr.size() == 1){
        return arr;
    }
    if(arr.size() == 2){
        swap(arr[0],arr[1]);
    }
    int put = arr[arr.size()-1];
    for(int i = 0;i<arr.size();i++){
        int curr = arr[i];
        arr[i] = put;
        put = curr;
    }
    return arr;
}

int main(){
    vector<int> arr = {1,2,5,4,3};
    arr = rotateArr(arr);
    for(int i :arr) cout << i << " ";
}