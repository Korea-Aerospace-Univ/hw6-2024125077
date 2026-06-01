#include <stdio.h>

int main()
{
    int x[50] = {};
    int y[50] = {};
    
    int N = 0;
    scanf("%d", &N);
    
    for (int *p = x; p < x + N; p++) scanf("%d", p);
    for (int *q = y; q < y + N; q++) scanf("%d", q);
    
    int *px = x; 
    int *py = y + N -1;         
    
    for (int i = 0; i < N; i++) {
        printf(" %d", (*px) + (*py)); 
        px++;
        py--;
    }
}
