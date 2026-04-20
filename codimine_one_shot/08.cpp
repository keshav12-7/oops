#include<bits/stdc++.h>
using namespace std;
class person{
    private:
    string name;
    int age;
    float height;
    public:
    person(){
        name = "Null";
        age = 0;
        height = 0.0f;
    }
    person(string x, int y, float z){
        name =x;
        age =y;
        height = z;
    }
    void getter(){
        cout<<"name is "<<name<<endl<<"age is "<<age<<endl<<"height is "<<height<<endl;
    }
};
int main(){
    person keshav;
    keshav.getter();
    person keshav2("keshav",22,170.00);
    keshav2.getter();
    return 0;
}