#include <stdio.h>
#include <stdlib.h>

float Add(float a, float b);
float Sub(float a, float b);
float Mul(float a, float b);
float Div(float a, float b);

float Add(float a, float b) { return a + b; }
float Sub(float a, float b) { return a - b; }
float Mul(float a, float b) { return a * b; }
float Div(float a, float b) { return a / b; }

int main() {
    float n1, n2;
    printf("Enter the two numbers\n");
    scanf("%f %f", &n1, &n2);

    int choice;
    printf("\nEnter the choice 0->Add, 1->Sub, 2->Mul, 3->Div, 4->exit");
    printf("\n");
    scanf("\n%d", &choice);

    while (choice >= 0 && choice <= 3) {
        float (*operation[])(float, float) = { Add, Sub, Mul, Div };
        float result = (*operation[choice])(n1, n2);
        printf("\n%.2f", result);

        printf("\nEnter the choice 0->Add, 1->Sub, 2->Mul, 3->Div, 4->exit");
        printf("\n");
        scanf("\n%d", &choice);
    }

    if (choice == 4) {
        printf("Exiting the program.\n");
        exit(0);
    } else {
        printf("Please enter a valid choice.\n");
    }

    return 0;
}
