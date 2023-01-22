#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int maxSumSubarray(vector<int> arr){
    int sum = 0;
    int ans = INT_MIN;
    for(int i:arr){
        sum+=i;
        ans = max(ans,sum);
        if(sum<=0) sum=0;
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,-2,5};
    int ans = maxSumSubarray(arr);
    cout << ans;
}