#include<bits/stdc++.h>
using namespace std;
class person{
    private:
        int age;
        string name;
        float height;
    public:
        person(){
            age=1;
            name="default";
        }
        
        void getdata(){
            cout<<"age is   "<<age<<endl;
            cout<<"height is  "<<height<<endl;
            cout<<"name is  "<<name;
        }
};
int main(){
    // A a(); error
    
    person a;

    a.getdata();
    return 0;
}