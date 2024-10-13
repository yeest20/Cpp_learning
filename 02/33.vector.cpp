/*************************************************************************
	> File Name: 33.vector.cpp
	> Author:YEE 
	> Mail:15509992895@163.com 
	> Created Time: Tue 17 Sep 2024 04:05:47 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

class my_vector{
public:
    typedef int* iterator;
    my_vector(): n(2), data(new int[n]), tail(0){}
    void push_back(int x){
        if(tail == n){
            expend();
        }
        data[tail++] = x;
        return;
    }
    int size(){return tail;}
    int &operator[](int ind) {return data[ind];}
    int *begin(){return data;}
    int *end(){return data + tail;}

private:
    void expend(){
        int *new_data = new int[2 * n];
        for(int i = 0; i < tail; i++){
            new_data[i] = data[i];
        }
        delete[] data;
        data = new_data;
        cout << "expend :" << n << " -> " << 2 * n << endl; 
        n *= 2;
        return;
    }
    size_t n, tail;
    int *data;
    iterator iter;
};

int main(){
    vector<int> a;
    my_vector b;
    for(int i = 0; i < 10; i++){
        a.push_back(rand() % 100);
    }
    cout << "vector<int> a push_back done" << endl;
    
    for(int i = 0; i < 10; i++){
        b.push_back(rand() % 100);
    }
    cout << "my_vector b push_back done" << endl;

    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "vector<int> a for:  done" << endl;

    for(int i = 0; i < b.size(); i++){
        cout << b[i] << " ";
    }
    cout <<endl;
    cout << "my_vector b for:  done" << endl;
  
    for(int i = 0; i < a.size(); i++){
        a[i] = 2 * i;
    }
    cout << "vector<int> a modify:  done" << endl;
    
    for(int i = 0; i < b.size(); i++){
        b[i] = 3 * i;
    }
    cout << "my_vector b modify:  done" << endl;
     
    for(vector<int> :: iterator iter = a.begin(); iter != a.end(); iter++){
        int x = *iter;
        cout << x << " ";
    }
    cout << endl;
    cout << "vector<int> a iterator:  done" << endl;

    for(my_vector :: iterator iter = b.begin(); iter != b.end(); iter++){
        int x = *iter;
        cout << x << " ";
    }
    cout << endl;
    cout << "my_vector b iterator:  done" << endl;

    for(int x : a){
        cout << x <<" ";
    }
    cout << endl;
    cout << "vector<int> a for(x : a):  done" << endl;
    
    for(int x : b){
        cout << x <<" ";
    }
    cout << endl;
    cout << "my_vector b for(x : b):  done" << endl;
    return 0;

}
