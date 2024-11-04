#include <stdio.h>
#include <math.h>

// Hàm tìm giá trị lớn nhất giữa hai số nguyên a và b
int max(int a, int b) {
    return (a > b) ? a : b;  // Sử dụng toán tử ba ngôi cho ngắn gọn
}

// Hàm sàng nguyên tố trong đoạn từ 'trai' đến 'phai'
void sangSoNguyenToTrenDoan(int trai, int phai) {
    int prime[phai - trai + 1];  // Mảng lưu trạng thái số nguyên tố trong đoạn
    // Khởi tạo tất cả các phần tử của mảng prime thành 1 (giả sử tất cả đều là số nguyên tố)
    for (int i = 0; i <= phai - trai; i++)  
        prime[i] = 1;

    // Sàng lọc các số không phải số nguyên tố
    for (int i = 2; i <= sqrt(phai); i++) {
        // Tìm vị trí đầu tiên để bắt đầu đánh dấu bội của i
        int start = max(i * i, (trai + i - 1) / i * i);
        for (int j = start; j <= phai; j += i) {
            prime[j - trai] = 0;  // Đánh dấu các bội của i là không phải số nguyên tố
        }
    }

    // In ra các số nguyên tố trong đoạn
    printf("Cac so nguyen to trong doan %d den %d la: ", trai, phai);
    for (int i = max(trai, 2); i <= phai; i++) {  // Bỏ qua các số nhỏ hơn 2
        if (prime[i - trai])  // Kiểm tra nếu là số nguyên tố
            printf("%d ", i);  // In ra số nguyên tố
    }
    printf("\n");
}

int main() {
    int trai, phai;
    printf("Hay nhap so bat dau va ket thuc cua doan can sang so nguyen to: ");
    scanf("%d %d", &trai, &phai);
    sangSoNguyenToTrenDoan(trai, phai);
}
