#include <iostream>

bool solution(int number) {
    int prevDigit = 10; // Poprzednia cyfra (początkowo ustawiona na 10, co jest większe od jakiejkolwiek cyfry)

    while (number > 0) {
        int digit = number % 10; // Pobieramy ostatnią cyfrę
        if (digit > prevDigit) {
            return false; // Jeśli cyfry nie są ułożone od najmniejszej do największej, zwracamy false
        }
        prevDigit = digit; // Aktualizujemy poprzednią cyfrę
        number /= 10; // Usuwamy ostatnią cyfrę
    }

    return true; // Jeśli doszliśmy do tego punktu, oznacza to, że cyfry są ułożone od najmniejszej do największej
}

int main() {
    int number;
    std::cout << "Podaj liczbę: ";
    std::cin >> number;

    if (solution(number)) {
        std::cout << "Cyfry są ułożone od najmniejszej do największej." << std::endl;
    }
    else {
        std::cout << "Cyfry nie są ułożone od najmniejszej do największej." << std::endl;
    }

    return 0;
}