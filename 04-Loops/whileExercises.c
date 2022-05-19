#include "whileExercises.h"


void code(){
    char done, ch;

    done=0;
    while (!done){
        ch=getchar();
        if(ch=='$'){
            done=1;
            continue;
        }
        putchar(ch+1);
    }
}