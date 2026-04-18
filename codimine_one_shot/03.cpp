#include<bits/stdc++.h>
using namespace std;
class house {
    private:
    int length,breadth;

    public:
    void set_data(int x, int y){
        length = x;
        breadth =y;
    }
    void area(){
        cout<<length*breadth;
    }
};
int main(){
    house h1;
    h1.set_data(20,30);
    h1.area();
    // h1.length =20;

    return 0;
}