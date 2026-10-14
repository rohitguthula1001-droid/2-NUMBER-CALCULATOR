#include <stdio.h>
#include <math.h>
void display();
void thankyou();
int main() {

char x;

printf("===================================================================== \n");
printf("                 ( WELCOME TO 2 NUMBER CALCULATOR ) \n");
printf("===================================================================== \n \n");
printf("Do you want to use this? 'y' for yes and 'n' for no: ");
scanf("%c", &x);

while (x == 'y') {

        float a;
        float b;

        printf("\n");
        printf("enter first number: ");
        scanf(" %f", &a);

        printf("enter second number: ");
        scanf(" %f", &b);
        display();
        int y;

        scanf(" %d", &y);

        if (y == 1) {
            printf("\n");
            printf("sum is: %f \n \n", a + b);
            thankyou();
        }

        else if (y == 2) {
            printf("\n");
            printf("difference is: %f \n \n", a - b);
            thankyou();
        }

        else if (y == 3) {
            printf("\n");
            printf("product is: %f \n \n", a * b);
            thankyou();
        }

        else if (y == 4) {

                if (b == 0) {
                    printf("\n");
                    printf("Invalid Input (denominator is 0) \n \n");
                    thankyou();
                }

                else {
                    printf("\n");
                    printf("division is: %f \n \n", a / b);
                    thankyou();
                }
        }

        else if (y == 5) {
            printf("\n");
            printf("power is: %f \n \n", pow(a,b));
            thankyou();
        }

        else if (y == 6) {

            printf("\n");
            thankyou();
        }

        else {
            printf("Invalid Input \n \n");
            thankyou();
        }

    printf("Do you want to use this again? 'y' for yes and 'n' for no: ");
    scanf(" %c", &x);

}

if (x == 'n') {
    thankyou();
}
else {
    printf("Invalid Input \n \n");
    thankyou();
}
return 0;
}

void display() {
printf("\n");
printf("ENTER '1' FOR SUM \n");
printf("ENTER '2' FOR DIFFERENCE \n");
printf("ENTER '3' FOR PRODUCT \n");
printf("ENTER '4' FOR DIVISION \n");
printf("ENTER '5' FOR POWER \n");
printf("ENTER '6' TO EXIT \n");
printf("\n");
}

void thankyou() {
printf("===================================================================== \n");
printf("                            ( THANKYOU ) \n");
printf("===================================================================== \n");
}