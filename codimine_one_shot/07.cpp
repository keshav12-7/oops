#include<bits/stdc++.h>
using namespace std;
class person{
    private:
    string name;
    int age;
    float height;
    public:
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
    person keshav("keshav",22.5,169.6);
    keshav.getter();
    return 0;
}