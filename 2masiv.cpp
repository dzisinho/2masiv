
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int rows, cols, shifts;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    cout << "Enter the number of shifts to the right: ";
    cin >> shifts;

    int array[100][100];
    srand(time(0)); 
    cout << "Initial array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = rand() % 10; 
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    shifts %= cols; 
    for (int i = 0; i < rows; ++i) {
        for (int s = 0; s < shifts; ++s) {
            int last = array[i][cols - 1]; 
            for (int j = cols - 1; j > 0; --j) {
                array[i][j] = array[i][j - 1]; 
            }
            array[i][0] = last; 
        }
    }
    cout << "Array after shifting to the right:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
