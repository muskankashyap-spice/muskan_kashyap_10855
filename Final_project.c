#include<stdio.h>
int main(){
    
    float Principal_amount, balance, Rate,interest;
    int No_of_years;
    scanf("%f",&Principal_amount);
    scanf("%f",&Rate);
    scanf("%d",&No_of_years);
    balance= Principal_amount;
    for(int i=1;i<=No_of_years ;i++){
        interest = balance* Rate/100;
        balance+= interest;
    }
    printf("Final Balance=%.2f",balance);
    return 0;
}