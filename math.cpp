#include <iostream>

int main() {
    int coefficients[] = {6, -7, 2, -10, 20};
    int degree = sizeof(coefficients) / sizeof(coefficients[0]) - 1; // Bậc của đa thức
    int x = -6; // Giá trị muốn tính đa thức

    int result = coefficients[0]; // Khởi tạo kết quả bằng hệ số tự do của đa thức

    for (int i = 1; i <= degree; i++) {
        result = result * x + coefficients[i];
    }

    std::cout << "Đa thức sau khi giải: " << result << "x^0" << std::endl;
    return 0;
}