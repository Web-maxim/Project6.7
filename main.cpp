#include <iostream>
#include <vector>
#include <memory>

#include "Smartphone.h"
#include "Laptop.h"
#include "WashingMachine.h"
#include "Refrigerator.h"
#include "SmartFridge.h"

int main() {
    std::vector<std::unique_ptr<Electronics>> store;

    // Используем std::move при добавлении уникальных указателей
    store.push_back(std::move(std::make_unique<Smartphone>("Apple", "iPhone 14", 999.99, 20, 12)));
    store.push_back(std::move(std::make_unique<Laptop>("Dell", "XPS 15", 1499.99, 10, 15.6)));
    store.push_back(std::move(std::make_unique<WashingMachine>("LG", "TurboWash", 799.99, 2000, 8)));
    store.push_back(std::move(std::make_unique<Refrigerator>("Bosch", "CoolMax", 1200, 150, 350)));
    store.push_back(std::move(std::make_unique<SmartFridge>("Samsung", "SmartCool", 2500.00, 5, 100, 300, true)));

    std::cout << "Welcome to the Electronics Store!\n";
    std::cout << "Available products:\n";

    for (size_t i = 0; i < store.size(); ++i) {
        std::cout << i + 1 << ". ";
        store[i]->showInfo();
        std::cout << "--------------------\n";
    }

    int choice = 0;
    while (true) {
        std::cout << "Enter product number to view details (0 to exit): ";
        std::cin >> choice;
        if (choice == 0) break;
        if (choice < 1 || choice >(int)store.size()) {
            std::cout << "Invalid choice. Try again.\n";
            continue;
        }
        std::cout << "\nProduct details:\n";
        store[choice - 1]->showInfo();
        std::cout << "--------------------\n";
    }

    std::cout << "Thank you for visiting!\n";
    return 0;
}
