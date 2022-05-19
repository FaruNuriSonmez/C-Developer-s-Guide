#include <iostream>
void ifStatements(){
    int value = 20;

    if (value < 20) {
        printf("The value is less than 20.\n");
    }
    else if (value == value){
        printf("The value is equal to 20.\n");
    }
    else{
        printf("The value is not less than 20.\n");
    }

    printf("#########################################\n");
}

void switchStatements(){
    char grade = 'B';

    switch (grade) {
        case 'A':
            printf("Great Grade!");
        case 'B':
        case 'C':
            printf("Good Grade!");
            break;
        case 'D':
            printf("Pass Grade\n");
        case 'F':
            printf("You failed in class!\n");
        default:
            printf("You entered an inalid grade!\n");
    }
    printf("#########################################\n");
}

void examples(){
    int value1 = 20;
    int value2 = 25;
    int value3 = 2;

    int bigValue = value1;

    if (bigValue < value2)
        bigValue = value2;
    if (bigValue < value3)
        bigValue = value3;

    printf("%d",bigValue);

}
int main() {
    printf("%d\n",5 == 5);
    printf("%d\n", 10 != 10);
    printf("%d\n", 3 < 6 );
    printf("%d\n", 30 > 100 );

    ifStatements();
    switchStatements();
    examples();
    return 0;
}
