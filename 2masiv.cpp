
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
    int currentValue = startValue; 
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = currentValue; 
            currentValue++;            
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
