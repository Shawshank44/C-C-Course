#include <iostream>
using namespace std;

const int MAX = 10; // Maximum matrix size

void inputMatrix(int mat[MAX][MAX], int rows, int columns) {
    cout << "Enter matrix elements (" << rows << " x " << columns << "):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> mat[i][j];
        }
    }
}

void displayMatrix(int mat[MAX][MAX], int rows, int columns) {
    cout << "Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void addMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int r1, int c1, int c2) {
    // Initialize result matrix to zero
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void transposeMatrix(int mat[MAX][MAX], int trans[MAX][MAX], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            trans[j][i] = mat[i][j];
        }
    }
}

int main() {
    int choice, rows1, cols1, rows2, cols2;
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX], trans[MAX][MAX];

    do {
        cout << "\nMatrix Operations:\n";
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Transposition\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            cout << "Enter rows and columns for first matrix: ";
            cin >> rows1 >> cols1;
            inputMatrix(A, rows1, cols1);

            cout << "Enter rows and columns for second matrix: ";
            cin >> rows2 >> cols2;
            inputMatrix(B, rows2, cols2);
        }

        switch (choice) {
            case 1: // Addition
                if (rows1 == rows2 && cols1 == cols2) {
                    addMatrices(A, B, result, rows1, cols1);
                    cout << "Resultant Matrix after Addition:\n";
                    displayMatrix(result, rows1, cols1);
                } else {
                    cout << "Addition not possible. Matrices must have the same dimensions.\n";
                }
                break;

            case 2: // Subtraction
                if (rows1 == rows2 && cols1 == cols2) {
                    subtractMatrices(A, B, result, rows1, cols1);
                    cout << "Resultant Matrix after Subtraction:\n";
                    displayMatrix(result, rows1, cols1);
                } else {
                    cout << "Subtraction not possible. Matrices must have the same dimensions.\n";
                }
                break;

            case 3: // Multiplication
                if (cols1 == rows2) {
                    multiplyMatrices(A, B, result, rows1, cols1, cols2);
                    cout << "Resultant Matrix after Multiplication:\n";
                    displayMatrix(result, rows1, cols2);
                } else {
                    cout << "Multiplication not possible. Columns of first matrix must match rows of second.\n";
                }
                break;

            case 4: // Transposition
                cout << "Enter rows and columns for matrix: ";
                cin >> rows1 >> cols1;
                inputMatrix(A, rows1, cols1);
                transposeMatrix(A, trans, rows1, cols1);
                cout << "Transposed Matrix:\n";
                displayMatrix(trans, cols1, rows1);
                break;

            case 5:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
