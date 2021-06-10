// public, private, protected


#include<iostream>

using namespace std;

class Students{
    private:
        int roolNum;
        string name ="Sophia";

    public:
       void setRollNum(int rn){
                roolNum = rn;
       }
       int getRollNum(){
            return roolNum;
       }
       string getName(){
           return name;
       }
};


int main(){
    Students obj;
    obj.setRollNum(1);
    cout<<obj.getRollNum() <<endl;
    cout<<obj.getName();


}
