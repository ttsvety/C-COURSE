#include <stdio.h>
#include <stdlib.h>

struct item
{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

struct item readItem(struct item *item1){
    item1->itemName = malloc(50*sizeof(char));
    if(item1->itemName == NULL){
        printf("Not enough space");
        exit (1);
    }
    printf("Enter product name: ");
    scanf("%s", item1->itemName);
    printf("\nEnter price: ");
    scanf("%f", &item1->price);
    printf("\nEnter quantity: ");
    scanf("%d", &item1->quantity);
}

void printItem(struct item *item1){
    item1->amount = item1->quantity * item1->price;
    printf("\nThe product name is %s.\nThe quality is %d.\nThe product price is %.2f.\nThe product amount is %.2f.", item1->itemName, item1->quantity, item1->price, item1->amount);
}


int main(){
    struct item item1, *itemPtr;
    char name[20];

    itemPtr = &item1;
    item1.itemName = name;

    readItem(itemPtr);
    printItem(itemPtr);

    free(item1.itemName);

    return 0;
}