#include <stdio.h>
#include <string.h>

#define MAX 100

//with even number of 0's
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
                    else if(str[i] == '1') f = 'A';
                    break;
                    
                case 'B':
                    if(str[i] == '0') f = 'A';
                    else if(str[i] == '1') f = 'B';
                    break;
            }
        }
        if (f == 'A') printf("Accepted \n");
        else printf("Rejected \n");
        printf("Do you want to continue(y/n): ");
        scanf("%s", &response);
    } while (response == 'y');
    
}
