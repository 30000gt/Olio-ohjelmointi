#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int game(int maxnum) {
    int random = (rand() % maxnum) + 1;
    int arvaus;
    int arvaustenMaara = 0;

    do {
        std::cout << "Arvaa luku väliltä 1-" << maxnum << ": ";
        std::cin >> arvaus;
        if (random < arvaus) {
            std::cout << "Arvattu luku on pienempi" << endl;
            arvaustenMaara++;
        } else if (random > arvaus) {
            std::cout << "Arvattu luku on suurempi" << endl;
            arvaustenMaara++;
        }
    } while (random != arvaus);

    std::cout << "Onneksi olkoon, luku oli " << random << endl;
    return arvaustenMaara;
}

int main() {
    srand(time(NULL));
    int maksimi = 40;
    int arvaukset = game(maksimi);
    std::cout << "Arvasit " << arvaukset << " kertaa." << endl;
    return 0;
}
