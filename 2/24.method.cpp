/*************************************************************************
	> File Name: 24.method.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 17 Sep 2024 03:58:54 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class People{
public :
    void say(){
        cout << "say something : " << this << endl;
    }
    static void say2(){
        cout << "class method: say something" << endl;
    }
};

int main(){
    People a;
    a.say();
    People::say2();
    return 0;
}
