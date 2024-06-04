#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

int hitungVokal(const string &kalimat, string &vokal) {
    int jumlahVokal = 0;
    for (char huruf : kalimat) {
       
        char hurufKecil = tolower(huruf);
        
        if (hurufKecil == 'a' || hurufKecil == 'e' || hurufKecil == 'i' ||
            hurufKecil == 'o' || hurufKecil == 'u') {
            jumlahVokal++;
            
            if (vokal.find(hurufKecil) == string::npos) {
                if (!vokal.empty()) 
                    vokal += ' ';
                vokal += hurufKecil;
            }
        }
    }
    return jumlahVokal;
}

int main() {
    string kalimat;
    string hurufVokal;


    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    int jumlahVokal = hitungVokal(kalimat, hurufVokal);

    cout << "Jumlah huruf vokal dalam kalimat adalah: " << jumlahVokal << endl;
    cout << "Huruf vokal yang muncul dalam kalimat: " << hurufVokal << endl;

    return 0;
}
