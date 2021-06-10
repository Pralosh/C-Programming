#include<iostream>

using namespace std;

class calculator{

    public:
        int n1,n2,sum,sub,mul;
        float div;
        int takeValue();
        int calculate(int n1, int n2);
        void display();

};

int calculator::takeValue(){

    cout << "Enter a number: ";
    cin >> n1;
    cout << "Enter another number: ";
    cin >> n2;
    calculate(n1,n2);

}
int calculator::calculate(int n1, int n2){

    sum = n1+n2;
    sub = n1-n2;
    mul = n1*n2;
    div = float (n1)/ float (n2);

}
void calculator::display(){

    cout << "Sum is: "<< sum << endl;
    cout << "Subtraction is: " << sub << endl;
    cout << "Multiplication is: " << mul << endl;
    cout << "Division is: " << div;

}

int main(){

    calculator calc;
    calc.takeValue();
    calc.display();

}
