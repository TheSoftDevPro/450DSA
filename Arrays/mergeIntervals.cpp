#include<bits/stdc++.h>
#include<iostream>
using namespace std;

static bool compareIntervals(vector<int> arr1,vector<int> arr2){
    return arr1[0] < arr2[0];
}

vector<vector<int>> mergeIntervals(vector<vector<int>> intervals){
    vector<vector<int>> ans;
    sort(intervals.begin(),intervals.end(),compareIntervals);
    int index = 0;
    ans.push_back(intervals[0]);
    for(int i = 1;i<intervals.size();i++){
        if(intervals[i][0] <= ans[index][1]) {
            ans[index][1] = max(ans[index][1],intervals[i][1]);
        }
        else{
            ans.push_back(intervals[i]);
            index++;
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> intervals = {{1,3},{2,6},{15,18},{8,10}};
    vector<vector<int>> ans = mergeIntervals(intervals);
    for(auto i:ans){
        cout << '(' << i[0] << "," << i[1] << "), ";
    }
    return 0;
}