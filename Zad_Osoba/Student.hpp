//
//  Student.hpp
//  Zad_Osoba
//
//  Created by Igor Jaroniewski on 11/04/2024.
//

#pragma once
#include "osoba.hpp"
#include <vector>

class Student : public Osoba {
private:
    vector<int> oceny;

public:
    Student(string im, string naz, string adr, vector<int> oc);

    void wyswietlDane() override;
    void wyswietlOceny();
};


