#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void sort012(vector<int> &arr){
    int zero = 0,one = 0,two = 0;
    for(int i:arr){
        if(i == 0) zero++;
        else if(i == 1) one++;
        else two++;
    }
    for(int i:arr)
        cout << i << " ";
    cout << endl;
    cout << zero << " " << one << " " << two << endl;
    for(int i = 0;i<arr.size();i++){
        if(zero-- > 0) arr[i] = 0;
        else if(one-- > 0) arr[i] = 1;
        else if(two-- > 0) arr[i] = 2;
    }
    
}

int main(){
    vector<int> arr = {2,0,1,1,0,2,1,1,0,0,2,1,0,1,1,0,0,1,2,2,1};
    sort012(arr);
    for(int i:arr)
        cout << i << " ";
    cout << endl;
    return 0;
}