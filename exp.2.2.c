//Write a program to compare two strings using strcmp. 
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "banana";

    int res = strcmp(str1, str2);

    if(res == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
