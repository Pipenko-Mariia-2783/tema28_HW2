#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;
class Book
{
protected:
	string author;
	string edition;
	Date publication_date;
	long isbn;
public:
	Book();
	Book(string author,string edition,Date publication_date,long isbn);

	void showInfo()const;
};

