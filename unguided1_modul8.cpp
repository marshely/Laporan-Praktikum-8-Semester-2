#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Fungsi untuk melakukan Binary Search
bool binarySearch(const vector<char>& sortedVec, char target) {
    int left = 0;
    int right = sortedVec.size() - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (sortedVec[middle] == target) {
            return true;
        } else if (sortedVec[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return false;
}

int main() {
    string kalimat;
    char huruf;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;

    vector<char> vec(kalimat.begin(), kalimat.end());

    sort(vec.begin(), vec.end());

    // Mencari huruf menggunakan Binary Search
    if (binarySearch(vec, huruf)) {
        cout << "Huruf '" << huruf << "' ditemukan dalam kalimat." << endl;
    } else {
        cout << "Huruf '" << huruf << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
