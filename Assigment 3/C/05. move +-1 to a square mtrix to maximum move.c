// #include <stdio.h>
// int main(){
//     int arr[][5] = {{7,5,3,2,1},
//                     {3,4,1,4,4},
//                     {1,5,6,7,8},
//                     {3,4,5,8,9},
//                     {3,2,2,7,6}};
    
// }

#include <stdio.h>
#include <stdlib.h>

#define N 5 // Assuming a square matrix of size N

int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to print the snake sequence
void printSnakeSequence(int mat[N][N], int dp[N][N], int max_i, int max_j) {
    printf("The maximum length snake sequence is:\n");
    
    int i = max_i, j = max_j;
    while (dp[i][j] != 1) {
        printf("%d -> ", mat[i][j]);
        if (i > 0 && dp[i][j] == dp[i-1][j] + 1) {
            i--;
        } else if (j > 0 && dp[i][j] == dp[i][j-1] + 1) {
            j--;
        }
    }
    printf("%d\n", mat[i][j]);
}

// Function to find the maximum length snake sequence
void findMaxSnakeSequence(int mat[N][N]) {
    int dp[N][N];
    int max_len = 1;
    int max_i = 0, max_j = 0;

    // Initialize the dp array
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            dp[i][j] = 1;
        }
    }

    // Fill the dp array and track the maximum length and its position
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i > 0 && abs(mat[i][j] - mat[i-1][j]) == 1) {
                dp[i][j] = max(dp[i][j], dp[i-1][j] + 1);
                if (dp[i][j] > max_len) {
                    max_len = dp[i][j];
                    max_i = i;
                    max_j = j;
                }
            }
            if (j > 0 && abs(mat[i][j] - mat[i][j-1]) == 1) {
                dp[i][j] = max(dp[i][j], dp[i][j-1] + 1);
                if (dp[i][j] > max_len) {
                    max_len = dp[i][j];
                    max_i = i;
                    max_j = j;
                }
            }
        }
    }

    // Print the maximum length snake sequence
    printSnakeSequence(mat, dp, max_i, max_j);
}

int main() {
    int mat[N][N] = {
        {7, 3, 4, 5, 6},
        {3, 1, 1, 4, 8},
        {1, 6, 1, 4, 9},
        {3, 3, 2, 2, 6},
        {2, 4, 5, 5, 7}
    };

    findMaxSnakeSequence(mat);
    
    return 0;
}
