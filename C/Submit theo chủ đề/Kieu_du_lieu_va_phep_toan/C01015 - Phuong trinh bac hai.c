#include <stdio.h>
#include <math.h>

int main () {
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a==0) {
        if(b==0)
            printf("NO");
        else
            printf("%.2lf",-c/b);
    }
    else {
        float delta=b*b-4*a*c;
        if(delta<0)
            printf("NO");
        else if(delta==0)
            printf("%.2lf",-b/(2*a));
        else {
            float x1 = (-b + sqrt(delta)) / (2*a);
            float x2 = (-b - sqrt(delta)) / (2*a);
            printf("%.2lf %.2lf",x1,x2);
        }
    }
    return 0;
}