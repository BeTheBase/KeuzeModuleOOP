
#include <iostream>

class Book
{
public:
	std::string name;
	Book() { this->name = "noname"; };
	Book(std::string name) { this->name; std::cout << "ctor" << this << "" << name << std::endl; }
	Book(const Book& other) { this->name = other.name; }
	virtual~Book() { std::cout << "dtor" << this << "" << name << std::endl; };
};

int main()
{
	std::unique_ptr<Book> ubook = std::make_unique<Book>();
	std::shared_ptr<Book> sbook = std::make_shared<Book>("first");
	std::shared_ptr<Book> sbook2 = sbook;
	std::cout << "ubook" << sbook << std::endl << "usecoutn:" << sbook.use_count() << std::endl;


}

