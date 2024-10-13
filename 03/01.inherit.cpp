/*************************************************************************
	> File Name: 01.inherit.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Thu 03 Oct 2024 09:51:17 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
class Animal{
public:
    Animal(string name) : name(name){}
    void say(){
        cout << "my name is " << name << endl;
        return;
    }
protected:
    string name;
};

class Cat : public Animal{
public:
    Cat(string name): Animal(name){}
    void run(){
        cout << "I can run run run run......" << endl;
        return;
    }
};
class Dog : public Animal{
public:
    Dog(string name) : Animal(name){}
    void run(){
        cout << "I can run run run run......" << endl;
        return;
    }
};
class Bat : public Animal{
public:
    Bat(string name) : Animal(name){} 
    void fly(){
        cout << "I can fly, I am " << this->name << "!!!!!!"<< endl;
    }
};

int main(){
    Cat a1("Garfield");
    Dog a2("Odie");
    Bat a3("Dracula");
    a1.say();
    a2.say();
    a3.say();
    a1.run();
    a2.run();
    a3.fly();

    return 0;
}
