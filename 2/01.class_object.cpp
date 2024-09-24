/*************************************************************************
	> File Name: 1.class_object.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 16 Sep 2024 06:15:20 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Cat{};
class Dog{};
class People{
public :
    string name;
    int age;

    void say(){
        cout << "My name is " << name << ", "<< age << " years old" << endl;
        return;
    }
};

int main(){
    Cat garfiled;
    Dog odie1, doie2;
    People hug, song;

    hug.name = "Captain Hu";
    hug.age = 50;
    hug.say();

    song.name = "Captain Song";
    song.age = 32;
    song.say();

    return 0;
}
