#include <stdio.h>
#include <math.h>

int kiemTraSoNguyenTo(int n) {
    if (n < 2)
        return 0;  // Số nhỏ hơn 2 không phải là số nguyên tố
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)  // Nếu tìm thấy ước khác 1 và chính n
            return 0;   // n không là số nguyên tố
    }
    return 1;  // n là số nguyên tố
}


int main(){
    int n;
    printf("Hay nhap so can kiem tra: ");
    scanf("%d", &n);
    if (kiemTraSoNguyenTo(n))
        printf("%d la so nguyen to",n);
    else
        printf("%d khong la so nguyen to",n);
}