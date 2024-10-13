/*************************************************************************
	> File Name: 31.array_object.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 17 Sep 2024 03:33:08 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Array{
public :
    Array() : data(new int[10]) {}
    int &operator[](int ind) const{
        return data[ind];
    }
    int *data;
};


int main(){
    Array a;
    for(int i = 0; i < 10; i++){
        a[i] = rand() % 100;
    }
    for(int i = 0; i < 10; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
