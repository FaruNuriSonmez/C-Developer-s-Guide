#include <stdio.h>

int add(int num1, int num2);
int long counter;
int x,*y,count;

void func1();
void func2();
void init();
void func();
int main() {
    int total;
    total = add(50,50);
    printf("Total=%d\n",total);

    init();

    func2();
    printf("Counter=%d\n",counter);
    func1();
    printf("Counter=%d\n",counter);

    func();
    printf("Count=%d",count);


}

/* 3. Write a function called add() that has two integer arguments. The function will return the sum of these two
 * arguments.
 * */

int add(int num1, int num2){
    return num1+num2;
}

/* 4. Design a pair of functions to operate over a global variable. This global variable is called counter. The funct1()
 * function will increase the counter and function2() will decrease it. Show a way of writing these two functions
 * assuming they are in the same file.
 * */

void func1() {
    counter++;
}
extern void func2() {
    counter--;
}

/* 6. To the functions in Exercise 4, add a third function called init() that will set the counter to 0 first.
 * Put all these functions in a file and write them so that they can be put in an archive.
 * */

void init(){
    counter=3;
}


/* 10.What value will come out after running this code:
 * */

void func() {
    x=100;
    count=999;
    y=&x;
    count=*y;
}





