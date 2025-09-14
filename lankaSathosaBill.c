#include <stdio.h>
#include <time.h>

void displayDetails(int Qty, float Price, float Amount, float Payment, float payableTotal, char itemName[], time_t currentTime);

int main() {
    time_t currentTime;
    time(&currentTime); // Get current time

    int Qty;
    float Price, Amount, Payment, payableTotal;
    char itemName[50];

    printf("\nEnter Item name : ");
    scanf("%s", itemName);

    printf("\nEnter Item Quantity : ");
    scanf("%d", &Qty);

    printf("\nEnter Item Price : ");
    scanf("%f", &Price);

    Amount = Price * Qty;

    printf("\nEnter Cash Payment : ");
    scanf("%f", &Payment);

    payableTotal = Payment - Amount;

    displayDetails(Qty, Price, Amount, Payment, payableTotal, itemName, currentTime);

    return 0;
}

void displayDetails(int Qty, float Price, float Amount, float Payment, float payableTotal, char itemName[], time_t currentTime) {
    printf("\n\t============= LANKA SATHOSA =============\n");
    printf("\n\t\tKolonna");
    printf("\n\t\tFront AG office Kolonna");
    printf("\n\t\tCurrent time: %s", ctime(&currentTime));
    printf("\n\t\tCashier: 001\n");
    printf("\n\tItem\tPrice\tQty\tAmount");
    printf("\n\t-------------------------------------------");
    printf("\n\t%s\t%.2f\t%d\t%.2f", itemName, Price, Qty, Amount);
    printf("\n\t-------------------------------------------");
    printf("\n\tTotal Amount : %.2f", Amount);
    printf("\n\tCash Payment : %.2f", Payment);
    printf("\n\tBalance      : %.2f", payableTotal);
    printf("\n\t-------------------------------------------");
    printf("\n\t\tweb : www.lankasathosa.lk");
    printf("\n\t\tTEL: 045 2233 123");
    printf("\n\t\tThank you, come again!\n");
}
