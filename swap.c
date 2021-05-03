#include<stdio.h>
int main(){
	char *a = "sto1";
	char *b = "cake";
	
	printf(" before swap a = %s b = %s ",a,b);
	a = a + (a-b);
	b = a - (a-b)/2;
	a = a - (a-b)*2;
	printf(" a = %s b = %s ",a,b);
	return 0;
}

