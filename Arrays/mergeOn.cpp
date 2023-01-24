#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void merge(vector<int> &arr1,vector<int> &arr2){
    int i = 0,j=0,k=arr1.size()-1;
    int m = arr2.size();
    while(i <= k && j < m){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            swap(arr2[j++],arr1[k--]);
        }
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
}

int main(){
    vector<int> arr1 = {0,2,4,6,8};
    vector<int> arr2 = {1,3,5,7};
    cout << "before merge: \n";
    for(int i:arr1) cout << i << " ";
    cout << endl;
    for(int i:arr2) cout << i << " ";
    cout << endl;
    merge(arr1,arr2);
    cout << "after merge: \n";
    for(int i:arr1) cout << i << " ";
    cout << endl;
    for(int i:arr2) cout << i << " ";
    cout << endl;
    return 0;

}