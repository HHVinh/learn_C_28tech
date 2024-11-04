#include <stdio.h>
#include <math.h>

int prime(int n) {
    if (n <= 1) return 0;  // 0 và 1 không phải số nguyên tố
    for (int i = 2; i <= sqrt(n); i++) {  // Chỉ kiểm tra đến căn bậc hai của n
        if (n % i == 0) {
            return 0;  // Không phải số nguyên tố
        }
    }
    return 1;  // Là số nguyên tố
}

int main(){
    int n;
    int i = 0, dem = 0;
    printf("Hay nhap so nguyen to muon hien thi: ");
    scanf("%d",&n);
    while (dem<n){
        if(prime(i)){
            printf("%d ",i);
            dem++;
        }
        i++;
    }
}