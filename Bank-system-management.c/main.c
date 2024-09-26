#include <stdio.h>
#include <stdlib.h>

struct account {
    char name[60];
    int acc_no;
    float amt;
    char acc_type; // 'S' for savings, 'C' for current
};

void new_acc() {
    struct account add;
    FILE *ptr;
    ptr = fopen("record.dat", "a+");

    // Input logic for account details (name, account number, type, initial balance)
    printf("Enter account holder's name: ");
    scanf("%s", add.name);
    printf("Enter account number: ");
    scanf("%d", &add.acc_no);
    printf("Enter account type (S for savings, C for current): ");
    scanf(" %c", &add.acc_type);
    printf("Enter initial balance: ");
    scanf("%f", &add.amt);

    // Calculate interest (assuming 5% annual interest for savings accounts)
    if (add.acc_type == 'S') {
        float interest = add.amt * 0.05;
        add.amt += interest;
        printf("Interest credited: %.2f\n", interest);
    }

    // Write account details to file
    fwrite(&add, sizeof(add), 1, ptr);
    fclose(ptr);
    printf("\nAccount created successfully!");
}

void deposit() {
    // Implement deposit logic here
    // Update account balance and record transaction
}

void withdraw() {
    // Implement withdrawal logic here
    // Update account balance and record transaction
}

void check_balance() {
    // Implement balance check logic here
    // Retrieve account balance from file and display
}

int main() {
    new_acc(); // Example: Creating a new account
    // Call other functions (deposit, withdraw, check_balance) as needed
    return 0;
}
