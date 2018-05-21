#include <stdio.h>
#define MAX 100

int main() {
	int i;
	char str[MAX], f = 'A';
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
	if (f == 'B') printf("Accepted");
	else printf("Rejected");
}


//int main() {
//	int i;
//	char str[MAX], f = 'A';
//	printf("Enter string (0 or 1): ");
//    scanf("%s", str);
//	for (i = 0; i < strlen(str); i++) {
//		switch(f)
//		{
//			case 'A':
//				if(str[i] == '0') f = 'B';
//				else if(str[i] == '1') f = 'A';
//				break;
//			
//			case 'B':
//				if(str[i] == '0') f = 'A';
//				else if(str[i] == '1') f = 'B';
//				break;
//		}
//	}
//	if (f == 'A') printf("Accepted");
//	else printf("Rejected");
//}



