#include<bits/stdc++.h>
using namespace std;
class phone_details{
    private:
    string name;
    string RAM;
    string processor;
    string battery;


    public:
    phone_details(string name_a = "none",string RAM_a = "0GB", string processor_a="none",string battery_a="0MAH"){
        name = name_a;
        RAM = RAM_a;
        processor=processor_a;
        battery=battery_a;
    }

    phone_details(phone_details&phone){
        name=phone.name;
        RAM=phone.RAM;
        processor=phone.processor;
        battery=phone.battery;
    }
    void getter();  //function defined inside the class 
};
void phone_details::getter(){ //function body created outside the class
    cout<<"name of phone is "<<name<<endl<<"RAM of phone is "<<RAM<<endl<<"processor of phone is "<<processor<<endl<<"battery of phone is "<<battery<<endl;
}
int main(){
    phone_details p1("vivo v12","12GB","helio G95","5000 mah");
    p1.getter();
    phone_details p2 = p1;
    p2.getter();
    phone_details p3(p2);
    p3.getter();
    phone_details p4;
    p4.getter();

    return 0;
}