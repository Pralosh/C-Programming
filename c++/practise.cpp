#include<iostream>

using namespace std;

class Introduction{

   public:
        string name;
        int age;
        string address;

};


int main(){
    Introduction ojb;
    ojb.name="Sophia";
    ojb.age=10;
    ojb.address ="US";

    cout<<"=========Display Value =======\n";
    cout<<"Your name is: "<<ojb.name <<"\n";
    cout<<"Age: " <<ojb.age <<"\n";
    cout<<"Address: "<<ojb.address;

}
