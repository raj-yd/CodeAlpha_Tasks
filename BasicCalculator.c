#include<stdio.h>
int main(){
    printf("Basic Calculator\n\n");
    float num1,num2,result;
    char op;
    printf("Enter first number : ") ;
    scanf("%f",&num1);
    printf(" Enter Operator : ") ;
    scanf(" %c",&op) ;
    printf(" Enter Second number : ") ;
    scanf("%f",&num2) ;
    switch(op){
        case '+':
            result=num1+num2;
            printf("Result = %f",result) ;
            break;
        case '-':
            result=num1-num2;
            printf("Result = %f",result) ;
            break;
        case '*':
            result=num1*num2;
            printf("Result = %f",result) ;
            break;
        case '/':
            result=num1/num2;
            printf("Result = %f",result) ;
            break;
        default :
            printf("Please Enter Valid Operator.. ") ;
            main();
    }
}    