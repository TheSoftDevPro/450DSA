#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Basic Hare Tort algo on array

int findDuplicate(vector<int> arr){
    int n = arr.size();
    int hare=0,tort=0;
    int ele,nextele;
    while(true){
        tort = arr[tort];
        hare = arr[arr[hare]];
        if(hare != tort && arr[hare] == arr[tort]){
            return arr[hare];
        }
        if(hare == tort){
            break;
        }
    }
    tort = 0;
    while(arr[hare] != arr[tort]){
        hare = arr[hare];
        tort = arr[tort];
    }
    return arr[hare];

}

int main(){
    vector<int> arr = {2,3,4,2,1};
    int ans = findDuplicate(arr);
    cout << ans << '\n';
}