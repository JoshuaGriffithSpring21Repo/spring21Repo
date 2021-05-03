#include <stdio.h>
#include <string.h>
  
// A function to check if a string str is palindrome
void checkpali(char str[])
{
    // Start from leftmost and rightmost corners of the string
    int left = 0;
    int right = strlen(str) - 1;
  
    // Keep comparing characters while they are same
    while (right > left)
    {
        if (str[left++] != str[right--])
        {
            printf("%s is Not a Palindrome", str);
             printf("\n");
            return;
        }
    }
    printf("%s is palindrome", str);
    printf("\n");
}
  
// main method
int main()
{
    checkpali("civic");
    checkpali("deed");
    checkpali("yasuo");
    return 0;
}
