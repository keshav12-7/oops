#include<bits/stdc++.h>
using namespace std;
class rectangle{
    public:
    int length,breadth;
    rectangle(int l=0, int b=0){
        length=l;
        breadth=b;
    }
    void show(){
        cout<<"length is "<<length<<endl<<"breadth is "<<breadth<<endl;

    }
    void area(){
        cout<<"area is "<<length*breadth<<endl;
    }

};
class cuboid : public rectangle{
    public:
    int height ;
    cuboid(int h =0){
        
    }
    void volume(){
        cout<<"volume is "<<length*breadth*height<<endl;
    }
};
int main(){
    cuboid c;
    c.length=2,c.breadth=3,c.height=5;
    c.show();
    c.area();
    c.volume();
    return 0;
}
