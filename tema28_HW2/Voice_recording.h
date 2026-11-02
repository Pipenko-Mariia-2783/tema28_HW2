#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;
class Voice_recording
{
protected:
	string speaker;
	int duration;
	Date recording_date;
public:
	Voice_recording();
	Voice_recording(string speaker,int duration,Date recording_date);

	void showInfo()const;
};

