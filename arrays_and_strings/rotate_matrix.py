
import numpy as np

def rotate_matrix(A):
    n = len(A)
    B = np.zeros(A.shape)

    for i in range(n):
        for j in range(n):
            # B[n-j-1][i] = A[i][j]
            B[i][j] = A[n-j-1][i]

    return B

A = np.array([[1,2,3],[4,5,6],[7,8,9]])

print(rotate_matrix(A))

def rotate_matrix_swp(A):
    n = len(A)
    B = np.zeros(A.shape)

    for i in range(n):
        for j in range(n):
            # B[n-j-1][i] = A[i][j]
            B[i][j] = A[n-j-1][i]

    return B