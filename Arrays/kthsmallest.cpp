#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// void printArray(vector<int> arr){
//     for(auto i : arr){
//     }
//     cout << endl;
// }

int partition(vector<int> &arr,int low,int high){
    
    
    int i = low,j = low;
    int pivot = arr[high];
    while(j < high){
        if(pivot >= arr[j]){
            swap(arr[i],arr[j]);
            i++;
        }
        j++;
    }
    swap(arr[high],arr[i]);
    return i;
}

int KthSmallest(vector<int> arr,int low,int high,int K){
    if(K > high-low + 1 || K < 0){
        return INT_MAX;
    }
    // printArray(arr);
    int pos = partition(arr,low,high);
    // printArray(arr);
    if(pos-low == K-1){
        return arr[pos];
    }
    else if(pos-low > K-1){
        return KthSmallest(arr,low,pos-1,K);
    }
    else{
        return KthSmallest(arr,pos+1,high,K-pos+low-1);
    }
}


int main(){
    vector<int> arr = {3,7,5,2,9,6,11,0};
    int ans = KthSmallest(arr,0,arr.size()-1,4);
    cout << ans;
    return 0;
}
