#include <stdio.h>

void nhap_diem() {
    float van, toan, anh, dtb;

    printf("Nhap diem van: ");
    scanf("%f", &van);

    printf("Nhap diem toan: ");
    scanf("%f", &toan);

    printf("Nhap diem anh: ");
    scanf("%f", &anh);

    dtb = (van * 2 + toan * 2 + anh) / 5;

    printf("Diem trung binh: %.2f\n", dtb);

    if (dtb < 3)
        printf("Hoc luc: Yeu\n");
    else if (dtb < 5)
        printf("Hoc luc: Trung binh\n");
    else if (dtb < 7.9)
        printf("Hoc luc: Kha\n");
    else
        printf("Hoc luc: Gioi\n");

    return;
}

int main() {
    nhap_diem();
    return 0;
}
