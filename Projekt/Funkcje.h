#ifndef FUNKCJE_H
#define FUNKCJE_H

#include <vector>
#include "Karta.h"

// Kilka funkcji swapujących (zamieniających obiekty miejscami)
void zamienReferencja(Karta& a, Karta& b);
void zamienWskaznik(Karta* a, Karta* b);

// Trzy algorytmy sortowania (sortują rosnąco według pola 'id')
void sortowanieBabelkowe(std::vector<Karta>& karty);
void sortowaniePrzezWybieranie(std::vector<Karta>& karty);
void sortowaniePrzezWstawianie(std::vector<Karta>& karty);

// Funkcja pomocnicza do wypisywania zawartości kontenera
void wyswietlWszystkieKarty(const std::vector<Karta>& karty);

#endif
