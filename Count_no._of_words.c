#include<stdio.h>
int main()
{
    int i,c=0;
    char s[100];
    scanf("%[^
]",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c+1);
}