#include <stdio.h>
#include <stdlib.h>

int remainSeats =0,totalCharge=0,Acapacity=30, Bcapacity=60, Ccapacity=90;

int main()
{
    menu();
    return 0;
}

int menu(){
    int input;
    input = getInput();
    switch(input)
    {
        case 1:
            questions(input);
            break;
        case 2:
            questions(input);
            break;
        case 3:
            questions(input);
            break;
        case 4:
            availability();
            menu();
            break;
        case 5:
            availability();
            break;
    }
}

int getInput(){
    int input;
    printf("1 - Class A\n");
    printf("2 - Class B\n");
    printf("3 - Class C\n");
    printf("4 - Current Availability\n");
    printf("5 - Exit\n");
    printf("Enter your option...\n");
    scanf("\n%d", &input);
    return input;

}

void questions(int input){
    int full,con,kid,charge=0, allSeats=0;
    printf("How many full tickets...\n");
    scanf("\n%d", &full);
    printf("How many concession tickets - Senior and children under 12 and above 3...\n");
    scanf("\n%d", &con);
    printf("How many kids under 3 years...\n");
    scanf("\n%d", &kid);

    allSeats = full+con+kid;

    if(input==1){
        if(allSeats>Acapacity){
            printf("Less tickets available than required...\n");
            printf("Total available in class A is %d\n",Acapacity);
        }
        charge = (full*25) + (con*15);
        Acapacity = Acapacity -(full+con+kid+remainSeats);

        printf("your total tickets price = %d\n",charge);
    }
    else if(input==2){
        if(allSeats>Bcapacity){
            printf("Less tickets available than required...");
            printf("Total available in class B is %d\n",Bcapacity);
        }
        charge = (full*15) + (con*10);
        Bcapacity = Bcapacity-(full+con+kid);

        printf("your total tickets price = %d\n",charge);
    }
    else if(input==3){
        if(allSeats>Ccapacity){
            printf("Less tickets available than required...");
            printf("Total available in class C is %d\n",Ccapacity);
        }
        charge = (full*9) + (con*5);
        Ccapacity = Ccapacity-(full+con+kid);

        printf("your total tickets price = %d\n",charge);
    }

    totalCharge += charge;
    menu();

}

void availability()
{
    printf("Total available\n");
    printf("Class A is %d\n",Acapacity);
    printf("Class B is %d\n",Bcapacity);
    printf("Class C is %d\n",Ccapacity);
    printf("Total income is %d\n",totalCharge);

}


