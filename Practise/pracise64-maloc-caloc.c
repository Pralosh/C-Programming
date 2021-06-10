#include<stdio.h>
#include<stdlib.h>

int main(){
    int number,i,total=0;
    int *myPtr;
    printf("Enter number of elements: ");
    scanf("%d",&number);
    // myPtr =(int*)malloc(number*sizeof(int));
    myPtr =(int*)calloc(number,sizeof(int));
    if(myPtr==NULL){
        printf("Not allocated");
        exit(1);
    }else{
        for(i=0;i<number;i++){
            myPtr[i] = i+1;
            total+=myPtr[i];
        }

        printf("Number list is: \n");
        for(i=0;i<number;i++){
            printf("%d",myPtr[i]);
        }
        printf("Total: ");
        printf("%d",total);
    }
    free(myPtr);


}
