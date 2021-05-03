#include<stdio.h>

void split_time(long, int*, int*, int*);
int main(){
	int n, hr = 0, min = 0, sec = 0;
	printf("Enter Seconds : ");
	scanf("%d", &n);

	if(n < 0) {
		printf("Seconds cannot be -ve, Please enter non negative value");
	}
	else{
		split_time(n, &hr, &min, &sec);
		printf("Converted format: %d hour %d mins %d secs", hr, min, sec);
	}
	return 0;
}

void split_time(long total_sec, int* hr, int* min, int* sec){
	int remaing_sec = 0;

	*hr = total_sec/3600;

	remaing_sec = total_sec%3600;

	*min = remaing_sec/60;

	*sec = remaing_sec%60;
}
 

