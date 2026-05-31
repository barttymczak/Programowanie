#ifndef LOGIKAGRY_H
#define LOGIKAGRY_H

#include <vector>
#include "Karta.h"

// Klasa reprezentująca pojedynczy rząd na stole
class Rzad {
private:
    std::vector<Karta> kartyWRzedzie;
    std::string kolorRzedu;

public:
    Rzad(Karta pierwszaKarta);
    bool czyMoznaDodac(const Karta& karta) const;
    void dodajKarte(const Karta& karta);
    void wyswietlRzad() const;
};

// Klasa zarządzająca całą grą "The Bogey"
class GraBogey {
private:
    std::vector<Karta> taliaGlowna;
    std::vector<Karta> taliaOdrzuconych;
    std::vector<Rzad> stoly; // Wszystkie aktywne rzędy na stole

public:
    GraBogey();
    void generujTasujTalie();
    
    // Faza Gracza
    std::vector<Karta> dobierzKarty(int ilosc = 5);
    bool zagrajKarte(const Karta& karta, int numerRzedu);
    void stworzNowyRzad(const Karta& karta);
    void odrzucKarte(const Karta& karta);
    
    // Faza Bogeymana
    void ruchBogeymana(); 
    
    // Funkcje pomocnicze
    void przetasujOdrzucone();
    void wyswietlStanGry() const;
    bool czyKoniecGry() const;
};

#endif
