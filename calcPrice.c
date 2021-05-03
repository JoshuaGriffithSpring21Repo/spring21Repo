#include <stdio.h>

int main(){
    //variables
    int item_number;
    double price;
    int quantity;
    char datepurchase[12];
    
    // user input
    printf("Enter item number:");
    scanf("%d", &item_number);
    printf("Enter unit price:");
    scanf("%lf", &price);
    printf("Enter quantity:");
    scanf("%d", &quantity);
    printf("Enter purchase date:");
    scanf("%s", datepurchase);

    //printing data
    printf("Item\tUnit Price\tQTY\tPurchase Date\tTotal Amount\n");
    printf("%d\t$%9.2lf\t%d\t%s\t$%9.2lf\n\n", item_number, price, quantity, datepurchase, price * quantity);

    return 0;
}

