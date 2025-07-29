#include <stdio.h>

int main() {

    int n, s, m, h;
    printf("Digite os valores em segundos:\n");
    scanf("%d",&n);

    h = n / 3600;
    m = n % 3600 / 60;
    s = n % 60;

    printf("H:%d M:%d S:%d",h,m,s);

}
