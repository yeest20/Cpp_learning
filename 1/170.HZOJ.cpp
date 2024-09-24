/*************************************************************************
	> File Name: 170.HZOJ.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Mon 16 Sep 2024 02:25:30 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;


int main(){
    int n;
    string s;
    string olds = "Ban_smoking", news = "No_smoking";
    cin >> n;
    while(n--){
        cin >> s;
        do{
            int pos = s.find(olds);
            if(pos == -1) break;
            s.replace(pos, olds.length(), news);
        }while(1);
        cout << s << endl;

    }

    return 0;
}
