#ifndef LOGIKAGRY_H
#define LOGIKAGRY_H

#include <vector>
#include "Karta.h"

class Rzad {
private:
    std::vector<Karta> kartyWRzedzie;
    std::string kolorRzedu;

public:
    Rzad(Karta pierwszaKarta);
    bool czyMoznaDodac(const Karta& karta) const;
    void dodajKarte(const Karta& karta);
    void wyswietlRzad() const;
    int pobierzLiczbeKart() const;
};

class GraBogey {
private:
    std::vector<Karta> taliaGlowna;
    std::vector<Karta> taliaOdrzuconych;
    std::vector<Rzad> stoly;

public:
    GraBogey();
    void generujTasujTalie();
    void przetasujOdrzucone();
    
    std::vector<Karta> dobierzKarty(int ilosc);
    Karta dociagnijJednaKarte(); // Dla Bogeymana
    
    bool zagrajKarte(const Karta& karta, int numerRzedu);
    void stworzNowyRzad(const Karta& karta);
    void odrzucKarty(const std::vector<Karta>& karty);
    
    void wyswietlStanGry() const;
    int zliczKartyNaStole() const;
    int getLiczbaRzedow() const;
};

#endif
