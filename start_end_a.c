#include <stdio.h>
#include <string.h>

#define MAX 100

//DFA that accepts strings starts and ends with 'a'
int main() {
	int i;
	char str[MAX], f = 'A', response;
	do {
		printf("Enter string (a or b): ");
    	scanf("%s", str);
		for (i = 0; i < strlen(str); i++) {
		switch(f)
		{
			case 'A':
				if(str[i] == 'a') f = 'B';
				else if(str[i] == 'b') f = 'C';
				break;
			
			case 'B':
				if(str[i] == 'a') f = 'B';
				else if(str[i] == 'b') f = 'D';
				break;
				
			case 'C':
				if(str[i] == 'a') f = 'C';
				else if(str[i] == 'b') f = 'C';
				break;
			
			case 'D':
				if(str[i] == 'a') f = 'B';
				else if(str[i] == 'b') f = 'D';
				break;
		}
	} 
	if (f == 'B') printf("Accepted \n");
	else printf("Rejected \n");
	printf("Do you want to continue(y/n): ");
    scanf("%s", &response);
	} while(response == 'y');
}





