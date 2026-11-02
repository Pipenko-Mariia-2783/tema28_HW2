#pragma once
#include "Book.h"
#include  "Voice_recording.h"
class Talking_book :
    public Book,
    public Voice_recording
{
protected:
    int tapes;
public:
    Talking_book();
    Talking_book(string author, string edition, Date publication_date, long isbn,
        string speaker, int duration, Date recording_date,int tapes);
    void showInfo();
};

