/*************************************************************************
	> File Name: 23.property.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 17 Sep 2024 03:46:31 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class People{
public:
    People(){
        cnt += 1;
    }
    ~People(){
        cnt -= 1;
    }
    string name;
    static int cnt;
};

int People::cnt = 0;

void f(){
    People a, b;
    cout << People::cnt << endl;
}

int main(){
    People a, b;
    cout << People::cnt << endl;
    People c;
    cout << People::cnt <<endl;
    f();
    cout << People::cnt <<endl;
    return 0;
}
