/*************************************************************************
	> File Name: 2.namespace.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 15 Sep 2024 01:46:06 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

namespace apple{
    int cnt = 0;
    void inc(){
        cnt += 1;
        return;
    }

}

namespace banana{
int cnt = 0;
void inc(){
    cnt += 1;
    return;
}
}
namespace apple{
    void dec(){
        cnt -= 1;
        return;
    };
}

namespace{
    int a = 1;
}

#define P(msg) {\
    printf("%s = %d\n", #msg, msg);\
}

int main(){
    P(a);
    cout << "hello world" << endl;
    apple::cnt += 2;
    P(apple::cnt);
    apple::dec();
    P(apple::cnt);
    using banana::cnt;
    cnt += 100;
    P(apple::cnt);
    P(banana::cnt);
    using namespace banana;
    inc();
    P(apple::cnt);
    P(banana::cnt); 
    return 0;
}
