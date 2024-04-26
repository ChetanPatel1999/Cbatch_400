#include<stdio.h>
#include<string.h>
int compare(char s1[],char s2[])
{
      int i;
     if(strlen(s1)!=strlen(s2))
     {
       return 0;
     }
     else
     {
        int f=0;
        for(i=0;i<strlen(s1);i++)
        {
            if(s1[i]!=s2[i])
            {
              f=1;
              break;  
            }
        }
        if(f==0)
        {
          return 1;
        }
        else{
           return 0;
        }
     }
}
void main()
{
    char s1[]="chetan";
    char s2[]="chetam";
   if(compare(s1,s2)== 1)
    {
        printf("both are same");
    }
    else{
          printf("both are diff ");
    }


}