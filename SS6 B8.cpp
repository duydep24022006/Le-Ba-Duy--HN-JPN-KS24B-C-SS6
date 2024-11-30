#include <stdio.h>

int main() {
    float lai[3], sum, op;

    printf("Tien ban dau: ");
    scanf("%f", &lai[0]);

    printf("Lai suat (%%): ");
    scanf("%f", &lai[1]);

    printf("So thang gui: ");
    scanf("%f", &lai[2]);
    sum = (float)lai[0] * (lai[1] / 100) * lai[2];
    op = sum + lai[0];
    printf("Tien lai: %.2f\n", sum);
    printf("Tong tien nhan duoc: %.2f\n", op);

    return 0;
}

