#include <iostream>
void sumArrays(int arr1[], int arr2[], int size) {
    int sum[size];
    std::cout << "Sum of arrays:" << std::endl;
    for (int i = 0; i < size; ++i) {
        sum[i] = arr1[i] + arr2[i];
        std::cout << sum[i] << " ";
    }
    std::cout << std::endl;
}
void sumMatrices(int mat1[][2], int mat2[][2], int rows, int cols) {
    int sum[rows][cols];
    std::cout << "Sum of matrices:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            std::cout << sum[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    int arrSize = sizeof(arr1) / sizeof(arr1[0]);
    sumArrays(arr1, arr2, arrSize);
    int mat1[][2] = {{1, 2}, {3, 4}};
    int mat2[][2] = {{5, 6}, {7, 8}};
    int rows = sizeof(mat1) / sizeof(mat1[0]);
    int cols = sizeof(mat1[0]) / sizeof(mat1[0][0]);
    sumMatrices(mat1, mat2, rows, cols);

    return 0;
}

