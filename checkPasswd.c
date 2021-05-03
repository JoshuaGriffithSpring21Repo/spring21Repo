// header files.
#include<stdio.h>
#include <string.h>
// main
void checkpasswd(char* string);
int main(){
	// declare variables.
	char string[20];
	
	// input password
	printf("Enter a password : ");
	scanf("%s", string);
	checkpasswd(string);
	
	return 0; 
}	
void checkpasswd(char* string){	
	int len;
	int pnt;
	int new_length;
	len=strlen(string);
	
	//check condition
	if(len<10){
		new_length=10-len;

		pnt=5*new_length;
		// check to see if it misses points target by more then 30
		//any password greater then 5 characters will pass
	 	if(pnt>=30){
			// declare 
			printf("Deductions: %d \nThe password is unsafe! Please reset.", pnt);
		}
		else{
			// display values
			printf("The password is safe.");
		}
	}
	else{
		// display values
		printf("The password is safe.");
	}
	
}

