#include "LogikaGry.h"
#include <iostream>

// --- Implementacja klasy Rzad ---
Rzad::Rzad(Karta pierwszaKarta) {
    kartyWRzedzie.push_back(pierwszaKarta);
    kolorRzedu = pierwszaKarta.getKolor();
}

bool Rzad::czyMoznaDodac(const Karta& karta) const {
    // TODO: Zaimplementuj sprawdzenie reguł:
    // 1. Czy kolor dodawanej karty == kolorRzedu?
    // 2. Czy wartość dodawanej karty < wartość ostatniej karty w wektorze?
    return true; // Zwróć wynik walidacji
}

void Rzad::dodajKarte(const Karta& karta) {
    if (czyMoznaDodac(karta)) {
        kartyWRzedzie.push_back(karta);
    }
}

void Rzad::wyswietlRzad() const {
    for (const auto& karta : kartyWRzedzie) {
        karta.wyswietl();
        std::cout << " ";
    }
    std::cout << "\n";
}

// --- Implementacja klasy GraBogey ---
GraBogey::GraBogey() {
    generujTasujTalie();
}

void GraBogey::generujTasujTalie() {
    // TODO: Wygeneruj 52 karty, dodaj do taliaGlowna i użyj std::shuffle
}

std::vector<Karta> GraBogey::dobierzKarty(int ilosc) {
    std::vector<Karta> dobrane;
    // TODO: Pobierz 'ilosc' kart z końca talii (std::vector::pop_back)
    // Jeśli taliaGlowna jest pusta, wywołaj przetasujOdrzucone()
    return dobrane;
}

void GraBogey::ruchBogeymana() {
    std::cout << "--- Ruch Bogeymana! ---\n";
    // TODO: Pobierz 1 kartę z talii.
    // Wymuś na graczu jej zagranie. Jeśli nie pasuje do rzędów, zmuś go do stworzenia nowego rzędu.
}

void GraBogey::wyswietlStanGry() const {
    std::cout << "Liczba rzedow: " << stoly.size() << "\n";
    for (size_t i = 0; i < stoly.size(); ++i) {
        std::cout << "Rzad " << i + 1 << ": ";
        stoly[i].wyswietlRzad();
    }
}

// ... (Kolejne metody do uzupełnienia wg logiki) ...
