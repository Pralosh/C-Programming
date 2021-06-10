#include<iostream>

using namespace std;

class Single{

    public:
        Single(int x){
            cout<<"I am parent";
        }

     protected:
        int phone;

};


class Demo:public Single{

        public:

            Demo(int i):Single(i){

            }

          void  setPhone(int new_number){
              phone=new_number;
          }

          int getPhone(){
              return phone;
          }


};



int main(){
    Demo obj(10);

    obj.setPhone(98787);
    cout<<obj.getPhone();


}
