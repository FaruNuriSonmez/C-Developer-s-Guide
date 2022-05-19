#include <iostream>
#include <stdio.h>

using namespace std;

int line_count;

int a,b,c;

int getnum(){
    int s;
    scanf("%d",&s);
    return (s);
}

int mul(int x, int y){
    return x*y;
}
void example() {
    printf("Enter a number :");
    b=a=getnum();
    printf("Enter a number :");
    b=getnum();
    c=mul(a,b);
    printf("%d*%d=%d",a,b,c);
}

int main() {
    int count;
    char c;
    float value;
    short int top;
    long int eof_counter;
    double pay_out;
    unsigned int u;

    line_count = 0;
    example();
    return 0;
}


