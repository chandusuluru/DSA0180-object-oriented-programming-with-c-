#include <iostream>
#include <string>

class Book {
public:

    Book(const std::string& title, const std::string& author) : title(title), author(author) {
        std::cout << "Constructor called for the book: " << title << std::endl;
    }

    ~Book() {
        std::cout << "Destructor called for the book: " << title << std::endl;
    }


    void displayInfo() {
        std::cout << "Title: " << title << ", Author: " << author << std::endl;
    }

private:
    std::string title;
    std::string author;
};

int main() {

    Book book1("The Catcher in the Rye", "J.D. Salinger");
    book1.displayInfo();

    return 0;
}

