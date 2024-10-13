/*************************************************************************
	> File Name: 11.deep_copy.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 16 Sep 2024 07:53:15 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
class INT{
public:
    INT():px(new int(0)){
        cout << "INT constructor" <<endl;
    }
    INT(const INT &a) : px(new int(0)){
        cout << "INT constructor" <<endl;
        *px = *a.px;
    }
    ~INT(){
        cout << "INT destructor" <<endl;
        delete px;
    }
    void set(int x){
        *px = x;
        return;
    }
    int val(){
        return *px;
    }
private:
    int *px;

};

class Array{
public :
    Array():n(10), data((INT *)malloc(sizeof(INT) * n)){
        cout << this << "default constructor " << endl;
        for(int i = 0; i < n; i++){
            new(data + i) INT();
        }
    }
    Array(const Array &a) : n(a.n), data((INT *)malloc(sizeof(INT) * n)){
        cout << this << " copy constructor " << endl;
        for(int i = 0; i < a.n; i++){
            new(data + i) INT(a.data[i]); /////构造的时候不要使用，用构造函数的方式去构造
        }
    }
    Array(Array &&a) : n(a.n), data(a.data){
        cout << this << "move constructor " << endl;
        a.n = 0;
        a.data = nullptr;
    }
    int size(){return n;}
    
    void set(int id, int val){
        data[id].set(val);
        return;
    }

    void output(){
        cout << "address: "<< this->data << endl;
        for(int i = 0; i < n; i++){
            cout << data[i].val() << " ";
        }
        cout << endl;
        return;
    }

    Array duplicate(){
        return Array(*this);
    }

    ~Array(){
        cout << this << " destructor " << endl;
        if(n == 0) return;
        for(int i = 0; i < n; i++){
            data[i].~INT();
        }
        free(data);
        return ;
    }
private:
    int n; 
    INT *data;
};


int main(){
    Array a, b = a;
    a.set(0, 1001);
    b.set(0, 2002);
    a.output();
    b.output();

    return 0;
}
