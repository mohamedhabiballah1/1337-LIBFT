#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int check(char c, const char *set)
{
    int i;
    while(set[i])
    {
        if(set[i] == c)
            return(1);
        i++;
    }
    return(0);
}
char *ft_strtrim(char const *str, char const *set)
{
    char *dst;
    int i;
    int start;
    int end;

    start = 0;
    while(str[start] && check(str[start], set))
        start++;
    end = strlen(str);
    while((end < start) && check(str[end - 1], set))
        end--;
    dst = malloc(sizeof(char) * (strlen(str) - (end - start)));
    if(dst == NULL)
        return(NULL);
    i = 0;
    while(start < end)
    {
        dst[i] = str[start];
        i++;
        start++;
    }
    dst[i] = '\0';
    return(dst);
}
int main()
{
    const char str[] = "heeelo woorldhehh";
    const char set[] = "he";
    printf("%s", ft_strtrim(str, set));
}