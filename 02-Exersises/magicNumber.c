#include <stdio.h>
#include <stdlib.h>
#include <string.h>

getnum();

next_magic(){
    printf("new magic number enter: ");
    return(getnum());
}

getnum(){
    char s[30];
    gets(s);
    return(atoi(s));
}

int m;
play(m) {
        register int t;
        int x;
        for (t=0; t<100; t++){
            printf("Guess the number");
            x=getnum();
            if(x==m){
                printf("*** True ***");
            }
            else{
                if(x<m){
                    printf("*** Very low ***");
                } else {
                    printf("*** Very High ***");
                }
            }
        }
        printf("You have used all your guesses, try again.\n");
}