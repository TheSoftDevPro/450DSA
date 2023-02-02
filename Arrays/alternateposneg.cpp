#include<bits/stdc++.h>
#include<iostream>
using namespace std;


vector<int> alternatePosNeg(vector<int> nums){
    int i = 0;
    int j = nums.size()-1;
    while(i<j){
        while(nums[i] >= 0){
            i++;
        }
        while(nums[j] < 0){
            j--;
        }
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
    i = 0;
    j = nums.size()-1;
    while(i<nums.size() && j >=0 ){
        swap(nums[i],nums[j]);
        i+=2;
        j--;
    }
    return nums;
}

int main(){
    vector<int> nums = {2,3,-4,-1, 6, -9};
    nums = alternatePosNeg(nums);
    for(int i:nums){
        cout << i << ' ';
    }
}