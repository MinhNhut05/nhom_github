#include <stdio.h>
#include <math.h>

int main(){
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


#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    
    // Nhập hệ số
    printf("Nhap he so a: ");
    scanf("%lf", &a);
    printf("Nhap he so b: ");
    scanf("%lf", &b);
    printf("Nhap he so c: ");
    scanf("%lf", &c);
    
    printf("Phuong trinh: %.2lfx^2 + %.2lfx + %.2lf = 0\n", a, b, c);
    
    // Xử lý trường hợp phương trình bậc nhất (a = 0)
    if (a == 0) {
        if (b == 0) {
            printf(c == 0 ? "Phuong trinh co vo so nghiem\n" : "Phuong trinh vo nghiem\n");
        } else {
            printf("Phuong trinh bac nhat co nghiem x = %.2lf\n", -c/b);
        }
        return 0;
    }
    
    // Tính delta và xác định nghiệm
    double delta = b*b - 4*a*c;
    
    if (delta < 0) {
        printf("Phuong trinh vo nghiem\n");
    } else if (delta == 0) {
        printf("Phuong trinh co nghiem kep x = %.2lf\n", -b/(2*a));
    } else {
        double x1 = (-b + sqrt(delta))/(2*a);
        double x2 = (-b - sqrt(delta))/(2*a);
        printf("Phuong trinh co hai nghiem phan biet:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }
    
    return 0;
}

