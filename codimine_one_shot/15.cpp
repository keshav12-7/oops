#include<bits/stdc++.h>
using namespace std;
class rectangle{
    public:
    int len;
    int breadth;
    void show(){
        cout<<len<<endl<<breadth<<endl;    
    }
};
class cuboid : public rectangle{
    public:
    int height ;
    void display(){
        cout<<height<<endl;
        cout<<len*breadth*height<<endl;

    }

};
int main(){
    rectangle r;
    r.len=10;
    r.breadth=20;
    r.show();
    cuboid c;
    c.len=2,c.breadth=3,c.height=5;
    c.show();
    c.display();
    
    return 0;
}