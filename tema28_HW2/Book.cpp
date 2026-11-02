#include "Book.h"

Book::Book()
{
	author = "undefined";
	edition = "undefined";
	publication_date = Date();
	isbn = 0;
}

Book::Book(string author, string edition, Date publication_date, long isbn)
{
	this->author = author;
	this->edition = edition;
	this->publication_date = publication_date;
	this->isbn = isbn;
}

void Book::showInfo() const
{
	cout << "Author: " << author << endl;
	cout << "Edition: " << edition << endl;
	cout << "Publication date: " << publication_date << endl;
	cout << "Isbn: " << isbn << endl;
}
