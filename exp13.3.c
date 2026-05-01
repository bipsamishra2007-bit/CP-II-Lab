#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "madam";
    char temp[20];

    strcpy(temp, str);
    strrev(str);

    if(strcmp(str, temp) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
