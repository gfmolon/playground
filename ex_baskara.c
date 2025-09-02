#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c;
    float delta, x1, x2;

    printf("Informe os valores de a, b e c:\n");
    scanf("%f%f%f",&a,&b,&c);
    
    delta = (b*b) - (4*a*c); 

    if (delta < 0) {
        printf("Não possui raízes reais.\n");
    }
    else {

    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);

        if (x1 > x2) {
                printf("%f %f", x2, x1);
            } else {
                printf("%f %f", x1, x2);
        }
    }

    return 0;
}
