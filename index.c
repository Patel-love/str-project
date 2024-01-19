#include <stdio.h>
#include <string.h>

int main()
{
    // ------\Q-1/------
    //   char string1[50] = "rahul";
    //   char string2[50] = "mohan";

    //   int name = strcmp(string1, string2);

    //   if (name == 0){
    //     printf(" same");
    //  } else{
    //     printf(" not same");
    //  }

    // ------\Q-2/------
    // char string3[] = "zabcxy";
    // for (int i = 5; i >= 0; i--)
    // {
    //     printf("%c\n", string3[i]);
    // }

    // ------\Q-3/------
    // char string4[] = "xyz";
    // char string5[] = "abc";
    // printf("%s", strcat(string4, string5));

    // ------\Q-4/------
    char string6[100];
    printf("enter your name ");
    scanf("%s",&string6);

    for(int i=0; string6[i]>0; i++)
    {
        printf("%c\n",string6[i]);
    }


    return 0;
}