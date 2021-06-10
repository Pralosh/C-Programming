#include<iostream>

using namespace std;

// Base class

class Mobile{
    public:
        string company ="Chinese";
        void demo(){
            cout<<"I am demo function";
        }

//    protected:
//        int price;

};

// Derived class
class Mi: public Mobile{

    public:
        string mobile_name="Mi";

};



int main(){
    Mi obj;
   cout<<obj.company <<endl;
   cout<<obj.mobile_name;

   obj.demo();
}
