#include <iostream>
#include <fstream>
#include <vector>
#include "Karta.h"
#include "Funkcje.h"

int main() {
    std::vector<Karta> talia;
    std::string nazwaPliku = "karty.txt";
    std::ifstream plik(nazwaPliku);

    // ZABEZPIECZENIE 1: Sprawdzenie czy plik w ogóle istnieje / da się otworzyć
    if (!plik.is_open()) {
        std::cerr << "Blad: Nie mozna otworzyc pliku '" << nazwaPliku << "'!\n";
        std::cerr << "Upewnij sie, ze plik znajduje sie w odpowiednim katalogu.\n";
        return 1; 
    }

    int id;
    std::string wartosc;
    std::string kolor;
    int punkty;
    int licznikLinii = 0;

    // Bezpieczne wczytywanie dokładnie 4 kolumn w każdej iteracji
    while (plik >> id >> wartosc >> kolor >> punkty) {
        licznikLinii++;
        talia.push_back(Karta(id, wartosc, kolor, punkty));
    }

    // ZABEZPIECZENIE 2: Sprawdzenie stanu strumienia po zakończeniu pętli
    if (plik.bad()) {
        std::cerr << "Blad krytyczny sprzętu lub strumienia podczas odczytu pliku.\n";
    } else if (plik.fail() && !plik.eof()) {
        // Strumień napotkał błąd (np. tekst zamiast liczby lub urwana linia przed wczytaniem 4 kolumn)
        std::cerr << "Blad formatu danych w pliku w okolicy linii " << licznikLinii + 1 << "!\n";
        std::cerr << "Przerwano wczytywanie. Oczekiwano struktury: [int] [string] [string] [int]\n";
        plik.close();
        return 1;
    }

    plik.close(); // Poprawne zamknięcie zasobu

    if (talia.empty()) {
        std::cout << "Plik byl pusty lub nie udalo sie wczytac zadnych danych.\n";
        return 0;
    }

    std::cout << "=== Wczytano pomyslnie " << talia.size() << " kart z pliku ===\n";
    wyswietlWszystkieKarty(talia);

    // Klonujemy wektory, by przetestować każde sortowanie na tych samych, oryginalnych danych
    std::vector<Karta> taliaBabelkowe = talia;
    std::vector<Karta> taliaWybieranie = talia;
    std::vector<Karta> taliaWstawianie = talia;

    std::cout << "\n>>> Test: Sortowanie Babelkowe <<<\n";
    sortowanieBabelkowe(taliaBabelkowe);
    wyswietlWszystkieKarty(taliaBabelkowe);

    std::cout << "\n>>> Test: Sortowanie Przez Wybieranie <<<\n";
    sortowaniePrzezWybieranie(taliaWybieranie);
    wyswietlWszystkieKarty(taliaWybieranie);

    std::cout << "\n>>> Test: Sortowanie Przez Wstawianie <<<\n";
    sortowaniePrzezWstawianie(taliaWstawianie);
    wyswietlWszystkieKarty(taliaWstawianie);

    return 0;
}
