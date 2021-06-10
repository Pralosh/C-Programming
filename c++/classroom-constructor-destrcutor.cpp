#include<iostream>

using namespace std;

class Single{

    public:

        Single(){
            cout<<" I am constructor" <<endl;
        }

        ~Single(){
         cout<<"Destructor";
        }



    protected:
        int money;


};



int main(){
    Single obj;


}
