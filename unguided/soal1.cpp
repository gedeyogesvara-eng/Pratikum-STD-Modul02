#include <iostream>
using namespace std;

int main() {
    int matrikA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrikB[3][3] = {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18}
    };

    for (int i=0; i<3; i++) {
        for (int j = 0; j<3; j++) {
    cout << "Hasil penjumlahan dari " << matrikA[i][j] << " dan " << matrikB[i][j] << " = " << matrikA[i][j] + matrikB[i][j] << endl;
        }
    }

    return 0;
}