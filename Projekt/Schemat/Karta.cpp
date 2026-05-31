#include "Karta.h"
#include <iostream>

Karta::Karta(std::string k, int w, std::string n) : kolor(k), wartosc(w), nazwa(n) {}

std::string Karta::getKolor() const { return kolor; }
int Karta::getWartosc() const { return wartosc; }
std::string Karta::getNazwa() const { return nazwa; }

void Karta::wyswietl() const {
    std::cout << "[" << nazwa << " " << kolor << "]";
}
