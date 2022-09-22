// #include<bits/stdc++.h>
#include<iostream>
#include<unordered_map>

using namespace std;

//find the highest and lowest frequency element

pair<int,int> findHighAndLowFreq(int arr[], int n){
    pair<int,int> ans;

    unordered_map<int,int> m;

    for(int i=0;i<n;i++){
        m[arr[i]]++;
    } 

    int maxi=arr[0],mini=arr[0];
    for(auto i: m){
        if(i.second<m[mini]){
            mini = i.first;
        }
        if(i.second>m[maxi]){
            maxi = i.first;
        }
    }

    ans.first = mini;
    ans.second = maxi;

    return ans;
}

int main(){

    int arr[] = {1,2,1,1,3,1,2};

    int n = sizeof(arr)/sizeof(arr[0]);

    pair<int,int> p = findHighAndLowFreq(arr,n);

    cout<<"Minimum Freq"<<p.first<<endl;
    cout<<"MAximum Freq"<<p.second;
    return 0;
}