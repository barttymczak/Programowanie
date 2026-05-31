#include <iostream>
#include "LogikaGry.h"

// Funkcja pomocnicza do wyświetlania kart na ręce
void wyswietlReke(const std::vector<Karta>& reka) {
    std::cout << "Twoje karty: ";
    for (size_t i = 0; i < reka.size(); ++i) {
        std::cout << i + 1 << ".";
        reka[i].wyswietl();
        std::cout << "  ";
    }
    std::cout << "\n";
}

int main() {
    GraBogey gra;
    std::cout << "Witaj w grze The Bogey!\nCel: Rozlozyc 52 karty uzywajac jak najmniejszej liczby rzedow.\n";

    // ETAP 6: Gra trwa dopóki na stole nie znajdą się 52 karty
    while (gra.zliczKartyNaStole() < 52) {
        
        // ETAP 4: Tura gracza
        std::vector<Karta> rekaGracza = gra.dobierzKarty(5);
        bool turaGraczaTrwa = true;

        while (turaGraczaTrwa && !rekaGracza.empty()) {
            gra.wyswietlStanGry();
            wyswietlReke(rekaGracza);
            
            std::cout << "\nWybierz akcje:\n"
                      << "1. Zagraj karte do rzedu\n"
                      << "2. Stworz nowy rzad z karty\n"
                      << "3. Zakończ ture (odrzuc reszte kart)\n"
                      << "Wybor: ";
            
            int wybor;
            std::cin >> wybor;

            if (wybor == 1 || wybor == 2) {
                std::cout << "Wybierz numer karty z reki (1-" << rekaGracza.size() << "): ";
                int nrKarty;
                std::cin >> nrKarty;
                
                if (nrKarty < 1 || nrKarty > rekaGracza.size()) {
                    std::cout << "Niepoprawny numer karty!\n";
                    continue;
                }
                
                Karta wybranaKarta = rekaGracza[nrKarty - 1];

                if (wybor == 1) {
                    std::cout << "Podaj numer rzedu: ";
                    int nrRzedu;
                    std::cin >> nrRzedu;

                    if (gra.zagrajKarte(wybranaKarta, nrRzedu)) {
                        rekaGracza.erase(rekaGracza.begin() + (nrKarty - 1));
                        std::cout << "Karta zagrana pomyslnie.\n";
                    } else {
                        std::cout << "Bledny ruch! Karta nie pasuje kolorem lub wartosc nie jest mniejsza.\n";
                    }
                } else if (wybor == 2) {
                    gra.stworzNowyRzad(wybranaKarta);
                    rekaGracza.erase(rekaGracza.begin() + (nrKarty - 1));
                    std::cout << "Nowy rzad utworzony.\n";
                }
            } else if (wybor == 3) {
                turaGraczaTrwa = false;
            } else {
                std::cout << "Nieznana komenda.\n";
            }
        }
        
        // Odrzucenie niezużytych kart
        if (!rekaGracza.empty()) {
            gra.odrzucKarty(rekaGracza);
            std::cout << "[!] Niewykorzystane karty trafily na stos odrzuconych.\n";
        }

        // Zabezpieczenie przed błędem, gdy na stole jest już 52 karty (koniec gry na turze gracza)
        if (gra.zliczKartyNaStole() >= 52) break;

        // ETAP 5: Faza Bogeymana
        std::cout << "\n--- Ruch Bogeymana! ---\n";
        Karta narzucona = gra.dociagnijJednaKarte();
        std::cout << "Bogeyman narzuca ci karte: ";
        narzucona.wyswietl();
        std::cout << "\n";
        
        gra.wyswietlStanGry();
        
        bool rundaBogeymanaTrwa = true;
        while (rundaBogeymanaTrwa) {
            std::cout << "Gdzie ja polozysz?\n1. Doloz do istniejacego rzedu\n2. Stworz nowy rzad\nWybor: ";
            int wyborBogey;
            std::cin >> wyborBogey;

            if (wyborBogey == 1) {
                std::cout << "Podaj numer rzedu: ";
                int nrRzedu;
                std::cin >> nrRzedu;
                if (gra.zagrajKarte(narzucona, nrRzedu)) {
                    std::cout << "Udalo ci sie dolozyc karte.\n";
                    rundaBogeymanaTrwa = false;
                } else {
                    std::cout << "Karta nie pasuje do tego rzedu! Musisz sprobowac inaczej.\n";
                }
            } else if (wyborBogey == 2) {
                gra.stworzNowyRzad(narzucona);
                std::cout << "Utworzono nowy rzad dla karty od Bogeymana.\n";
                rundaBogeymanaTrwa = false;
            }
        }
    }

    std::cout << "\n=========================================\n";
    std::cout << "GRATULACJE! Rozlozyles wszystkie 52 karty!\n";
    std::cout << "TWOJ WYNIK (LICZBA RZEDOW): " << gra.getLiczbaRzedow() << "\n";
    std::cout << "=========================================\n";

    return 0;
}
