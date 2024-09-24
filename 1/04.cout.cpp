/*************************************************************************
	> File Name: 4.cout.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 15 Sep 2024 05:28:08 PM CST
 ************************************************************************/
#include<iostream> //input output stream
#include<iomanip>
using namespace std;

int main(){
    int a = 123;
    cout << "hello world" << endl;
    cout << a << endl;
    cout << "a = " << a << endl << "yes" << endl;
    double b = 12.3456;
    cout << b << endl;
    printf("%lf\n", b);
    printf("%g\n", b);
    cout << setprecision(4) << b << endl;
    cout << fixed << setprecision(1) << b << endl;
    return 0;
}
