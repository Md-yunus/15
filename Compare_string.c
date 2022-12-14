#include<stdio.h>
int compare_string(char*, char*);
int main()
{
    char first[100], second[100], result;
    scanf("%s",first);
    scanf("%s",second);
    result = compare_string(first, second);
    if ( result == 0 )
       printf("Both strings are same.");
    else
       printf("Entered strings are not equal.");
    return 0;
}
int compare_string(char *x,char *y)
{
    int t=0,i;
   
    for(int i=0;*(x+i)!='\0';i++)
    { 

       if(*(x+i)==*(y+i))
        {
            continue;
        }
        else
        {
            t++;
        }
    }return(t);
   
}

