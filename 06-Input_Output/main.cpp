#include <iostream>
#include <stdio.h>
int main() {
   /*
    * getchar() and putchar() functions
    * */

   char ch;

    do {
        ch=getchar();
        if (std::islower(ch)){
            putchar(toupper(ch));
        } else {
            putchar(tolower(ch));
        }
    } while (ch!='.');
}
