



#include <iostream>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int prices[10] = {
        120, 130, 140, 125, 110,
        100, 105, 150, 160, 250
    };

    int arr[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    int skidkaot = 1000;
    int balik = 2000;

    std::cout << "\tмагазин\n";
    std::cout << "ваш баланс: " << balik << " руб\n";
    std::cout << "введите количество литров каждого напитка\n";
    std::cout << "для отказа от товара введите 0\n\n";

    std::cout << "яблочный сок (" << prices[0] << " руб): ";
    std::cin >> arr[0];
    if (arr[0] < 0) arr[0] = 0;
    if (arr[0] * prices[0] <= balik) {
        balik -= arr[0] * prices[0];
    }
    else {
        std::cout << "недостаточно денег, покупка отменена\n";
        arr[0] = 0;
    }
    std::cout << "баланс: " << balik << " руб\n\n";

    std::cout << "апельсиновый сок (" << prices[1] << " руб): ";
    std::cin >> arr[1];
    if (arr[1] < 0) arr[1] = 0;
    if (arr[1] * prices[1] <= balik) {
        balik -= arr[1] * prices[1];
    }
    else {
        std::cout << "недостаточно денег, покупка отменена\n";
        arr[1] = 0;
    }
    std::cout << "баланс: " << balik << " руб\n\n";

    std::cout << "абрикосовый сок (" << prices[2] << " руб): ";
    std::cin >> arr[2];
    if (arr[2] < 0) arr[2] = 0;
    if (arr[2] * prices[2] <= balik) {
        balik -= arr[2] * prices[2];
    }
    else {
        std::cout << "недостаточно денег, покупка отменена\n";
        arr[2] = 0;
    }
    std::cout << "баланс: " << balik << " руб\n\n";

    std::cout << "грушевый сок (" << prices[3] << " руб): ";
    std::cin >> arr[3];
    if (arr[3] < 0) arr[3] = 0;
    if (arr[3] * prices[3] <= balik) {
        balik -= arr[3] * prices[3];
    }
    else {
        std::cout << "недостаточно денег, покупка отменена\n";
        arr[3] = 0;
    }
    std::cout << "баланс: " << balik << " руб\n\n";

    std::cout << "томатный сок (" << prices[4] << " руб): ";
    std::cin >> arr[4];
    if (arr[4] < 0) arr[4] = 0;
    if (arr[4] * prices[4] <= balik) {
        balik -= arr[4] * prices[4];
    }
    else {
        std::cout << "недостаточно денег, покупка отменена\n";
        arr[4] = 0;
    }
    std::cout << "баланс: " << balik << " руб\n\n";

    std::cout << "луковый сок (" << prices[5] << " руб): ";
    std::cin >> arr[5];
    if (arr[5] < 0) arr[5] = 0;

    int free = arr[5] / 4; // это фришный луковый сок
    int paidOnion = arr[5] - free;

    if (paidOnion * prices[5] <= balik) {
        balik -= paidOnion * prices[5];
    }
    else {
        std::cout << "недостаточно денег, покупка отменена\n";
        arr[5] = 0;
        free = 0;
        paidOnion = 0;
    }
    std::cout << "баланс: " << balik << " руб\n\n";

    std::cout << "огуречный сок (" << prices[6] << " руб): ";
    std::cin >> arr[6];
    if (arr[6] < 0) arr[6] = 0;
    if (arr[6] * prices[6] <= balik) {
        balik -= arr[6] * prices[6];
    }
    else {
        std::cout << "недостаточно денег, покупка отменена\n";
        arr[6] = 0;
    }
    std::cout << "баланс: " << balik << " руб\n\n";

    std::cout << "чесночный чай (" << prices[7] << " руб): ";
    std::cin >> arr[7];
    if (arr[7] < 0) arr[7] = 0;
    if (arr[7] * prices[7] <= balik) {
        balik -= arr[7] * prices[7];
    }
    else {
        std::cout << "недостаточно денег, покупка отменена\n";
        arr[7] = 0;
    }
    std::cout << "баланс: " << balik << " руб\n\n";

    std::cout << "петрушечный чай (" << prices[8] << " руб): ";
    std::cin >> arr[8];
    if (arr[8] < 0) arr[8] = 0;
    if (arr[8] * prices[8] <= balik) {
        balik -= arr[8] * prices[8];
    }
    else {
        std::cout << "недостаточно денег, покупка отменена\n";
        arr[8] = 0;
    }
    std::cout << "баланс: " << balik << " руб\n\n";

    if (arr[0] > 0 || arr[1] > 0 ||
        arr[2] > 0 || arr[3] > 0) {
        arr[9] = 0;
        std::cout << "покупка боярышника запрещена - выбран фруктовый сок\n";
    }
    else {
        std::cout << "настойка боярышника (" << prices[9] << " руб): ";
        std::cin >> arr[9];

        if (arr[9] < 0) arr[9] = 0;

        if (arr[9] * prices[9] <= balik) {
            balik -= arr[9] * prices[9];
        }
        else {
            std::cout << "недостаточно денег, покупка отменена\n";
            arr[9] = 0;
        }

        std::cout << "баланс: " << balik << " руб\n\n";
    }

    int summa =
        arr[0] * prices[0] +
        arr[1] * prices[1] +
        arr[2] * prices[2] +
        arr[3] * prices[3] +
        arr[4] * prices[4] +
        paidOnion * prices[5] +
        arr[6] * prices[6] +
        arr[7] * prices[7] +
        arr[8] * prices[8] +
        arr[9] * prices[9];

    int skidkaChay = 0;

    if (arr[8] >= 3)
        skidkaChay = arr[8] * prices[8] * 5 / 100;

    int summaPosleChaya = summa - skidkaChay;
    int skidkaChek = 0;

    if (summaPosleChaya > skidkaot)
        skidkaChek = summaPosleChaya * 13 / 100;

    int itogo = summaPosleChaya - skidkaChek;

    std::cout << "\tчек\n";

    if (arr[0] > 0)
        std::cout << "яблочный сок: " << arr[0] << " л\n";

    if (arr[1] > 0)
        std::cout << "апельсиновый сок: " << arr[1] << " л\n";

    if (arr[2] > 0)
        std::cout << "абрикосовый сок: " << arr[2] << " л\n";

    if (arr[3] > 0)
        std::cout << "грушевый сок: " << arr[3] << " л\n";

    if (arr[4] > 0)
        std::cout << "томатный сок: " << arr[4] << " л\n";

    if (arr[5] > 0)
        std::cout << "луковый сок: " << arr[5] << " л\n";

    if (arr[6] > 0)
        std::cout << "огуречный сок: " << arr[6] << " л\n";

    if (arr[7] > 0)
        std::cout << "чесночный чай: " << arr[7] << " л\n";

    if (arr[8] > 0)
        std::cout << "петрушечный чай: " << arr[8] << " л\n";

    if (arr[9] > 0)
        std::cout << "настойка боярышника(не оч): " << arr[9] << " л\n";

    std::cout << "\nсумма до скидки: " << summa << " руб\n";
    std::cout << "бесплатный луковый сок: " << free << " л\n";

    if (skidkaChay > 0)
        std::cout << "скидка 5% на петрушечный чай: " << skidkaChay << " руб\n";
    else
        std::cout << "скидка на петрушечный чай отсутствует\n";

    if (skidkaChek > 0)
        std::cout << "скидка 13% на весь чек: " << skidkaChek << " руб\n";
    else
        std::cout << "скидка 13% отсутствует\n";

    std::cout << "итого к оплате: " << itogo << " руб\n";
    std::cout << "остаток баланса: " << balik << " руб\n";

    return 0;
}