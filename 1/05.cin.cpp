/*************************************************************************
	> File Name: 5.cin.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 15 Sep 2024 08:32:21 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    cout << "a = " << a << endl;
    double b;
    char c[100];
    cin >> a >> b >> c;
    cout << a <<" " << b << " " << c << endl;
    while(cin >> a){
        cout << "EOF read: a =  " << a << endl;
    }
    return 0;

}
