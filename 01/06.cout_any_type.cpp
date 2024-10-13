/*************************************************************************
	> File Name: 6.cout_any_type.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 15 Sep 2024 08:52:05 PM CST
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;

struct Point{
    int x, y;
};

ostream &operator << (ostream &out, const Point &p){
    out << "(" << p.x << "," << p.y << ")";
    return out;
}


int main(){
    Point p1 = {3 , 4}, p2 = {5, 99};
    printf("p1 = (%d, %d)\np2 = (%d, %d)\n", p1.x, p1.y, p2.x, p2.y);
    cout << "p1 = " << p1 << endl << "p2 = " << p2 << endl;

    return 0;
}
