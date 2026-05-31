#include <iostream>
#include "LogikaGry.h"

int main() {
    GraBogey gra;
    bool graTrwa = true;

    std::cout << "Witaj w grze The Bogey!\n";

    while (graTrwa) {
        // 1. Dobranie 5 kart przez gracza
        std::vector<Karta> rekaGracza = gra.dobierzKarty(5);
        
        // 2. Interakcja gracza (kładzenie kart w rzędach, odrzucanie reszty)
        gra.wyswietlStanGry();
        std::cout << "Twoj ruch. Rozloz dobrane karty (logika UI do zrobienia)...\n";
        // TODO: Wczytywanie wejścia od gracza (np. std::cin), walidacja ruchów
        
        // 3. Mechanika zrzucania nieużytych kart
        // TODO: Dodanie niewykorzystanych kart do stosu odrzuconych
        
        // 4. Ruch mitycznego straszydła
        gra.ruchBogeymana();

        // 5. Warunek końca gry
        // TODO: Sprawdź, czy talia i karty odrzucone są puste, i wyjdź z pętli
        // graTrwa = false;
    }

    std::cout << "Koniec gry! Twoj wynik (liczba utworzonych rzedow): ... \n";

    return 0;
}
