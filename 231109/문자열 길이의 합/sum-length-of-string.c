#include <stdio.h>
#include <string.h>

int main() {
    /*str[101];
    char c, d;
    int a, b, i;
    scanf("%s\n", &str[i]);
    for(i=0;i<=10;i++)
    {
        
        if()
    }*/

    int n, i;
    char st[101];
    int len=0;
    int cnt=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {

        scanf("%s", st);
        len+=strlen(st);
        if('a'==st[0])
        {
            cnt++;
        }

    }
    printf("%d %d", len, cnt);



    return 0;
}