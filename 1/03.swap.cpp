/*************************************************************************
	> File Name: 3.swap.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 15 Sep 2024 05:03:38 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#define P(msg) {\
    printf("%s = %d\n", #msg, msg);\
}
void swap(int &pa, int &pb){
    int c = pa;
    pa = pb;
    pb = c;
    return;
}

void inc(int &x){
    x += 1;
}

int main(){
   int a = 3, b = 6;
    P(a);
    P(b);
    swap(a, b);
    P(a);
    P(b);
    int c = 5;
    P(c);
    inc(c);
    P(c);
    int &d = c;
    d += 100;
    P(c);
    P(d);
    return 0;
}
