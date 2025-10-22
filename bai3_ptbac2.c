#include <stdio.h>
#include <math.h>

int ptb2(){
    double a, b, c;
    printf("nhap he so a: ");
    scanf("%lf", &a);
    printf("nhap he so b: ");
    scanf("%lf", &b);
    printf("nhap he so c: ");
    scanf("%lf", &c);
    
    if (a == 0){
        if (b == 0){
            if (c == 0){
                printf("phuong trinh co vo so nghiem");
            } else {
                printf("phuong trinh vo nghiem");
            }
        } else {
            double x = -c/b;
            printf("day la phuong trinh bac nhat co nghiem x = %lf", x);
        }
    } else {
        double delta = (b*b) - (4*a*c);
        if (delta < 0){
            printf("phuong trinh vo nghiem");
        } else if (delta == 0) {
            double x1 = -b / (2*a);
            printf("phuong trinh co nghiem kep x1 = x2 = %lf", x1);
        } else {
            double x1 = (-b + sqrt(delta)) / (2*a);
            double x2 = (-b - sqrt(delta)) / (2*a);
            printf("phuong trinh co hai nghiem phan biet x1 = %lf, x2 = %lf", x1, x2);
        }
    }
    
    return 0;
}
