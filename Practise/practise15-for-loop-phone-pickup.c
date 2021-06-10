#include<stdio.h>

int main(){

    int num,price,quantity,rate,delivery,del_cost,pack,p_pack,loc,sum_rate;
    int sum_del_cost = 0;
    int sum_p_pack = 0;
    float vat,total,sum_vat,sum_total;
    char name[10];
    printf("Please, enter how many phones you want to buy: ");
    scanf("%d", &num);

    int i=0;
    for(i;i<num;i++){
        printf("Enter the Brand : ");
        scanf("%s", &name);
        printf("Enter the price of the Smartphone : ");
        scanf("%d", &price);
        printf("Enter the quantity : ");
        scanf("%d", &quantity);

        rate = price*quantity;

        delivery_opt:
        printf("Please, Choose the delivery option below. \n 1.Home Delivery \n 2.Pickup \n");
        printf("Enter The Delivery Option No. \n > ");
        scanf("%d", &delivery);

        if(delivery>0 && delivery<3){
            if(delivery==1){
                del_cost=1000;
                printf("Your Delivery Charge will be Rs1000.", del_cost);
            }
            else{
                del_cost=0;
                printf("You have chosen to Pickup your Parcel. \n");
            }
        }
        else{
            printf("Please Choose from the given option(s). \n");
            goto delivery_opt;
        }

        pack_opt:
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
        }
        else{
            printf("Please Choose from the given option(s). \n");
            goto pack_opt;
        }

        loc_opt:
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
        }
        else{
            printf("Please Choose from the given option(s). \n");
            goto loc_opt;
        }

        total = rate+del_cost+p_pack+vat;
        sum_rate += rate;
        sum_total += total;
        sum_del_cost += del_cost;
        sum_p_pack += p_pack;
        sum_vat += vat;

    }

    printf("- Your Total cost before packaging, delivery charge and VAT is %d. \n", sum_rate);
    printf("- Your Delivery Cost is %d. \n", sum_del_cost);
    printf("- Your Packaging Cost is %d. \n", sum_p_pack);
    printf("- Your Extra VAT amount is %.2f. \n", sum_vat);
    printf("- Your Grand Total Amount is %.2f.", sum_total);
}
