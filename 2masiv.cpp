
#include <iostream>
using namespace std;

int main() {
    int rows, cols, startValue;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    cout << "Enter the starting number: ";
    cin >> startValue;

    int array[100][100]; 
    array[0][0] = startValue; 
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i == 0 && j == 0) continue; 
            if (j == 0) {
                array[i][j] = array[i - 1][cols - 1] * 2; 
            }
            else {
                array[i][j] = array[i][j - 1] * 2; 
            }
        }
    }
    cout << "Generated array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
