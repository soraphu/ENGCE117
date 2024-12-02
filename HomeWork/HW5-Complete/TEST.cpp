#include <stdio.h>

int main() {
    int a, b, c;
    int max;

    // รับค่าจากผู้ใช้
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Enter value for c: ");
    scanf("%d", &c);

    // หาค่าที่มาที่สุด
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }

    // แสดงผลลัพธ์
    printf("The maximum value is: %d\n", max);

    return 0;
}
