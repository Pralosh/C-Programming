#include<iostream>

using namespace std;


class A{

    public:
        string grand_father="Mobile";

};

class B{

    public:
        string father="MI";

};

class C:public A,public B{

    public:
       void display_name(){
            cout<<grand_father;
       }

};



int main(){

    C obj;
    obj.display_name();


}
