#pragma once
#include <string>

class Book {
public:
    Book(std::string title, std::string author, int year, int pages);

    std::string title() const;
    std::string author() const;
    int year() const;
    int pages() const;

    bool isOlderThan(int current_year) const;

private:
    std::string title_;
    std::string author_;
    int year_ = 0;
    int pages_ = 0;
};