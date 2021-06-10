#include<iostream>

using namespace std;

class grocery{

    public:
        int a,num,packagingCost,deliveryCost,x,y,z;
        float rate,sumRate,vat,total;
        int getItemCount();
        int selectItems();
        int selectPackaging(float price[], int quantity[]);
        int selectDelivery(float price[], int quantity[], int packagingCost);
        int selectLocation(float price[], int quantity[], int packagingCost);
        int calculateData(float price[], int quantity[], int packagingCost, int deliveryCost);
        void showData();

};

int grocery::getItemCount(){

    cout << "============== Grocery List ===============" << endl;
    cout << "Enter how many items you want to buy: ";
    cin >> num;
    a = num;
    cout << "===========================================" << endl;

}

int grocery::selectItems(){

    string itemName[a];
    float price[a];
    int quantity[a];
    for(int i=0;i<a;i++){
        cout << "Please enter name of item No." << (i+1) << ": ";
        cin >> itemName[i];
        cout << "Please enter the price of the item: ";
        cin >> price[i];
        cout << "Please enter the quantity: ";
        cin >> quantity[i];
        cout << "-------------------------------------------" << endl;
    }
    cout << endl;

    selectPackaging(price, quantity);

}

int grocery::selectPackaging(float price[], int quantity[]){

    packLabel:
        cout << "============= Please choose a Packaging method below ==============" << endl;
        cout << "1. Plastic Bag \n2. Cardboard Box" << endl;
        cout << "-------------------------------------------------------------------" << endl;
        cout << "Enter the option number: ";
        cin >> x;
        cout << "-------------------------------------------------------------------" << endl;
        if(x==1){
            packagingCost = 50;
            cout << "You have chosen Plastic Packaging. It would cost Rs50." << endl;
        }
        else if(x==2){
            packagingCost = 150;
            cout << "You have chosen Cardboard Packaging. It would cost Rs150." << endl;
        }
        else{
            cout << "Please choose from the options given." << endl;
            goto packLabel;
        }
        cout << "-------------------------------------------------------------------" << endl;
        cout << endl;

        selectDelivery(price,quantity,packagingCost);

}

int grocery::selectDelivery(float price[], int quantity[], int packagingCost){

    deliveryLabel:
        cout << "============= Please choose a Delivery option below ===============" << endl;
        cout << "1. Home Delivery \n2. Pick-Up"<< endl;
        cout << "-------------------------------------------------------------------" << endl;
        cout << "Enter the option number: ";
        cin >> z;
        cout << "-------------------------------------------------------------------" << endl;
        if(z==1){
            cout << "You have chosen home delivery." << endl;
        }
        else if(z==2){
            cout << "You have chosen Pick-Up." << endl;
        }
        else{
            cout << "Please choose from the options given." << endl;
            goto deliveryLabel;
        }
        cout << "-------------------------------------------------------------------" << endl;
        cout << endl;

        selectLocation(price,quantity,packagingCost);

}

int grocery::selectLocation(float price[], int quantity[], int packagingCost){

    if(z==1){
        locationLabel:
            cout << "============= Please choose a Delivery location below ==============" << endl;
            cout << "1. Kathmandu \n2. Bhaktapur \n3. Lalitpur" << endl;
            cout << "--------------------------------------------------------------------" << endl;
            cout << "Enter the option number: ";
            cin >> y;
            cout << "--------------------------------------------------------------------" << endl;
            if(y==1){
                cout << "Kathmandu is selected. Delivery cost will be Rs100 and 13% VAT will be added." << endl;
                deliveryCost = 100;
            }
            else if(y==2){
                cout << "Bhaktapur is selected. Delivery cost will be Rs150." << endl;
                deliveryCost = 150;
            }
            else if(y==3){
                cout << "Lalitpur is selected. Delivery cost will be Rs150." << endl;
                deliveryCost = 150;
            }
            else{
                cout << "Please choose from the options given." << endl;
                goto locationLabel;
            }
            cout << "--------------------------------------------------------------------" << endl;
            cout << endl;
    }

    calculateData(price, quantity, packagingCost, deliveryCost);

}

int grocery::calculateData(float price[], int quantity[], int packagingCost, int deliveryCost){

    for(int i=0;i<a;i++){
        rate = price[i]*quantity[i];
        sumRate += rate;
    }
    if(y==1){
        vat = 0.13*sumRate;
    }
    else{
        vat = 0;
    }
    total = sumRate+vat+packagingCost+deliveryCost;
}

void grocery::showData(){

    cout << "================== The Receipt ==================" << endl;
    cout << "Net Amount: " << sumRate << endl;
    cout << "VAT Amount: " << vat << endl;
    cout << "Packaging Cost: " << packagingCost << endl;
    cout << "Delivery Cost: " << deliveryCost << endl;
    cout << "=================================================" << endl;
    cout << "Gross Total: " << total << endl;
}

int main(){

    grocery obj;
    obj.getItemCount();
    obj.selectItems();
    obj.showData();
}
