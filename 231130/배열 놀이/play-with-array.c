#include <stdio.h>

int main() {
	int n, q;
    
	scanf("%d %d", &n, &q);
	int arr[100];
	
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	for(int i = 0; i < q; i++) {
		int qt;
		scanf("%d", &qt);
		
		if(qt == 1) {
			int a;
			scanf("%d", &a);
			
			printf("%d\n", arr[a - 1]);
		}
		else if(qt == 2) {
			int a;
			scanf("%d", &a);
			
			int idx = -1;
			for(int j = 0; j < n; j++) {
				if(arr[j] == a) {
					idx = j;
					break;
				}
			}
			
			printf("%d\n", idx + 1);
		}
		else {
			int a, b;
			scanf("%d %d", &a, &b);
			
			for(int j = a - 1; j < b; j++) {
				printf("%d ", arr[j]);
			}
			printf("\n");
		}
	}
	
    return 0;
}

  /*int n, q;
    scanf("%d %d", &n, &q);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < q; i++) {
        int type, a, b;
        scanf("%d", &type);

        if (type == 1) {
            scanf("%d", &a);
            printf("%d\n", arr[a - 1]);
        } else if (type == 2) {
            scanf("%d", &a);
            int found = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j] == a) {
                    printf("%d\n", j + 1);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("0\n");
            }
        } else if (type == 3) {
            scanf("%d %d", &a, &b);
            for (int j = a - 1; j < b; j++) {
                printf("%d", arr[j]);
                if (j < b - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }*/