#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,l;
    scanf("%[^
]",str);
    l=strlen(str);
    for(i=l-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}