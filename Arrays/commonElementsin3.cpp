#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector <int> commonElements (vector<int> &A, vector<int> &B, vector<int> &C){
    int n1 = A.size();
    int n2 = B.size();
    int n3 = C.size();
    vector<int> ans;
    int index = 0;
    //code here.
    int i=0,j=0,k=0;
    while(i<n1 && j<n2 && k<n3){
        if(A[i] == B[j] && A[i] == C[k]){
            if(index > 0 && A[i] == ans[index-1]) index = index;
            else{
                ans.push_back(A[i]);
                index++;
            }

            i++;
            j++;
            k++;
        } 
        if(A[i] > B[j]) j++;
        if(A[i] > C[k]) k++;
        if(B[j] > A[i]) i++;
        if(B[j] > C[k]) k++;
        if(C[k] > A[i]) i++;
        if(C[k] > B[j]) j++;
    }
    if(ans.size() == 0) return {-1};
    return ans;
}

int main(){
    vector<int> A = {1, 5, 10, 20, 40, 80};
    vector<int> B = {6, 7, 20, 80, 100};
    vector<int> C = {3, 4, 15, 20, 30, 70, 80, 120};
    vector<int> ans = commonElements(A,B,C);
    for(int i : ans) cout << i << " ";
    return 0;

}