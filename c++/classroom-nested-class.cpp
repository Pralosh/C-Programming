#include<iostream>

#include "Calculator.h"

using namespace std;

// custom namespace;
namespace demoNameSpace{

    int add(int x,int y){
        return x+y;
    }

    namespace test{

        string demo(){
            return "I am nested namespace";
        }
    }
}
int main(){
    cout<<demoNameSpace::add(10,20) <<endl;
    cout<<Calculator::add(10,5) <<endl;
    cout<<demoNameSpace::test::demo();
}

// c17
