#include <iostream>
#include <vector>
#include <Windows.h>
#include "Book.h"


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Варіант 1: Каталог бібліотеки\n\n";

    std::vector<Book> books = {
        {"Кобзар", "Тарас Шевченко", 1840, 115},
        {"Тіні забутих предків", "Михайло Коцюбинський", 1911, 180},
        {"Місто", "Валер'ян Підмогильний", 1928, 290},
        {"Залишенець. Чорний Ворон", "Василь Шкляр", 2009, 380}
    };

    for (const auto& book : books) {
        std::cout << "Назва: " << book.title()
            << " | Автор: " << book.author()
            << " | Рік: " << book.year()
            << " | Сторінок: " << book.pages()
            << " | Старіша за 50 років: " << (book.isOlderThan(2026) ? "Так" : "Ні")
            << '\n';
    }

    std::cin.get();
    return 0;
}