#include "Funkcje.h"

// 1. Swap za pomocą referencji
void zamienReferencja(Karta& a, Karta& b) {
    Karta temp = a;
    a = b;
    b = temp;
}

// 2. Swap za pomocą wskaźników
void zamienWskaznik(Karta* a, Karta* b) {
    if (a != nullptr && b != nullptr) {
        Karta temp = *a;
        *a = *b;
        *b = temp;
    }
}

// Algorytm 1: Sortowanie Bąbelkowe (Bubble Sort)
void sortowanieBabelkowe(std::vector<Karta>& karty) {
    size_t n = karty.size();
    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            if (karty[j].getId() > karty[j + 1].getId()) {
                zamienReferencja(karty[j], karty[j + 1]); // Użycie swapa przez referencję
            }
        }
    }
}

// Algorytm 2: Sortowanie Przez Wybieranie (Selection Sort)
void sortowaniePrzezWybieranie(std::vector<Karta>& karty) {
    size_t n = karty.size();
    for (size_t i = 0; i < n - 1; ++i) {
        size_t min_idx = i;
        for (size_t j = i + 1; j < n; ++j) {
            if (karty[j].getId() < karty[min_idx].getId()) {
                min_idx = j;
            }
        }
        zamienWskaznik(&karty[i], &karty[min_idx]); // Użycie swapa przez wskaźnik
    }
}

// Algorytm 3: Sortowanie Przez Wstawianie (Insertion Sort)
void sortowaniePrzezWstawianie(std::vector<Karta>& karty) {
    size_t n = karty.size();
    for (size_t i = 1; i < n; ++i) {
        Karta klucz = karty[i];
        int j = static_cast<int>(i) - 1;
        
        while (j >= 0 && karty[j].getId() > klucz.getId()) {
            karty[j + 1] = karty[j];
            j--;
        }
        karty[j + 1] = klucz;
    }
}

void wyswietlWszystkieKarty(const std::vector<Karta>& karty) {
    for (const auto& karta : karty) {
        karta.wyswietl();
    }
}
