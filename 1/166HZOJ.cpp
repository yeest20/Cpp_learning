/*************************************************************************
	> File Name: 166HZOJ.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sun 15 Sep 2024 09:32:17 PM CST
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string A , B, C;
    int N, L;
    cin >> A >> N >> B;
    L = A.length();
    C = A.insert(N - 1, B);
    cout << min(L, 100) << endl;
    cout << C << endl;
    cout << C.length() - C.rfind('x') << endl;
}
