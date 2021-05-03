#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * file;
    char path[100];

    //variable set up
    char ch;
    int chars=0;
    int words=0;
    int lines=0;
    int insideword=0;


    // Input path of files to merge to third file 
    printf("Enter source file path: ");
    scanf("%s", path);

    //open source file
    file = fopen(path, "r");


    // check for file opening succes
    if (file == NULL){
        printf("\nGiven file unable to open\n");

        return 1;
    }

 
    
    while ((ch = fgetc(file)) != EOF){
        chars++;
	
	//logic for words
	if (ch == ' ' || ch == '\n' || ch == '\0' || ch == '\t'  ){
		if(insideword){
		insideword=0;
		words++;
		}
	
        	 //logic for lines
       		 if (ch == '\n' || ch == '\0'){
            		lines++;
       		 }
       	}
        //used for logic to check for word 
	else{
	    insideword =1;
	}
	
}
    
       

    //catcg for last word/line


    /* Print file statistics */
    printf("\n");
    printf("Total characters = %d\n", chars);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);


    /* Close files to release resources */
    fclose(file);

    return 0;
}

