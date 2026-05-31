#ifndef KARTA_H
#define KARTA_H

#include <string>

class Karta {
private:
    std::string kolor; // Np. "Pik", "Kier", "Trefl", "Karo"
    int wartosc;       // Wartość liczbowa ułatwiająca sortowanie malejące (np. 2-14, gdzie 14 to As)
    std::string nazwa; // Np. "As", "Król", "7"

public:
    Karta(std::string kolor, int wartosc, std::string nazwa);
    
    // Gettery
    std::string getKolor() const;
    int getWartosc() const;
    std::string getNazwa() const;
    
    void wyswietl() const;
};

#endif
