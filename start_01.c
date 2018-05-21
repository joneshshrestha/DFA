#include <stdio.h>
#include <string.h>

#define MAX 100

//DFA that accepts strings starting with 01
int main() {
    int i;
    char str[MAX], f = 'A', response;
    do {
        printf("Enter string (0 or 1): ");
        scanf("%s", str);
        for (i = 0; i < strlen(str); i++) {
            switch(f)
            {
                case 'A':
                    if(str[i] == '0') f = 'B';
                    else if(str[i] == '1') f = 'D';
                    break;
                    
                case 'B':
                    if(str[i] == '0') f = 'D';
                    else if(str[i] == '1') f = 'C';
                    break;
                    
                case 'C':
                    if(str[i] == '0') f = 'C';
                    else if(str[i] == '1') f = 'C';
                    break;
                    
                case 'D':
                    if(str[i] == '0') f = 'D';
                    else if(str[i] == '1') f = 'D';
                    break;
            }
        }
        if (f == 'C') printf("Accepted \n");
        else printf("Rejected \n");
        printf("Do you want to continue(y/n): ");
        scanf("%s", &response);
    } while(response == 'y');
}





