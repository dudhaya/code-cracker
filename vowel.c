#include<stdio.h>
#include<string.h>
void main()
{
    int i,count=0,alpha=0,len;
    char str[40];
     len=strlen(str);
    scanf("%s",&str[i]);
    for(i=0;str[i]<len;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i'|| str[i]=='u'|| str[i]=='o'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'||str[i]=='O'||str[i]=='U')
    {
        count=count+1;
    }
    else
    {
        alpha++;
    }
    
    }
 printf("vowel is %d\n",count);
    printf("alphabet %d",alpha);
           
}
