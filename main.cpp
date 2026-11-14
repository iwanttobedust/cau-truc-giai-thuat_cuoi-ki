
#include "Family.h"

// Hien thi giao dien Menu
void menu() {
    cout << "\n========== GIA PHA ==========\n";
    cout << "1. Tim Cu to\n";
    cout << "2. Xem danh sach con cai\n";
    cout << "3. Xem danh sach anh chi em\n";
    cout << "0. Thoat chuong trinh\n";
    cout << "============================\n";
    cout << "Nhap lua chon: ";
}

int main() {
    int choice;
    int id;

    do {
        menu();
        cin >> choice;

        switch (choice) {
        case 1:
            findAncestor();
            break;

        case 2:
            cout << "Nhap ID thanh vien: ";
            cin >> id;

            if (findPerson(id) == -1) {
                cout << "Khong tim thay thanh vien!\n";
            }
            else {
                printChildren(id);
            }
            break;

        case 3:
            cout << "Nhap ID thanh vien: ";
            cin >> id;

            printSiblings(id);
            break;

        case 0:
            cout << "Ket thuc chuong trinh!\n";
            break;

        default:
            cout << "Lua chon khong hop le!\n";
        }

    } while (choice != 0);

    return 0;
}
