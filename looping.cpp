#include <iostream>
using namespace std;

int main(){

    char ulangi = 'y';
    int counter = 0;

    int n;
    cout << "Jumlah data: ";
    cin >> n;

    int Ganjil = 0; 
    int Genap = 0;  

    for (int i = 1; i < n; ++i) {
        if (i % 2 == 0) {
            Genap += i; 
        } else {
            Ganjil += i; 
        }
    }

    cout << "Jumlah bilangan Genap: " << Genap << endl;
    cout << "Jumlah bilangan Ganjil: " << Ganjil << endl;
    
    while(ulangi == 'y'){
        printf("Apakah kamu mau mengulang?\n");
        printf("Jawab (y/t): ");
        cin >> ulangi;

        
        counter++;

    int n;
    cout << "Jumlah data: ";
    cin >> n;

    int Ganjil = 0; // Sum of odd numbers
    int Genap = 0;  // Sum of even numbers

    for (int i = 1; i < n; ++i) {
        if (i % 2 == 0) {
            Genap += i; // Add to even sum
        } else {
            Ganjil += i; // Add to odd sum
        }
    }

    cout << "Jumlah bilangan Genap: " << Genap << endl;
    cout << "Jumlah bilangan Ganjil: " << Ganjil << endl;
    }

}