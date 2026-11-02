#include "Voice_recording.h"

Voice_recording::Voice_recording()
{
	speaker = "undefined";
	duration = 0;
	recording_date = Date();
}

Voice_recording::Voice_recording(string speaker, int duration, Date recording_date)
{
	this->speaker = speaker;
	this->duration = duration;
	this->recording_date = recording_date;
}

void Voice_recording::showInfo() const
{
	cout << "Speaker: " << speaker << endl;
	cout << "Duration: " << duration << endl;
	cout << "Recording date: " << recording_date << endl;
}
