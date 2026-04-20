 #include<bits/stdc++.h>
 using namespace std;
 class A{
    private:
    int age ;

    public:
    A(int x){
        age = x;
    }
    A(A&a){  //copy constructor
        age = a.age;
    }
    void getter(){
         cout<<age<<endl;
    }



 };
 int main(){
    A a1(23);
    A a2(a1);
    a1.getter();
    a2.getter();
    cout<<&a1<<" "<<&a2; // both have different refrence 
    return 0;
 }