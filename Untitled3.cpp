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
        cout << "Nh?p thông tin sinh viên th? " << i + 1 << ":\n";
        cout << "Tên: ";
        cin >> sv[i].ten;
        cout << "Tu?i: ";
        cin >> sv[i].tuoi;
        cout << "Gi?i tính: ";
        cin >> sv[i].gioitinh;
        cout << "Cân n?ng: ";
        cin >> sv[i].cannang;
        cout << "L?p: ";
        cin >> sv[i].lop;
        cout << endl;
    }

    // S?p x?p theo ð? tu?i
    sort(sv, sv + 5, compareByAge);

    // In ra danh sách sinh viên theo ð? tu?i
    cout << "Danh sách sinh viên theo ð? tu?i:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Sinh viên th? " << i + 1 << ":\n";
        cout << "Tên: " << sv[i].ten << endl;
        cout << "Tu?i: " << sv[i].tuoi << endl;
        cout << "Gi?i tính: " << sv[i].gioitinh << endl;
        cout << "Cân n?ng: " << sv[i].cannang << endl;
        cout << "L?p: " << sv[i].lop << endl;
        cout << endl;
    }

    // T?m sinh viên có cân n?ng cao nh?t và th?p nh?t
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

    // In ra thông tin sinh viên có cân n?ng cao nh?t và th?p nh?t
    cout << "Ngý?i có cân n
