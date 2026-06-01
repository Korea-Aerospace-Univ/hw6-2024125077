#include <stdio.h>

int main()
{
    char arr[10] = {};
    int maxCount = 0;
    char maxA = '\0';
    
    for (char *p = arr; p < arr + 10; p++) scanf("%c", p);
    
    for (char *p1 = arr; p1 < arr + 10; p1++) {

        int count = 0;
        for (char *p2 = arr; p2 < arr + 10; p2++) {
            if (*p1 == *p2) {
                count++;
                if (count > maxCount) {
                    maxCount = count;
                    maxA = *p2;
                }
            }
        }
    }
    
    printf("%c %d", maxA, maxCount);

    return 0;
}
