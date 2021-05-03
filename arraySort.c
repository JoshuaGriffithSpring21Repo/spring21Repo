#include<stdio.h>
//function swaps the two elements
void swap_double( double *x, double *y )
{
        double swap = *x;
        *x = *y;
        *y = swap;
 
}
//here we sort the array
void sort_numeric( double *a, char c )
{
        int i;
        int k;
    	int size=11;
    //double nested loop tosort
        for( i = 0; i < size; i++ ) {
                for( k = 1; k < size - i;k++ ) {
                //ascending portion
                        if( (*(a + k - 1)) > (*(a + k)) && (c=='A'|| c=='a'))
                                swap_double( (a + k - 1), (a + k) );
        //descending portion
            else if(( *(a + k - 1)) < (*(a + k)) && (c=='D'||c=='d'))
                                swap_double( (a + k - 1), (a + k) );
 
                }
 
        }
 
}
int main()
{
	char c;
	double arr[11]={10,0.25,-2342.0,12123,3.145435,6,6,5.999,-2,-5,-109.56};
 
	printf("Enter A or a for ascending order\n");
	printf("Enter D or d for descending order\n");
    
	scanf("%c",&c);
	sort_numeric(arr,c);
	printf("after Sort\n");
	int i;
	for(i=0;i<11;i++){
		printf(" %lf",arr[i]);
		}
 
 
}
 


