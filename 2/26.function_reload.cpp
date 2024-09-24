/*************************************************************************
	> File Name: 26.function_reload.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 17 Sep 2024 04:25:57 AM CST
 ************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int add(int a, int b){
    cout << "add(int, int) : " << a + b << endl;
    return a + b;
}

int add(int a, int b, int c){
    cout << "add(int, int, int) : " << a + b + c <<endl;
    return a + b + c;
}

double add(double a, double b){
    cout << setprecision(4) << "add(double, double) : " << a + b << endl;
    return a + b;
}

int main(){
    add(3, 4);
    add(1, 2, 3);
    add(3.2, 4.5276);
    return 0;
}
