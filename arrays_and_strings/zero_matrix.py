
import numpy as np 
import copy

def zero_matrix(mat1):

    mat2 = copy.copy(mat1)
    # print(mat2)

    for irow in range(len(mat1)):

        zero_found = False
        end_of_list = False

        icol = 0

        while not zero_found and not end_of_list:

            if mat1[irow][icol] == 0:
                zero_found = True
                for i in range(len(A)):
                    mat2[i][icol] = 0
                for j in range(len(mat1[0])):
                    mat2[irow][j] = 0

            if icol == len(mat1[0]) - 1:
                # end of list
                end_of_list = True

            icol = icol + 1
    # print(mat1)
    # print(mat2)
    return mat2
        

# A = np.array([[1,2,3],[4,5,6],[7,8,9]])
# print(zero_matrix(A))

# A = np.array([[0,2,3],[4,5,6],[7,8,9]])
# print(zero_matrix(A))

# A = np.array([[0,2,3],[4,5,6],[7,8,0]])
# print(zero_matrix(A))

# A = np.array([[1,2,3],[4,5,6],[7,0,9]])
# print(zero_matrix(A))

def zero_matrix_mxn(mat):

    zeros_r = []
    zeros_c = []

    for i in range(len(mat)):
        for j in range(len(mat)):
            if mat[i][j] == 0:
                zeros_r.append(i)
                zeros_c.append(j)

    for i in zeros_r:
        for j in range(len(mat[0])):
            mat[i][j] = 0

    for j in zeros_c:
        for i in range(len(mat)):
            mat[i][j] = 0

    return mat

A = np.array([[1,2,3],[4,5,6],[7,8,9]])
print(zero_matrix_mxn(A))

A = np.array([[0,2,3],[4,5,6],[7,8,9]])
print(zero_matrix_mxn(A))

A = np.array([[0,2,3],[4,5,6],[7,8,0]])
print(zero_matrix_mxn(A))

A = np.array([[1,2,3],[4,5,6],[7,0,9]])
print(zero_matrix_mxn(A))

# def zero_matrix_O1(mat):

#     for i in range(len(mat)):
#         for j in range(len(mat)):
#             if mat[i][j] == 0:
#                 mat[i][0] = 0
#                 mat[0][j] = None

#     for i in range(len(mat)):
#         if mat[i][0] == 0:
#             for j in range(len(mat[0])):
#                 mat[i][j] = 0

#     for j in range(len(mat[0])):
#         if mat[0][j] == None:
#             for i in range(len(mat)):
#                 mat[i][j] = 0

#     return mat


# A = np.array([[1,2,3],[4,5,6],[7,8,9]])
# print(zero_matrix_O1(A))

# A = np.array([[0,2,3],[4,5,6],[7,8,9]])
# print(zero_matrix_O1(A))

# A = np.array([[0,2,3],[4,5,6],[7,8,0]])
# print(zero_matrix_O1(A))

# A = np.array([[1,2,3],[4,5,6],[7,0,9]])
# print(zero_matrix_O1(A))