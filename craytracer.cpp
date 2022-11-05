#include <iostream>

import primitives;

using namespace std;

int main(int argc, char* argv[]) {
    primitives::Vector vec = primitives::makeVector(1.0, 2.0, 3.0);
    cout << "Vector (" << vec[0] << ", " << vec[1] << ", " << vec[2] << ")" << endl;
}
