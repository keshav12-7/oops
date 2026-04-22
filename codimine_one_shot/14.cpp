#include<bits/stdc++.h>
using namespace std;
class person{
    private:
    int weight;
    public:
    person(int weight_a =0){
        weight = weight_a;
    }
    void operator ++ (){ //pre increment
        ++weight;
    }

    void operator ++ (int){ //post increment
        weight++;
    }
    void getter(){
        cout<<weight<<endl;
    }

};
int main(){
    person john(23);
    // ++john; error occors

    john.getter();
    ++john;
    john.getter();
    john++;
    john.getter();
    return 0;
}