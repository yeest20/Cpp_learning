/*************************************************************************
	> File Name: 38HZOJ.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Sat 12 Oct 2024 03:21:00 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

#define MAX_N
class bigInt : public vector<int>{
public:
    bigInt() {push_back(0);}
    bigInt(int x){
        this->push_back(x);
        proceess_digit();
    }    
    void proceess_digit(){
        for(int i = 0; i < size(); i++){
            if(at(i) < 10) continue;
            if(i == size() - 1) push_back(0);
            at(i + 1) += at(i) / 10;
            at(i) %= 10;
        }
    }
    bigInt operator+=(const bigInt& a){
        for(int i = 0; i < a.size(); i++){
            if(i >= size()){
                push_back(a[i]);
            }
            else at(i) += a[i];
        }
        proceess_digit();
        return *this;
    }
    bigInt operator+(const bigInt& a){
        bigInt ret(*this);
        ret += a;
        return ret;
    }

};


bigInt calcu(int n){
    bigInt arr[2] = {1, 2};
    if(n == 1) return arr[0];
    for(int i = 3; i <= n; i++){
        bigInt temp = arr[1];
        arr[1] = arr[0] + arr[1];
        arr[0] = temp;
    }
    return arr[1];
}

ostream& operator<<(ostream &out, const bigInt& b){
    for(int i = b.size() - 1; i !=-1; i--){
        out << b[i];
    }
    return out;
}

int main(){
    int n;
    cin >> n;
    cout << calcu(n) << endl;
    return 0;
}
