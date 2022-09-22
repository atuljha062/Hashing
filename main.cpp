// #include<bits/stdc++.h>
#include<iostream>
#include<unordered_set>

using namespace std;


int main(){
    unordered_set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);

    if(s.find(10) == s.end()){
        cout<<"Not Found"<<endl;
    }else{
        cout<<"Found"<<endl;
    }

    s.erase(20);
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<(*it)<<" ";
    }

    if(s.count(20) == 0){
        cout<<"Not Present"<<endl;
    }else{
        cout<<"Present";
    }


    s.clear();

    cout<<s.size();
}