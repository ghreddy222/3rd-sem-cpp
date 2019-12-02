#include <stdio.h>
#include <string.h>

int main()
{
    char string1[20];
    int i, length;
    int temp = 0;
    
    printf("Enter a string:\n");
    scanf("%s", string1);
    
    length = strlen(string1);
    


    for(i=0;i < length ;i++)
{
        if(string1[i] != string1[length-i-1])
{
            temp= 1;
            break;
   }
}



    
    if (temp)
 {
        printf("The String is not a palindrome\n");
    }    
    else {
        printf("The String is a palindrome\n");
    }
    return 0;
}
