#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); 

    int rastgeleSayi = std::rand() % 100 + 1; 
    int tahmin;
    int denemeSayisi = 0;

    std::cout << "1 ile 100 arasında bir sayı tahmin edin." << std::endl;

    do {
        std::cout << "Tahmininizi girin: ";
        std::cin >> tahmin;
        denemeSayisi++;

        if (tahmin < rastgeleSayi) {
            std::cout << "Daha büyük bir sayı girin." << std::endl;
        } else if (tahmin > rastgeleSayi) {
            std::cout << "Daha küçük bir sayı girin." << std::endl;
        } else {
            std::cout << "Tebrikler! " << denemeSayisi << " denemede doğru tahmin ettiniz." << std::endl;
        }

    } while (tahmin != rastgeleSayi);

    return 0;
}