//
//  Nauczyciel.hpp
//  Zad_Osoba
//
//  Created by Igor Jaroniewski on 11/04/2024.
//

#pragma once
#include "osoba.hpp"
#include <vector>
#include <string>
using namespace std;

class Nauczyciel : public Osoba {
private:
    vector<string> przedmioty;

public:
    Nauczyciel(string im, string naz, string adr, vector<string> prz);

    void wyswietlDane() override; 
    void wyswietlPrzedmioty();
};
