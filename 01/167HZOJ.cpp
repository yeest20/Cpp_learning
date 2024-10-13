/*************************************************************************
	> File Name: 167HZOJ.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 15 Sep 2024 10:23:22 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string a, b;
    int n;
    cin >> a >> n >> b;
    cout << a.length() << endl;
    cout << a.find('a') + 1 << endl;
    cout << a.insert(n - 1, b) << endl;
    return 0;
}
