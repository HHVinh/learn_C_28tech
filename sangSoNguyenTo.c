#include <stdio.h>
#include <math.h>

int prime[1000001];

// Hàm sangSoNguyenTo: thực hiện thuật toán sàng Eratosthenes để tìm tất cả các số nguyên tố <= 1,000,000
void sangSoNguyenTo() {
    // Khởi tạo mảng prime với giá trị 1 cho tất cả các phần tử
    for (int i = 0; i <= 1000000; i++)
        prime[i] = 1;

    // Đặt giá trị của 0 và 1 thành 0 vì chúng không phải là số nguyên tố
    prime[0] = prime[1] = 0;

    // Duyệt các số từ 2 đến căn bậc hai của 1,000,000
    for (int i = 2; i <= 1000; i++) {
        if (prime[i]) {  // Nếu i là số nguyên tố
            // Đánh dấu các bội của i là không phải số nguyên tố
            for (int j = i * i; j <= 1000000; j += i) {
                prime[j] = 0;  // Đặt các bội của i thành 0
            }
        }
    }
}

int main() {
    // Gọi hàm để tính toán các số nguyên tố
    sangSoNguyenTo();

    int n;
    printf("Hay nhap so can kiem tra: ");
    scanf("%d", &n);  // Nhập số cần kiểm tra từ người dùng

    // Duyệt và in tất cả các số nguyên tố nhỏ hơn hoặc bằng n
    printf("Cac so nguyen to duoi %d la: ", n);
    for (int i = 0; i <= n; i++) {
        if (prime[i])  // Nếu prime[i] là 1, tức là i là số nguyên tố
            printf("%d ", i);  // In ra số nguyên tố i
    }
    printf("\n");  // Xuống dòng sau khi in tất cả các số nguyên tố
}
