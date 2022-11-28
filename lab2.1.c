#include<stdio.h>

#include<math.h>

int main() {

    float a, b, h, x, y, d, s;
    int k;
    printf("a= ");
    scanf("%f", &a);
    printf("b= ");
    scanf("%f", &b);
    printf("h= ");
    scanf("%f", &h);
    printf("d= ");
    scanf("%f", &d);
    for (x = a; roundf(x * 1000)/1000 <= roundf(b * 1000)/1000; x += h) {
        k = 1;
        s = 0;
        do {
            y = (1 / pow(2, k)) * sin(x / pow(2, k));
            s = s + y;
            k = k + 1;
        } while (fabs(y) > d);
        printf("x=%.3f s=%.3f\n", x, s);
    }
    return 0;
}
