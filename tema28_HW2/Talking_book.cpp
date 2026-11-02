#include "Talking_book.h"

Talking_book::Talking_book()
{
	tapes = 0;
}

Talking_book::Talking_book(string author, string edition, Date publication_date,
	long isbn, string speaker, int duration, Date recording_date, int tapes)
	:Book(author,edition,publication_date,isbn),
	Voice_recording(speaker,duration,recording_date)
{
	this->tapes = tapes;
}

void Talking_book::showInfo()
{
	Book::showInfo();
	Voice_recording::showInfo();
	cout << "Tapes: " << tapes << endl;
}
