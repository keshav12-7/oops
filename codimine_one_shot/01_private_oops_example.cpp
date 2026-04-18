#include<bits/stdc++.h>
using namespace std;
// class 

class house{
    // public:
    // member variables


    int l,b;

    // member functions 


    void setData(int x , int y){
        l=x;
        b=y;
    }
    void area(){
        cout<<l*b;
    }
};
int main(){
    house h1 ; // object created
    h1.setData(20,30);
    h1.area();

    return 0;
}