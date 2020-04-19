/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void uppercase(void);

int main(void)
{
    //Call method in main
    uppercase();
}

void uppercase()
{
    //character array
    char words[100];
    
    printf("Enter a lower case sentence:\n");
    
    gets(words);
    
    //integer use to count
    int i = 0;
    
    //loop through tha character array to get individual character
    while(words[i])
    {
        //assign individual character to c
        char c = words[i];
        if(c >= 'a' && c <='z')
        {
             //print character
            printf("%c -'a'+'A'\n", toupper(c));
            
            i++;
        }
       
    }
}

