#ifndef KARTA_H
#define KARTA_H

#include <string>
#include <iostream>

class Karta {
private:
    int id;               // Kolumna 1
    std::string wartosc;  // Kolumna 2 (np. "As", "Dama")
    std::string kolor;    // Kolumna 3 (np. "Pik", "Kier")
    int punkty;           // Kolumna 4 (np. 11, 10)

public:
    Karta();
    Karta(int id, std::string wartosc, std::string kolor, int punkty);

    // Gettery do pobierania danych (używane przy sortowaniu i wyświetlaniu)
    int getId() const;
    std::string getWartosc() const;
    std::string getKolor() const;
    int getPunkty() const;

    void wyswietl() const;
};

#endif
