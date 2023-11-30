#include <stdio.h>
#include <stdlib.h>
int n;
void proc(int a,int b,int c,int *p)
{
    int i;
    if(a==1)
    {
        printf("%d\n",p[b-1]);
    }
    else if(a==2)
    {
        for(i=0;i<n;i++)
        {
            if(p[i]==b){
                printf("%d\n",i+1);
                return;}
        }
        printf("0\n");
    }
    else
    {
        for(i=b;i<=c;i++)
        {
            
                printf("%d ",p[i-1]);
        }
        printf("\n");
    }
}
int main() 
{
    int m,*p,a,b,c,i;
    scanf("%d %d",&n,&m);
    //p(int *)malloc(sizeof(int)*n);
    p = (int *)malloc(sizeof(int) * n);
    for(i=0;i<n;i++) {
        scanf("%d",&p[i]);
    }
    for(i=0;i<m;i++) {
        scanf("%d",&a);
        if(a==3)
            scanf("%d %d",&b,&c);
        else
            scanf("%d",&b);
        proc(a,b,c,p);
    }
    free(p);
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