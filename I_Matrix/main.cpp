#include "matrix.h"
#include <fstream>

int main() {

    Matrix A("int.txt");
    std::ofstream out("out.txt");
    out << A;
    out.close();
    
    return 0;
}
