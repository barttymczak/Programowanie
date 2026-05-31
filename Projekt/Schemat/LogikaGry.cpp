#include "LogikaGry.h"
#include <iostream>
#include <algorithm>
#include <random>

// --- ETAP 2: Mechanika Rzędu (Walidacja ruchów) ---
Rzad::Rzad(Karta pierwszaKarta) {
    kartyWRzedzie.push_back(pierwszaKarta);
    kolorRzedu = pierwszaKarta.getKolor();
}

bool Rzad::czyMoznaDodac(const Karta& karta) const {
    if (kartyWRzedzie.empty()) return true;
    
    // Zgodność koloru i wartość karty mniejsza niż ostatnia w rzędzie
    bool poprawnyKolor = (karta.getKolor() == kolorRzedu);
    bool poprawnaWartosc = (karta.getWartosc() < kartyWRzedzie.back().getWartosc());
    
    return poprawnyKolor && poprawnaWartosc;
}

void Rzad::dodajKarte(const Karta& karta) {
    kartyWRzedzie.push_back(karta);
}

void Rzad::wyswietlRzad() const {
    for (const auto& karta : kartyWRzedzie) {
        karta.wyswietl();
        std::cout << " ";
    }
    std::cout << "\n";
}

int Rzad::pobierzLiczbeKart() const {
    return kartyWRzedzie.size();
}

// --- ETAP 1 i 3: Zarządzanie Talią ---
GraBogey::GraBogey() {
    generujTasujTalie();
}

void GraBogey::generujTasujTalie() {
    std::string kolory[] = {"Pik", "Kier", "Trefl", "Karo"};
    std::string nazwy[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Walet", "Dama", "Krol", "As"};
    
    for (const auto& kolor : kolory) {
        for (int i = 0; i < 13; ++i) {
            taliaGlowna.push_back(Karta(kolor, i + 2, nazwy[i]));
        }
    }
    
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(taliaGlowna.begin(), taliaGlowna.end(), g);
}

void GraBogey::przetasujOdrzucone() {
    if (taliaOdrzuconych.empty()) return;
    
    std::cout << "\n[!] Przetasowanie stosu kart odrzuconych do talii glownej...\n";
    taliaGlowna = taliaOdrzuconych;
    taliaOdrzuconych.clear();
    
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(taliaGlowna.begin(), taliaGlowna.end(), g);
}

std::vector<Karta> GraBogey::dobierzKarty(int ilosc) {
    std::vector<Karta> dobrane;
    for (int i = 0; i < ilosc; ++i) {
        if (taliaGlowna.empty()) przetasujOdrzucone();
        if (taliaGlowna.empty()) break; // Brak kart w całej grze
        
        dobrane.push_back(taliaGlowna.back());
        taliaGlowna.pop_back();
    }
    return dobrane;
}

Karta GraBogey::dociagnijJednaKarte() {
    if (taliaGlowna.empty()) przetasujOdrzucone();
    Karta dociagnieta = taliaGlowna.back();
    taliaGlowna.pop_back();
    return dociagnieta;
}

bool GraBogey::zagrajKarte(const Karta& karta, int numerRzedu) {
    int index = numerRzedu - 1;
    if (index >= 0 && index < stoly.size()) {
        if (stoly[index].czyMoznaDodac(karta)) {
            stoly[index].dodajKarte(karta);
            return true;
        }
    }
    return false;
}

void GraBogey::stworzNowyRzad(const Karta& karta) {
    stoly.push_back(Rzad(karta));
}

void GraBogey::odrzucKarty(const std::vector<Karta>& karty) {
    for (const auto& k : karty) {
        taliaOdrzuconych.push_back(k);
    }
}

void GraBogey::wyswietlStanGry() const {
    std::cout << "\n=== STOL (Liczba rzedow: " << stoly.size() << ") ===\n";
    if (stoly.empty()) std::cout << "(Pusto)\n";
    for (size_t i = 0; i < stoly.size(); ++i) {
        std::cout << "Rzad " << i + 1 << ": ";
        stoly[i].wyswietlRzad();
    }
    std::cout << "======================\n";
}

int GraBogey::zliczKartyNaStole() const {
    int suma = 0;
    for (const auto& rzad : stoly) {
        suma += rzad.pobierzLiczbeKart();
    }
    return suma;
}

int GraBogey::getLiczbaRzedow() const {
    return stoly.size();
}
