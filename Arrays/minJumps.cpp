#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// int solveRec(vector<int> arr,int index){
//     int n = arr.size();
//     cout << index << '\n';
//     if(index >= n-1){
//         return 0;
//     }
//     if(arr[index] == 0){
//         return -1;
//     }
//     int ans = n;
//     for(int i = index+1;i<=index + arr[index];i++){
//         ans = min(ans,solveRec(arr,i));
//     }
//     if(ans == -1) return -1;
//     return ans+1;
// }

// int solveMem(vector<int> arr,int index,vector<int> dp){
//     int n = arr.size();
//     cout << index << '\n';
//     if(index >= n-1){
//         return 0;
//     }
//     if(arr[index] == 0){
//         return -1;
//     }
//     if(dp[index] != 0) return dp[index];
//     int ans = n;
//     for(int i = index+1;i<=index + arr[index];i++){
//         ans = min(ans,solveMem(arr,i,dp));
//     }
//     if(ans == -1) return dp[index] = -1;
//     return dp[index] = ans+1;
// }

int minJumps(vector<int> arr){
    // vector<int> dp(arr.size(),0);
    // return solveMem(arr,0,dp); O(n^2) solution
    int n = arr.size();
    if(n == 1){
        return 0;
    }
    if(arr[0] >= n-1){
        return 1;
    }
    if(arr[0] == 0){
        return -1;
    }
    int max_reach = arr[0];
    int steps = arr[0];
    int jumps = 0;
    for(int i = 0;i<n;i++){
        if(i >= n-1) return jumps;
        if(i + arr[i] >= n-1) return jumps+1;
        max_reach = max(max_reach,i + arr[i]);
        steps--;
        if(steps == 0){
            jumps++;
            if(i >= max_reach){
                return -1;
            }
            steps = max_reach - i;
        }
    }
    return -1;
    
}

int main(){
    vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << minJumps(arr);
}