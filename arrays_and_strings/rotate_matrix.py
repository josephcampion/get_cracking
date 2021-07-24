
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

# def rotate_matrix_swp(A):
#     n = len(A)
#     B = np.zeros(A.shape)

#     for i in range(n):
#         for j in range(n):
#             # print(i,j)
#             if (j >= i) and (j < n/2):
#                 print(i,j)
#                 tmp = 
#                 A[i][j] = A[n-j-1][i]
#                 A[n-j-1][i] = A[n-i-1][n-j-1]
#                 A[n-i-1][n-j-1] = A[n-j-1][i]


    return B

# A = np.array([[1,2,3],[4,5,6],[7,8,9]])

# print(rotate_matrix_swp(A))
