#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fnr()
{
    char str[1000];
    char target[200];
    char replacement[200];
    int i=0,j=0,flag=0,len;
    int repl,diff;
     int strl,tarl;
    int address,init,k,a,b;
    while(1)
    {
           printf("enter the sentence\n");
    gets(str);
    printf("enter the sub-string to be replaced\n");
    scanf("%s",target);
     printf("enter the value of replace\n");
    scanf("%s",replacement);
    repl=strlen(replacement);
    strl=strlen(str);
    tarl=strlen(target);
    for(i=0;str[i]!='\0';i++)
    {
              if(target[j]!=str[i])
        {
            j=0;
        }
        if(target[j]==str[i])
        {
            j++;
        }
        if(j==strlen(target))
        {
            flag=1;
            address=i-tarl+1;
            break;
        }
    }
    if(flag==1)
    {
        if(tarl==repl)
        {
            for(i=address,j=0;j<repl;i++,j++)
            {
                str[i]=replacement[j];
            }
         printf("%s",str);
        }
        if(tarl<repl)
        {
            diff=repl-tarl;
            init=address+tarl;
            for(k=strl-1;k>=init;k--)
            {
                str[k+diff]=str[k];
            }
            for(i=address,j=0;j<repl;i++,j++)
            {
                str[i]=replacement[j];
            }
            len=strl-tarl+repl;
            for(i=0;i<len;i++)
            {
                printf("%c",str[i]);
            }
            printf("\n");
              printf("enter 0 to quit\n");
            printf("enter any other key to continue\n");
             scanf("%d",&k);
             if(k==0)
             {
                 exit(0);
             }
        }
        if(tarl>repl)
        {
            diff=tarl-repl;
            init=address+tarl;
            a=address+repl;
            b=address+tarl;
            for(i=a,j=b;j<strl;i++,j++)
            {
                str[i]=str[j];
            }
            str[i]='\0';
            for(i=0,j=address;i<repl;j++,i++)
            {
               str[j]=replacement[i];
            }
             printf("%s\n",str);
             printf("enter 0 to quit\n");
            printf("enter any other key to continue\n");
             scanf("%d",&k);
             if(k==0)
             {
                 exit(0);
             }
        }

    }
    if(flag==0)
    {
    printf("not found");
    }
    }

}
int main()
{
   fnr();
    return 0;
}
