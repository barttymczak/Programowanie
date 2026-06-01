#include <iostream>
#include <cmath>
#include <string>

class Wahadlo {
private:
    double amplituda;
    double okres;
    double x; // chwilowe wychylenie
    double t; // czas

public:
    // Konstruktor
    Wahadlo(double a, double okr, double poczX, double poczT) 
        : amplituda(a), okres(okr), x(poczX), t(poczT) {}

    // Metoda krok() aktualizująca czas i wychylenie
    void krok() {
        t += 0.1; // krok czasowy
        // Wzór: x = A * cos(2 * PI * t / T)
        x = amplituda * std::cos((2.0 * M_PI * t) / okres);
    }

    // Metoda zwracająca aktualne wychylenie
    double getWychylenie() const {
        return x;
    }
};

int main() {
    // Parametry: Amplituda=20, Okres=10.0, Startowe x=20, Startowe t=0
    Wahadlo w(20.0, 10.0, 20.0, 0.0);

    for (int i = 0; i < 30; ++i) {
        double wychylenie = w.getWychylenie();
        
        // Przesunięcie wykresu, aby uniknąć ujemnych wartości gwiazdek
        int liczbaGwiazdek = static_cast<int>(wychylenie + 20);
        
        if (liczbaGwiazdek > 0) {
            std::cout << std::string(liczbaGwiazdek, '*') << std::endl;
        } else {
            std::cout << "*" << std::endl;
        }

        w.krok();
    }

    return 0;
}
