#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t    i;
    size_t    j;
    size_t    l;
    char    *new_s;

    j = ft_strlen(s1);
    i = 0;
    l = 0;
    new_s = NULL;
    if (s1 == 0 && set == 0)
        return(new_s = ft_strdup(""));
    while (s1[i])
    {
        if (s1[i] == set[l])
        {
            l = 0;
            i++;
        }
        if (s1[i] != set[l] && set[l] == '\0')
        {
            break;
        }
        if (s1[i] != set[l])
            l++;
    }
    l = 0;
    while (j != 0)
    {
        if (s1[j] == set[l])
        {
            l = 0;
            j--;
        }
        if (s1[j] != set[l] && set[l] == '\0')
        {
            l = 0;
            break;
        }
        if (s1[j] != set[l])
            l++;
    }
    l = (j - i) + 1;
    new_s = malloc(sizeof(char) * (l + 1));
    if (new_s == NULL)
        return (NULL);
    l = 0;
    while (i <= j)
    {
        new_s[l] = s1[i];
        i++;
        l++;
    }
    new_s[l] = '\0';
    return (new_s);
}
