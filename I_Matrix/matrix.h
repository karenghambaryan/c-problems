#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <string>

class Matrix {
private:
    int m_rows;
    int m_cols;
    int** m_matrix;

public:
    Matrix();                              
    Matrix(const std::string& filename);   
    ~Matrix();
    Matrix& operator=(const Matrix& other);
    friend std::ostream& operator<<(std::ostream& os, const Matrix& m);
    void OutFile(const std::string& filename) const;

};

#endif