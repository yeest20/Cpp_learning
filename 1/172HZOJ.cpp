/*************************************************************************
	> File Name: 172HZOJ.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 16 Sep 2024 03:42:57 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
    set<string> stu;
    string name;
    for(int i = 0; i < 10; i++){
        cin >> name;
        stu.insert(name);
    }
    for(auto x: stu){
        cout << x << endl;
    }
    return 0;
}
