/*************************************************************************
	> File Name: 218HZOJ.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 16 Sep 2024 03:09:10 AM CST
 ************************************************************************/

#include<iostream>
#include<map>
#include<vector>
using namespace std;


int main(){
    int n, tem;
    cin >> n;
    map<int, vector<int>> height;
    for(int i = 1; i <= n; i++){
        cin >> tem;
        height[tem].push_back(i);
    }
    int flag = 0;
    for(auto x: height){
        for(auto y: x.second){
            if(flag) cout << " ";
            cout << y;   
            flag = 1;
        }
    }
    cout << endl;

    return 0;
}
