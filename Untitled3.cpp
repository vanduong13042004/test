#include <iostream>
#include <algorithm>
using namespace std;

struct sinhvien {
    char ten[30];
    int tuoi;
    char gioitinh[10];
    float cannang;
    char lop[10];
};

bool compareByAge(const sinhvien& a, const sinhvien& b) {
    return a.tuoi < b.tuoi;
}

int main() {
    sinhvien sv[5];

    for (int i = 0; i < 5; i++) {
        cout << "Nh?p th�ng tin sinh vi�n th? " << i + 1 << ":\n";
        cout << "T�n: ";
        cin >> sv[i].ten;
        cout << "Tu?i: ";
        cin >> sv[i].tuoi;
        cout << "Gi?i t�nh: ";
        cin >> sv[i].gioitinh;
        cout << "C�n n?ng: ";
        cin >> sv[i].cannang;
        cout << "L?p: ";
        cin >> sv[i].lop;
        cout << endl;
    }

    // S?p x?p theo �? tu?i
    sort(sv, sv + 5, compareByAge);

    // In ra danh s�ch sinh vi�n theo �? tu?i
    cout << "Danh s�ch sinh vi�n theo �? tu?i:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Sinh vi�n th? " << i + 1 << ":\n";
        cout << "T�n: " << sv[i].ten << endl;
        cout << "Tu?i: " << sv[i].tuoi << endl;
        cout << "Gi?i t�nh: " << sv[i].gioitinh << endl;
        cout << "C�n n?ng: " << sv[i].cannang << endl;
        cout << "L?p: " << sv[i].lop << endl;
        cout << endl;
    }

    // T?m sinh vi�n c� c�n n?ng cao nh?t v� th?p nh?t
    float maxWeight = sv[0].cannang;
    float minWeight = sv[0].cannang;
    char maxWeightPerson[30];
    char minWeightPerson[30];

    for (int i = 1; i < 5; i++) {
        if (sv[i].cannang > maxWeight) {
            maxWeight = sv[i].cannang;
            strcpy(maxWeightPerson, sv[i].ten);
        }
        if (sv[i].cannang < minWeight) {
            minWeight = sv[i].cannang;
            strcpy(minWeightPerson, sv[i].ten);
        }
    }

    // In ra th�ng tin sinh vi�n c� c�n n?ng cao nh?t v� th?p nh?t
    cout << "Ng�?i c� c�n n
