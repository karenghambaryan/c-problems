#include "matrix.h"
#include <fstream>
#include <sstream>

Matrix::Matrix() {
    m_rows = 0;
    m_cols = 0;
    m_matrix = nullptr;
}

Matrix::Matrix(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "cannot open file " << filename << std::endl;
        m_rows = 0;
        m_cols = 0;
        m_matrix = nullptr;
        return;
    }

    std::string line;
    int rows = 0, cols = 0;

    while (std::getline(file, line)) {
        if (line.empty())
        {
            continue;
        }
        std::istringstream iss(line);
        int count = 0, temp;
        while (iss >> temp) count++;
        if (count > 0) {
            rows++;
            if (count > cols){
                cols = count;
            }
        }
    }

    m_rows = rows;
    m_cols = cols;

    file.clear();
    file.seekg(0);

    m_matrix = new int*[m_rows];
    for (int i = 0; i < m_rows; i++)
    {
        m_matrix[i] = new int[m_cols];
    }
    int r = 0;
    while (std::getline(file, line)) {
        if (line.empty())
        {
        continue;
        }
        std::istringstream iss(line);
        for (int j = 0; j < m_cols; j++)
        {
            iss >> m_matrix[r][j];
        }
        r++;
    }

    file.close();
}

Matrix::~Matrix() {
    if (m_matrix != nullptr) {
        for (int i = 0; i < m_rows; i++)
        {
            delete[] m_matrix[i];
        }
        delete[] m_matrix;
    }
}

Matrix& Matrix::operator=(const Matrix& other) {
    if (this == &other)
    {
        return *this;
    }
    if (m_matrix != nullptr) {
        for (int i = 0; i < m_rows; i++)
            delete[] m_matrix[i];
        delete[] m_matrix;
    }

    m_rows = other.m_rows;
    m_cols = other.m_cols;

    m_matrix = new int*[m_rows];
    for (int i = 0; i < m_rows; i++) {
        m_matrix[i] = new int[m_cols];
        for (int j = 0; j < m_cols; j++)
        {
            m_matrix[i][j] = other.m_matrix[i][j];
        }
    }

    return *this;
}

std::ostream& operator<<(std::ostream& os, const Matrix& m) {
    for (int i = 0; i < m.m_rows; i++) {
        for (int j = 0; j < m.m_cols; j++)
        {
            os << m.m_matrix[i][j] << " ";
        }
        os << std::endl;
    }
    return os;
}
