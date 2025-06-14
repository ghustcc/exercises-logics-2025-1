#include <stdio.h> 

int main ()
{
    char result;
    int group = -1, i, count = 0;

    for (i = 0; i < 6; i++) {
        scanf("%c", &result);
        getchar();
        if (result == 'V')
            count++;
    }
    
    if (count == 5 || count == 6) 
        printf("%d\n", group = 1);
    else if (count == 4 || count == 3) 
        printf("%d\n", group = 2);
    else if (count == 1 || count == 2) 
        printf("%d\n", group = 3);
    else {
        printf("%d\n", group);
    }

    return 0;
}