#include<stdio.h>

int main(){
    int rate;
    int del_cost;
    int p_pack;
    float vat;
    float gtotal;

    int p_samsung,p_oneplus,p_apple;
    p_samsung=80000;
    p_oneplus=85000;
    p_apple=100000;

    int num;
    printf("Please, Choose One Of The Smartphone Brands Below\n 1.Samsung \n 2.Oneplus \n 3.Apple \n");
    printf("Enter The Smartphone Brand Option No. \n > ");
    scanf("%d", &num);

    printf("\n******************** \n\n");

    if(num>0 && num<4){
            int quantity;
            printf("How much Quantity Do you need? \n > ");
            scanf("%d", &quantity);

            printf("\n******************** \n\n");

            if(num==1){
                rate=p_samsung*quantity;
            }
            else if(num==2){
                rate=p_oneplus*quantity;
            }
            else{
                rate=p_apple*quantity;
            }

            int delivery;
            printf("Please, Choose the delivery option below. \n 1.Home Delivery \n 2.Pickup \n");
            printf("Enter The Delivery Option No. \n > ");
            scanf("%d", &delivery);

            if(delivery>0 && delivery<3){
                    if(delivery==1){
                        del_cost=1000;
                        printf("Your Delivery Charge will be Rs1000. \n");
                    }
                    else{
                        del_cost=0;
                        printf("You have chosen to Pickup your Parcel. \n");
                    }

                    printf("\n******************** \n\n");

                    int pack;
                    printf("Please, Choose your packaging. \n 1.Plastic Wrap \n 2.Bag \n 3.Giftbox \n");
                    printf("Enter The Packaging Option No. \n > ");
                    scanf("%d", &pack);

                    if(pack>0 && pack<4){
                        if(pack==1){
                            p_pack=1000;
                            printf("You have chosen Plastic Wrap. It will cost Rs1000. \n");
                        }
                        else if(pack==2){
                            printf("You have chosen Bag. It will cost Rs2000. \n");
                            p_pack=2000;
                        }
                        else{
                            printf("You have chosen Giftbox. It will cost Rs5000. \n");
                            p_pack=5000;
                        }

                        printf("\n******************** \n\n");

                        int loc;
                        printf("Please, Choose a Location Below. \n 1.Kathmandu(KTM) \n 2.Bhaktapur(BKT) \n 3.Lalitpur(LTP) \n");
                        printf("Enter The Location option No. \n > ");
                        scanf("%d", &loc);

                        if(loc>0 && loc<4){
                            if(loc==1){
                                printf("You have chosen Kathmandu. Your item will have 13%% extra VAT added. \n");
                                vat=(0.13)*rate;
                            }
                            else if(loc==2){
                                printf("You have chosen Bhaktapur. No extra VAT will be Added. \n");
                                vat=(0)*rate;
                            }
                            else{
                                printf("You have chosen Lalitpur. No extra VAT will be Added. \n");
                                vat=(0)*rate;
                            }

                            printf("\n******************** \n\n");

                            gtotal=rate+del_cost+p_pack+vat;

                            printf("- Your Total cost before packaging, delivery charge and VAT is %d. \n", rate);
                            printf("- Your Taxable Amount is %d. \n", rate);
                            printf("- Your Extra added VAT is %.2f \n", vat);
                            printf("- Your Grand-Total would be %.2f \n", gtotal);
                        }
                        else{
                            printf("Please Choose from the options. \n");
                        }
                    }
                    else{
                        printf("Please Choose from the options. \n");
                    }
            }
            else{
                printf("Please Choose from the options. \n");
            }
    }
    else{
        printf("Please choose from the option. \n");
    }
}

