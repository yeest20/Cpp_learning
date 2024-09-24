/*************************************************************************
	> File Name: 30.function_object.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 17 Sep 2024 03:07:06 PM CST
 ************************************************************************/

#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;

int add(const int a, const int b) {
    cout << "add function run :" << a + b << endl;
    return a + b;
}

class ADD{
public:  
    int operator()(const int a,const int b) const {
        cout << "class ADD function object : "<< a + b << endl;
        return a + b;
    }
};

class CMP{
public:
    CMP(int tag = 0) : tag(tag){}
    bool operator()(int a, int b) const{
        cout << tag << endl;
        return a > b;
    }
    int tag;
};

//bool cmp(int a, int b){
//    return a > b;
//}

void output(int a[], int n){
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}
int main(){
    add(3, 4);
    ADD add2;
    add2(3, 4);
    CMP cmp; 
    int a[10] = {4, 5, 3, 1, 9, 8, 7, 2, 6, 10};
    sort(a, a + 10, CMP(2333));//cmp(a, b);
    output(a, 10);
    return 0;
}
