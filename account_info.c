#include <stdio.h>

int main() {
    float og_balance, charges, credit, cred_limit, balance;
    int account;
    while(1){
        printf( "Enter account number (-1 to end): " );
        scanf( "%d", &account );
        if (account == -1){
            return 0;
        }

        printf( "Enter beginning balance: " );
        scanf( "%f", &og_balance );

        printf( "Enter total charges: " );
        scanf( "%f", &charges );

        printf( "Enter total credits: " );
        scanf( "%f", &credit );

        printf( "Enter credit limit: " );
        scanf( "%f", &cred_limit );

        balance = og_balance + charges - credit;
        
        if (balance > cred_limit){
            printf( "Account: \t%d\n", account );
            printf( "Credit limit: \t%.2f\n", cred_limit );
            printf( "Balance: \t%.2f\n", balance );
        
            printf("Credit Limit Exceeded.\n\n");
        }
        else{
            printf("\n");
        }
    }
  return 0;
}