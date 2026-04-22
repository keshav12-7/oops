#include<bits/stdc++.h>
using namespace std;
class person{
    private:
    string name;
    int age;
    float height;
    public:
    // person(){ //non-parameterized/ default constructor

    //     name = "null";
    //     age=0;
    //     height=0.0f;
    // }
    person(string name_a="null",int age_a =0,float height_a = 0.0f){
        name = name_a;
        age = age_a;
        height = height_a;
    }
    void getter(){
        cout<<name<<endl<<age<<endl<<height<<endl;
    }

};
int main(){
    person p1("keshav",23,170.3) ;
    p1.getter();
    person p2 ;
    p2.getter();

    return 0;
}