#include<stdio.h>
int main(){
	char phoneinput[13];
	printf("Enter phone number in format [(999)999-9999]:");
	scanf("%s",phoneinput);
	char nphone[12];
	int i;
	for(i=1;i<13;i++){
		if(i==4){
			
			nphone[i-1] = '-';
		}
		else{
		
			nphone[i-1] = phoneinput[i];
		}
	}
	//add ending char
	nphone[i-1] = '\0';
	printf("You entered %s\n",nphone);
	return 0;
}

