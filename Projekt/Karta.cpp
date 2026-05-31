#include "Karta.h"

Karta::Karta() : id(0), wartosc(""), kolor(""), punkty(0) {}

Karta::Karta(int id, std::string wartosc, std::string kolor, int punkty)
    : id(id), wartosc(wartosc), kolor(kolor), punkty(punkty) {}

int Karta::getId() const { return id; }
std::string Karta::getWartosc() const { return wartosc; }
std::string Karta::getKolor() const { return kolor; }
int Karta::getPunkty() const { return punkty; }

void Karta::wyswietl() const {
    std::cout << "ID: " << id << " | " << wartosc << " " << kolor 
              << " | Punkty: " << punkty << "\n";
}
