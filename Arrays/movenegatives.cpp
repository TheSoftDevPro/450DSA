#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> moveNegatives(vector<int> &arr){
    int i = 0;
    int j = arr.size();
    while(i < j){
        if(arr[i] >= 0){
            if(arr[j] < 0){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
            else{
                j--;
            }
        }
        else{
            if(arr[j] < 0){
                i++;
            }
            else{
                i++;
                j--;
            }
        }
    }
    return arr;
}

int main(){
    vector<int> arr = {2,0,5,-3,6,-6,-7,1,-8,0,7,-6,-4,-5,-3,1,4,7,9,6};
    arr = moveNegatives(arr);
    for(int i:arr){
        cout << i << " ";
    }
}