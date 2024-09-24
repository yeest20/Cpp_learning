/*************************************************************************
	> File Name: 11.deep_copy.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 16 Sep 2024 07:53:15 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Array{
public :
    Array():n(10), data(new int[n]){
        cout << this << "default constructor " << endl;
        for(int i = 0; i < n; i++) data[i] = 0;
    }
    Array(const Array &a) : n(a.n), data(new int[n]){
        cout << this << " copy constructor " << endl;
        for(int i = 0; i < a.n; i++){
            this->data[i] = a.data[i];
        }
    }
    Array(Array &&a) : n(a.n), data(a.data){
        cout << this << "move constructor " << endl;
        a.n = 0;
        a.data = nullptr;
    }
    int size(){return n;}
    
    void set(int id, int val){
        data[id] = val;
        return;
    }

    void output(){
        for(int i = 0; i < n; i++){
            cout << data[i] << " ";
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
        delete[] data;
        return ;
    }
private:
    int n, *data;
};


int main(){
    Array a, b = a.duplicate();
    Array c;
    cout << &a << endl;
    cout << &b << endl;
    Array d = std::move(c);
    return 0;
}
