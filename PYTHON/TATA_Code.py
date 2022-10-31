
def matrixOperation(N, M):
    greater_row_numbers = []
    column_matrix = [list(i) for i in zip(*M)]
    greater_column_numbers = []
    for rows in M:
        greater_row_numbers.append(max(rows))
    for columns in column_matrix:
        greater_column_numbers.append(max(columns))
    out = bitwise_op(greater_column_numbers,greater_row_numbers)
    for output in out:
        print(output, end=' ')
    # print(greater_row_numbers)
    # print(greater_column_numbers)



def bitwise_op(H, J):
    out =[]
    for numbers,number in zip(H,J):
            # print(f"This is row :{number}")
            # print(f"This is column :{numbers}")
            output = int(numbers) & int(number)
            out.append(output)
    return out

def main():
    n = int(input())
    rows_of_matrix = []
    for i in range (0,n):
        elements_of_each_row =input().split(' ')
        rows_of_matrix.append(elements_of_each_row)

    matrixOperation(n, rows_of_matrix)
    # print(rows_of_matrix)
main()
