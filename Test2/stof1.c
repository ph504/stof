#include <stdio.h>
int main()
{
char prop[256];
char temp[256];
fgets(prop, sizeof(prop), stdin);
for(int i=0; i<strlen(prop); i++)
{
    if(strchr("aeiouAEIOU", i))
    {
        temp[0] = '\0';
        for(int j = 0; j<i; j++)
        {
            temp[j] = prop[j];
        }
        temp[i] = 'p';
        for(int j = i; j < strlen(prop); j++)
            temp[j+1] = prop[j];
    }
    temp[strlen(prop) + 1] = '\0';
    strcpy(prop, temp);
}
printf(prop);
}