#include <stdio.h>
#include "magicNumber.c"

void max(int num1, int num2);
char look_up(char character);
void count1();
void count2();
void count3();

int main() {
    printf("02, Exersises!\n");
    int exersises;
    printf("Enter a exercises number:");
    scanf("%d",&exersises);
    if(exersises == 1){
        int num1;
        int num2;

        printf("Enter a number:");
        scanf("%d",&num1);
        printf("Enter a number:");
        scanf("%d",&num2);
        max(num1,num2);
    }
    else if (exersises == 2){
        char num3;
        printf("Enter a number:");
        scanf("%d",&num3);
        printf("%d",look_up(num3));
    }
    else if(exersises == 3){
        count1();
        count2();
        count3();
    }
    else {
        return 0;
    }
}

/* 2.1 Write a function called max() that enters the value of the larger of its two integer arguments.
 * */
void max(int num1, int num2){
    if(num1<num2)
        printf("%d number is greater than %d number\n",num2,num1);
    else
        printf("%d number is greater than %d number\n",num1,num2);
}
/* 2.2 Write a function called look up() with one character argument. Enter the characters shown if
 * the argument is any of the following characters: otherwise enter the characters "0".
 * arguments
 * 1,2,3,4
 * input
 * a,b,c,d
 * */
char look_up(char c){
    switch (c) {
        case '1':
            return('a');
        case '2':
            return('b');
        case '3':
            return('c');
        case '4':
            return('d');
        default:
            return('0');
    }
}

/* 2.3 Apply the look_up() function from exercise 2.2 to an if-else-if checks
 * */

char look_up2(char c){
    if(c==1)
        return('a');
    else if(c==2)
        return('b');
    else if(c==3)
        return('c');
    else if(c==4)
        return('d');
    else
        return('0');
}

/* 2.4 Show three ways to write a function called count() that will print numbers from 1 to 100 to the
 * screen. (don't use goto)
 * */

void count1(){
    for (int i = 0; i < 100; ++i) {
        printf("%d\n",i);
    }
}
void count2(){
    int i = 0;
    while (i < 100){
        printf("%d\n",i++);
    }
}

void count3(){
    int i = 0;
    do {
        printf("%d",i++);
    } while (i<100);
}

/* 2.5 Write a program that takes an integer from the keyboard, writes the message hello as much as that integer,
 * and outputs if the number is negative.
 * */

void hello(int num){
    if(0<num){
        return;
    } else {
        for (int i = 0; i < num; ++i) {
            printf("hello");
        }
    }
}

/* 2.6 Magic Number program
 * */

