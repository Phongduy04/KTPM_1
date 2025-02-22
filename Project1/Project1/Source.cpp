#include <iostream>
using namespace std;


bool isPrime(int n) {
    if (n <= 1) {
        return false;  
    }
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true;  
}



void checkPrime() {
    int number;
    cout << "Nhap mot so nguyen duong: ";
    cin >> number;


    if (isPrime(number)) {
        cout << number << " la so nguyen to." << endl;
    }
    else {
        cout << number << " khong phai la so nguyen to." << endl;
    }
}
bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true; 
    }
    return false;
}

void showMenu() {
    int choice;
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Kiem tra so nguyen to\n";
        cout << "2. Kiem tra nam nhuan\n";
        cout << "3. Thoat\n";
        cout << "Nhap lua chon cua ban (1-3): ";
        cin >> choice;


        switch (choice) {
        case 1:
            checkPrime();  
            break;
        case 2:
        {
            int year;
            cout << "Nhập một năm: ";
            cin >> year;

            if (isLeapYear(year)) {
                cout << year << " là năm nhuận.\n";
            }
            else {
                cout << year << " không phải là năm nhuận.\n";
            }
            break;
        }

        case 3:
            cout << "Thoat chuong trinh.\n";
            return;  
        default:
            cout << "Lua chon khong hop le! Vui long chon lai.\n";
            break;
        }
    }
}

int main() {
    showMenu();  
    return 0;
}
