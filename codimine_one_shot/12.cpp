#include<bits/stdc++.h>
using namespace std;
class A{
    private:
    int weight;
    public:
    A(int x =0){
        weight=x;
    }
    A addweight(A w2){
        A temp;
        temp.weight=weight + w2.weight;
        return temp;
    }

    void getter(){
        cout<<weight<<endl;
    }
};
int main(){
    A p1(75);
    A p2(63);
    A total;
    total = p1.addweight(p2);
    total.getter();
    total= p2.addweight(p1);
    total.getter();
}