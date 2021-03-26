#include <stdio.h>
#include "complex_calculator.h"
int main()
{
    //TODO Write all the logic for Calculator app
    printf("Complex calculator ");

    static complex_t a = {0,0};
    static complex_t b = {0,0};
    static complex_t c = {0,0};

    int choice;
    while(1)
    {
        printf("Press 1 to add two complex numbers.\n");
        printf("Press 2 to subtract two complex numbers.\n");
        printf("Press 3 to multiply two complex numbers.\n");
        printf("Press 4 to divide two complex numbers.\n");
        printf("Press 5 to exit.\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);

        if(choice == 5){
            exit(0);
        }

        if (choice >= 1 && choice <= 4)
        {   
            int input_1,input_2,input_3,input_4;
            printf("Enter a and b where a + ib is the first complex number.");
            printf("\na = ");
            scanf("%d", &input_1);
            printf("b = ");
            scanf("%d", &input_2);
            printf("Enter c and d where c + id is the second complex number.");
            printf("\nc = ");
            scanf("%d", &input_3);
            printf("d = ");
            scanf("%d", &input_4);
            a.real = input_1;
            a.imaginary = input_2;
            b.real = input_3;
            b.imaginary = input_4;
        }
        printf("%d is the choice ", choice);
        if(choice == 1){printf("%s","Here0");
            complex_sum(&a,&b,&c);
        }
        if(choice == 2){
            complex_sub(&a,&b,&c);
        }
        if(choice == 3){
            complex_mul(&a,&b,&c);
        }
        if(choice == 4){
            complex_div(&a,&b,&c);
        }

        
  
  
  
    } // while end


    return 0;
    //gcc -I inc -I unity unity/unity.c src/complex_div.c src/complex_mul.c src/complex_sub.c src/complex_sum.c test/test_complex_calculator.c -o test_run.exe
    //
}