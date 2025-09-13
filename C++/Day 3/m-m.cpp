#include<iostream>
using namespace std;
 
int main()
{
    // Initialize two 3x3 matrices 'a' and 'b' and a result matrix 'c'
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[3][3] = {1, 2, 3,4, 5, 6}; 
    int c[3][3];
    int i, j, k;

    // Perform matrix multiplication
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            // Initialize the element of the result matrix to 0
            c[i][j] = 0;
            // The inner loop for matrix multiplication
            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    // Print the resultant matrix
    cout << "Result of matrix multiplication:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}