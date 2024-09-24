/*************************************************************************
	> File Name: 09.function.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 16 Sep 2024 04:22:03 AM CST
 ************************************************************************/

#include<iostream>
#include<functional>
using namespace std;

void test(){
    cout << "hello test" << endl;
}
int add(int a, int b){
    cout << "normal function : ";
    return a + b;
}

class ADD{
public :
    int operator()(int a, int b) const{
        cout <<"function object : ";
        return a + b;
    }
} add2;


int main(){
    function<void()> fp1 = test;
    fp1();
    function<int(int, int)> fp2 = add;
    cout << fp2(3, 4) << endl;
    cout << add2(3, 4) << endl;
    fp2 = add2;
    cout << fp2(3, 4) << endl;
    auto add3 = [](int a, int b) -> int{
        cout << "lamda : ";
        return a + b;
    };
    fp2 = add3;
    cout << fp2(3, 4) << endl;
    return 0;
}
