#include <stdio.h>

int main(void)
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int isRight = 0;
    if (n1 >= n2) {
        int A[n1], B[n2];
        for (int i = 0; i < n1; i++) {
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < n2; i++) {
            scanf("%d", &B[i]);
        }

        for (int i = 0; i < n1; i++) {
            if (A[i] == B[0]) {
                if (n2 + i <= n1) {
                    isRight = 1;
                    for (int j = 0; j < n2; j++) {
                        if (A[i+j] != B[j]) {
                            isRight = 0;
                            break;
                        }
                    }
                }
            }
            if (isRight == 1) {
                break;
            }
        }
    }

    if (isRight == 0) {
        printf("No");
    } else {
        printf("Yes");
    }
}