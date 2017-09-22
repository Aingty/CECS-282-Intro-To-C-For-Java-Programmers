/*
 Aingty Eung
 013462772
 CECS 282 Lab 9 
 */
#include <iostream>
using namespace std;
void readm(float *, int, int);
void writem(float *, int, int);
void mulmatrix(float *, int, int, float *, int, int, float *);
int main() {
    int rows, cols, rows1, cols1;
    float *M1, *M2, *M3;
    bool keepGoing = true;
    while (keepGoing)
    {
        cout <<"Please input rows number of Matrix 1." <<endl;
        cin >> rows;
        cin.ignore();
        cout <<"Please input columns number of Matrix 1." <<endl;
        cin >> cols;
        cin.ignore();
        cout <<"Please input rows number of Matrix 2." <<endl;
        cin >> rows1;
        cin.ignore();
        cout <<"Please input columns number of Matrix 2." <<endl;
        cin >> cols1;
        cin.ignore();
        // If statement used to test and see if the user's array's dimension is valid
        if (cols == rows1)
        {
            M1 = new float[rows*cols];
            cout << "Please input matrix 1 values"<< endl;
            writem(M1, rows, cols);
            cout << "Please input matrix 2 values"<<endl;
            M2 = new float[rows1*cols1];
            writem(M2, rows1, cols1);
            cout << "Matrix 1:"<<endl;
            readm(M1, rows, cols);
            cout << "Matrix 2:"<<endl;
            readm(M2, rows1, cols1);
            cout << "\nMatrix 1 * Matrix 2 = Matrix 3:\n";
            M3 = new float[rows*cols1];
            mulmatrix(M1, rows, cols, M2, rows1, cols1, M3);
            readm(M3, rows, cols1);
            cout << "\n"<<endl;
            keepGoing = false;
            delete[] M1;
            delete[] M2;
            delete[] M3;
        }
        else
        {
            cout << "Sorry invalid matrices dimension for multiplication. Please re-input the sizes."<<endl;
            keepGoing = true;
        }
    }
    return 0;
}
/*------------------------------------*/
// Getting the size of the matrix
float *allocate(int rows, int cols)
{
    float *ptr;
    ptr = new float(rows*cols);
    return ptr;
}
// Printing the matrix
void readm(float *matrix, int rows, int cols)
{
    int j = 0;
    for(int i = 0; i < rows*cols; i++)
    {
        if (j == cols)
        {
            cout << "\n";
            j = 0;
        }
        j++;
        cout << *(matrix+i) << " ";
    }
    cout << "\n";
}
// Getting input into the matrix
void writem(float *matrix, int rows, int cols)
{
    for (int i = 0; i < rows*cols; i++)
    {
        cin >> matrix[i];
        cin.ignore();
    }

}
// Multiplying the matrix function
void mulmatrix(float *matrix1, int rows1, int cols1, float *matrix2, int rows2, int cols2, float *product)
{
    float matrix2Rewrite[rows2*cols2]; // This matrix will contain the ordered column from matrix 2
    int counter = 0, counterColumn = 0, writeValue = 0, writeValueTemp = writeValue;
    float matrix1Rewrite[rows2*cols2*rows1]; // Special matrix to use for ease of multiplication
    // Initializing the first matrix for multiplication by putting it in repeated row based on matrix 2 cols
    for (int i = 0; i < rows2*cols2*rows1; i ++)
    {
        matrix1Rewrite[i] = matrix1[writeValueTemp];
        writeValueTemp++;
        counter++;
        if (counter == cols1)
        {
            counter = 0;
            writeValueTemp = writeValue;
            counterColumn++;
            if (counterColumn == cols2)
            {
                writeValue = writeValue+cols1;
                writeValueTemp = writeValue;
            }
        }
    }
    // Initializing the second matrix for multiplication by putting it one column at a time instead of row
    for (int i = 0; i < cols2; i++)
    {
        int columnTemp = i;
        while (columnTemp < rows2*cols2)
        {
            matrix2Rewrite[counter] = matrix2[columnTemp];
            counter++;
            columnTemp = columnTemp+cols2;
        }

    }
    int k = 0, l = 0; // "k" and "l" are used to increment the matrixRewrite elements
    for (int i = 0; i < rows1 * cols2; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            product[i] += (matrix1Rewrite[k]*matrix2Rewrite[l]);
            k++; l++;
            // When l is equal to size of the matrix2Rewrite, we reset l
            if (l == (rows2*cols2))
            {
                l = 0;
            }
        }
    }
}
