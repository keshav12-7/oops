# include<bits/stdc++.h>
using namespace std; 
class house{
    public:
    int length;
    int breadth;
    void setdata(int x, int y){
        length=x;
        breadth =y;

    }
    void area(){
        cout<<(length*breadth);
    }

};

int main(){
    house h1;
    h1.setdata(20,30);
    
    h1.length=40;
    h1.area();
    cout<<endl<<h1.length;
    return 0;
}