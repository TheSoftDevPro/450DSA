#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Find the maximum and minimum element in an array

struct answer{
    int min;
    int max;
};

typedef struct answer ANS;

ANS minmax(vector<int> arr,int low,int high){
    ANS a;
    if(high - low <= 1){
        
        a.min = arr[low];
        a.max = arr[high];
        return a;     
    }
    int mid = (low+high)/2;
    ANS left = minmax(arr,low,mid);
    ANS right = minmax(arr,mid+1,high);
    a.min = min(left.min,right.min);
    a.max = max(left.max,right.max);
    return a;
}

int main(){
    cout << "Starting" << endl;
    vector<int> arr = {2,5,1,6,9,4};
    ANS a = minmax(arr,0,arr.size()-1);
    cout << a.min << " " << a.max;
    return 0;
}