#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defining comparator function as per the requirement
static int CompareA(const void* a, const void* b)
{

        // rule for comparison ascending
        return strcmp(*(const char**)a, *(const char**)b);

}
static int CompareB(const void* a, const void* b)
{

        // rules for comparison descending
        return strcmp(*(const char**)b, *(const char**)a);
}

// Function to sort the array
void sort_alphabetic(const char* arr[], int n, char c)
{
        //use qsort to sort array alphabetic with comparison ascending
        if (c=='A'|| c=='a'){
        	qsort(arr, n, sizeof(const char*), CompareA);
        }
        //use qsort to sort array alphabetic with comparison descending
        else if (c=='D'||c=='d'){
                qsort(arr, n, sizeof(const char*), CompareB);
        }
        
}

int main()
{
	char c;
        // Get the array of names to be sorted
        const char* arr[]= { "Programming", "Deep", "Learning", "Internet", "Things", "Robotics", "Course" };

        int l = sizeof(arr) / sizeof(arr[0]);
        int i;

        // Printing the given names
        printf("Starting array is\n");
        for (i = 0; i < l; i++){
                printf("%d: %s \n", i, arr[i]);
                }
        printf("Enter A or a for ascending order\n");
	printf("Enter D or D for descending order\n");
	scanf("%c",&c);
                

        // Sort the given names based off ascending or descending
        sort_alphabetic(arr, l, c);

        // Print the sorted names
        printf("Array After sort is\n");
        for (i = 0; i < l; i++)
                printf("%d: %s \n", i, arr[i]);

        return 0;
}


