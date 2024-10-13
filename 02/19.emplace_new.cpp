/*************************************************************************
	> File Name: 19.emplace_new.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 17 Sep 2024 01:48:55 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    A() = delete;
    A(int x) : x(x){
        cout << "int constructor" << endl;
    }
    ~A(){
        cout << "destructor" << endl;
    }
    void output(){
        cout << this->x << endl;
    }
    int x;
};

int main(){
    A *arr = (A *)malloc(sizeof(A) * 5);
    for(int i = 0; i < 5; i++){
        new(arr + i) A(i);
    }
    for(int i = 0; i < 5; i++){
        arr[i].output();
    }
    for(int i = 0; i < 5; i++){
       arr[i]. ~A();
    }
    free(arr);
    return 0;
}
