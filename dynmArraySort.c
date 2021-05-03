#include<stdio.h>
#include <stdlib.h>
#include <string.h>

//function swaps the two elements
void swap_double( double *x, double *y )
{
        double swap = *x;
        *x = *y;
        *y = swap;
 
}
//here we sort the array
void sort_numeric( double *a, char c, int size)
{
        int i;
        int k;
    	
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
	
	int size;
	printf("\n Enter the size of the aray: ");
	scanf("%d", &size);
	double *A;
	A = (double*) malloc(size * sizeof(int));
	int j;
	for (j = 0; j< size; j++){
		scanf("%lf", &A[j]);
		}
		
 
	printf("Enter A or a for ascending order\n");
	printf("Enter D or d for descending order\n");
    	char c;
	scanf("%c",&c);
	scanf("%c",&c);
	sort_numeric(A,c, size);
	printf("after Sort\n");
	int i;
	for(i=0;i<size;i++){
		printf(" %lf",A[i]);
		}
 
 
}
 


