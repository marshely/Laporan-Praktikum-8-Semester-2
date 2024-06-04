#include <iostream>
#include <iomanip>

using namespace std;

void bubbleSort(int data[], int size) {
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (data[j] > data[j+1]) {
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
}

int sequentialSearch(const int data[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (data[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int originalData[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int dataSize = sizeof(originalData) / sizeof(originalData[0]);
    int data[dataSize];
    for (int i = 0; i < dataSize; ++i) {
        data[i] = originalData[i];
    }

    int target = 4;

    cout << "Data sebelum diurutkan: ";
    for (int i = 0; i < dataSize; ++i) {
        cout << setw(2) << data[i] << " "; 
    }
    cout << endl;

    bubbleSort(data, dataSize);

    cout << "Data yang sudah terurut: ";
    for (int i = 0; i < dataSize; ++i) {
        cout << setw(2) << data[i] << " "; 
    }
    cout << endl;

    int jumlah_angka_4 = sequentialSearch(data, dataSize, target);

    cout << "Jumlah angka 4 dalam data adalah: " << jumlah_angka_4 << endl;

    return 0;
}
