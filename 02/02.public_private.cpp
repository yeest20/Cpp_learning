/*************************************************************************
	> File Name: 2.public_private.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 16 Sep 2024 06:34:04 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class People{
public:
    string name;
    int age;
    
    void introduce(){
        cout << "Myname is " << name << ", " << age << " years old " << endl;
        return;
    }
};

int main(){
    People hug;
    hug.name = "Captain Hu";
    hug.age = 50;
    hug.introduce();
    return 0;
}
