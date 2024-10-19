//Calculating Electricity Bill
#include <stdio.h>

int main() {
    char id, name;
    int units;
    float rate, bill;

    printf("Enter Customer ID: ");
    scanf("%s", id);
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    // Determine rate per unit
    if (units < 200) rate = 1.20;
    else if (units < 400) rate = 1.50;
    else if (units < 600) rate = 1.80;
    else rate = 2.00;

    // Calculate bill
    bill = units * rate;
    if (bill > 400) bill *= 1.15;  // Surcharge
    if (bill < 100) bill = 100;     // Minimum bill

    // Display results
    printf("\n--- Electricity Bill --- "); 
    printf("\nCustomer ID: %s",id);
    printf("\nCustomer Name: %s",name);
    printf("\nUnits: %d",units);
    printf("\nCharges per Unit: Ksh %.2f",rate);
    printf("\nTotal Amount: Ksh %.2f\n",bill);
  
    return 0;
}