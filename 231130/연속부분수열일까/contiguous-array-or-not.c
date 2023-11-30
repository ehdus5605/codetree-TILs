#include <stdio.h>
#include <stdlib.h>


void input(int *p, int k) {
    for (int i = 0; i < k; i++)
        scanf("%d", &p[i]);
}


int isSubsequence(int *x, int *y, int n, int m) {
    int start = -1; 
    int j = 0;      

    
    for (int i = 0; i < n; i++) {
        if (x[i] == y[0]) {
            start = i;
            break;
        }
    }

    
    if (start == -1)
        return 0;

    
    for (int i = start + 1; i < n; i++) {
        if (x[i] != y[j++])
            return 0;
    }

    return 1;
}

int main() {
    int n, m;
    int *p1, *p2;
    int result;

    scanf("%d %d", &n, &m);
    p1 = (int *)malloc(sizeof(int) * n);
    p2 = (int *)malloc(sizeof(int) * m);
    input(p1, n);
    input(p2, m);

    
    result = isSubsequence(p1, p2, n, m);

    
    if (result == 1)
        printf("Yes\n");
    else
        printf("No\n");


    free(p1);
    free(p2);

    return 0;
}