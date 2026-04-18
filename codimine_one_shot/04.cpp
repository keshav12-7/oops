#include<bits/stdc++.h>
using namespace std;
class A{
    private:
    int age;
    public:
    A(int x){
        age = x;
    }
    int getdata(){
        return age;
    }
};
int main(){
    A a_obj(23);
    cout<<a_obj.getdata();


    return 0;
}