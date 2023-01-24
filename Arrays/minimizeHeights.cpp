#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int getMinDiff(vector<int> arr,int k){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int ans = arr[n-1]-arr[0];
    int minh ,maxh;
    for(int i=1;i<n;i++){
        if(arr[i] >= k){
            maxh = max(arr[n-1] - k,arr[i-1] + k);
            minh = min(arr[0] + k,arr[i]-k);
            ans = min(ans,maxh-minh);
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
    int ans = getMinDiff(arr,5);
    cout << ans;
}