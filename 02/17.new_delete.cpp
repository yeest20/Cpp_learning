/*************************************************************************
	> File Name: 17.new_delete.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 17 Sep 2024 01:19:43 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class A{
public:
    A(string msg){
        cout << msg << " default constructor" << endl;
    }    
    ~A(){
        cout  << "destructor" << endl;      
    }

};


int main(){
    A *mallo_a = (A *)malloc(sizeof(A));
    free(mallo_a);
    A *new_a = new A("new");
    delete new_a;
    return 0;
}
