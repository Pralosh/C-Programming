#include<stdio.h>
#include<stdlib.h>

int main(){
    int number1,number2,i,total=0;
    int *myPtr;
    printf("Enter number of elements: ");
    scanf("%d",&number1);
     myPtr =(int*)malloc(number1*sizeof(int));

    if(myPtr==NULL){
        printf("Not allocated");
        exit(1);
    }else{
        for(i=0;i<number1;i++){
            myPtr[i] = i+1;
            total+=myPtr[i];
        }

         for(i=0;i<number1;i++){
            printf("%d\n",*myPtr+i);
        }
        printf("Enter number 2: ");
        scanf("%d",&number2);
        myPtr=realloc(myPtr,number2*sizeof(int));
         for(i=number1;i<number2;i++){
            printf("%d\n",*myPtr+i);
        }


    }
    free(myPtr);


}
