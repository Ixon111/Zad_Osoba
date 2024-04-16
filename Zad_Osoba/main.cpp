//
//  main.cpp
//  Zad_Osoba
//
//  Created by Igor Jaroniewski on 11/04/2024.
//

#include <iostream>
#include <vector>
#include <string>
#include "osoba.hpp"
#include "Student.hpp"
#include "nauczyciel.hpp"

using namespace std;

int main() {
    vector<Osoba*> osoby;

    char wybor;
    do {
        cout << endl;
        cout << "Wybierz opcję: " << endl;
        cout << "1. Dodaj studenta" << endl;
        cout << "2. Dodaj nauczyciela" << endl;
        cout << "0. Zakończ dodawanie" << endl;
        
        cin >> wybor;

        if (wybor == '1') {
            string imie, nazwisko, email;
            vector<int> oceny;
            
            cout<<endl;
            cout << "Podaj imię: ";
            cin >> imie;
            cout << "Podaj nazwisko: ";
            cin >> nazwisko;
            cout << "Podaj adres e-mail: ";
            cin >> email;

            cout << "Podaj oceny (oddzielone spacjami, zakończ wprowadzanie wpisując -1): ";
            int ocena;
            while (cin >> ocena && ocena != -1) {
                oceny.push_back(ocena);
            }

            osoby.push_back(new Student(imie, nazwisko, email, oceny));
        } else if (wybor == '2') {
            string imie, nazwisko, email;
            vector<string> przedmioty;

            cout << "Podaj imię: ";
            cin >> imie;
            cout << "Podaj nazwisko: ";
            cin >> nazwisko;
            cout << "Podaj adres e-mail: ";
            cin >> email;

            cout << "Podaj przedmioty (oddzielone spacjami, zakończ wprowadzanie wpisując 'koniec'): ";
            string przedmiot;
            while (cin >> przedmiot && przedmiot != "koniec") {
                przedmioty.push_back(przedmiot);
            }

            osoby.push_back(new Nauczyciel(imie, nazwisko, email, przedmioty));
        }
    } while (wybor != '0');


    cout << "\nDane osób:\n";
    for (Osoba* osoba : osoby) {
        osoba->wyswietlDane();
    }

    for (Osoba* osoba : osoby) {
        delete osoba;
    }

    return 0;
}
