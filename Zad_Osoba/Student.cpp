//
//  Student.cpp
//  Zad_Osoba
//
//  Created by Igor Jaroniewski on 11/04/2024.
//

#include "Student.hpp"
#include <iostream>
using namespace std;

Student::Student(string im, string naz, string adr, vector<int> oc) : Osoba(im, naz, adr), oceny(oc) {}

void Student::wyswietlDane() {
    Osoba::wyswietlDane(); // Wywołanie metody z klasy bazowej
    wyswietlOceny(); // Wyświetlenie ocen
}

void Student::wyswietlOceny() {
    cout << "Oceny studenta " << imie << " " << nazwisko << ":" << std::endl;
    for (int ocena : oceny) {
        cout << ocena << " ";
    }
    cout << endl;
}

