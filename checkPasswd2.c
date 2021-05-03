// header files.
#include<stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

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
	//points for deduction
	int pts;
	//variables to check for our conditions for points
	bool lwc=false;
	bool upc=false;
	bool dig=false;
	
	int cons;
	bool construe= false;
	
	 if(islower(string[0])){
		lwc=true;
	 }
	 if(isupper(string[0])){
		upc=true;
	 }
	 if(isdigit(string[0])){
		dig=true;
	 }
	//start from 1 to avoid out of bounds error
	for (int i=1; i<strlen(string);i++){
	 	if(islower(string[i])){
			lwc=true;;
		}
		 if(isupper(string[i])){
			upc=true;1;
		}
		 if(isdigit(string[i])){
			dig=true;
		}	
 		//checks for concsecutive chars (which is why we set array at 1
		if(string[i]-string[i-1]==1){
			cons+=1;
			if(cons==3){
			
				construe=true;
				}
		}
		//resets to zero if not consecutive
		else{
			cons=0;
		}
		
	}
	if(construe){

		pts+=20;
	}
	if(!lwc){
		pts+=20;
	}
	if(!upc){
		pts+=20;
	}
	if(!dig){
		pts+=20;
	}
	
	if(pts>=30){
			// declare 
			printf("Deductions: %d \nThe password is unsafe! Please reset.", pts);
	}
	else{
		printf("The password is safe.");
	}
}

	


