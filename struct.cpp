#include <iostream>
#include <algorithm>

using namespace std;

struct SinhVien {
    string ten;
    int tuoi;
    float luong;
    float canNang;
    string chieucao;
    string gioitinh;
};

bool soSanhTheoTuoi(const SinhVien &a, const SinhVien &b) {
    return a.tuoi < b.tuoi;
}

bool soSanhTheoCanNang(const SinhVien &a, const SinhVien &b) {
    return a.canNang < b.canNang;
}

int main() {
    int soSinhVien;
	cout<<"Nhap so luong sinh vien: ";
    cin>>soSinhVien;
    SinhVien danhSachSinhVien[soSinhVien];
    cin.ignore();

  
    for (int i = 0; i < soSinhVien; ++i) {
        cout << "Nhap thong tin cho sinh vien " << i + 1 << ":\n";
        cout << "Ten: ";
        getline(cin, danhSachSinhVien[i].ten);
        cout << "Tuoi: ";
        cin >> danhSachSinhVien[i].tuoi;
        cout << "Luong: ";
        cin >> danhSachSinhVien[i].luong;
        cout << "Can nang: ";
        cin >> danhSachSinhVien[i].canNang;
        cout << "chieu cao: ";
        cin.ignore(); 
        getline(cin, danhSachSinhVien[i].chieucao);
        cout << "gioi tinh: ";
        getline(cin, danhSachSinhVien[i].gioitinh);
        cout << "\n";
    }

    sort(danhSachSinhVien, danhSachSinhVien + soSinhVien, soSanhTheoTuoi);

    cout << "Danh sach sinh vien sau khi sap xep theo do tuoi:\n";
    for (int i = 0; i < soSinhVien; ++i) {
        cout << "Ten: " << danhSachSinhVien[i].ten
             << ", Tuoi: " << danhSachSinhVien[i].tuoi
             << ", Luong: " << danhSachSinhVien[i].luong
             << ", Can nang: " << danhSachSinhVien[i].canNang
             << ", Chieu cao: " << danhSachSinhVien[i].chieucao
             << ", Gioi tinh: " << danhSachSinhVien[i].gioitinh << "\n";
    }

    float canNangCaoNhat = max_element(danhSachSinhVien, danhSachSinhVien + soSinhVien, soSanhTheoCanNang)->canNang;
    float canNangThapNhat = min_element(danhSachSinhVien, danhSachSinhVien + soSinhVien, soSanhTheoCanNang)->canNang;

    cout << "Nhan vien co can nang cao nhat: " << canNangCaoNhat << "\n";
    cout << "Nhan vien co can nang thap nhat: " << canNangThapNhat << "\n";

    return 0;
}
