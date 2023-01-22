#include<bits/stdc++.h>
#include<iostream>
using namespace std;


vector<int> arrayUnion(vector<int> &A,vector<int> &B){
    int i = 0;
    int j = 0;
    int n = A.size();
    int m = B.size();
    vector<int> ans;
    int index=0;
    while(i < n && j < m){
        if(A[i] > B[j]){
            if(!(index!=0 && B[j] == ans[index-1])){
                ans.push_back(B[j]);
                index++;
            }
            j++;
        }
        else{
            if(!(index!=0 && A[i] == ans[index-1])){
                ans.push_back(A[i]);
                index++;
            }
            i++;
        }
    }
    while(i < n){
        if(!(index!=0 && A[i] == ans[index-1])){
            ans.push_back(A[i]);
            index++;
        }
        i++;
    }
    while(j < m){
        if(!(index!=0 && B[j] == ans[index-1])){
            ans.push_back(B[j]);
            index++;
        }
        j++;
    }
    return ans;
}

int main(){
    vector<int> A = {1,1,3,4,4,5,10,12,12};
    vector<int> B = {2,5,5,6};
    vector<int> ans = arrayUnion(A,B);
    for(int i :ans) cout << i << " ";
}