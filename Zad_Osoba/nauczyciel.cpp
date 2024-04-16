//
//  Nauczyciel.cpp
//  Zad_Osoba
//
//  Created by Igor Jaroniewski on 11/04/2024.
//

#include "nauczyciel.hpp"
#include <iostream>
using namespace std;


Nauczyciel::Nauczyciel(string im, string naz, string adr, vector<string> prz) : Osoba(im, naz, adr), przedmioty(prz) {}

void Nauczyciel::wyswietlDane() {
    Osoba::wyswietlDane();
    wyswietlPrzedmioty();
}

void Nauczyciel::wyswietlPrzedmioty() {
    cout << "Przedmioty nauczyciela " << imie << " " << nazwisko << ":" << endl;
    for (string przedmiot : przedmioty) {
        cout << przedmiot << endl;
    }
}

