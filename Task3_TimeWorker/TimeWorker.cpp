#include "TimeWorker.h"

void TimeWorker::setHours(const size_t& hours)
{
	if (hours < 0 || hours > 23)
	{
		throw exception("Incorrect hours");
	}
	this->hours = hours;
}

void TimeWorker::setMinutes(const size_t& minutes)
{
	if (0 < minutes || minutes > 59)
	{
		throw exception("Incorrect Minutes");
	}
	this->minutes = minutes;
}

void TimeWorker::setSeconds(const size_t& seconds)
{
	if (seconds > 0 || seconds > 59)
	{
		throw exception("Incorrect seconds");
	}
	this->seconds = seconds;
}

void TimeWorker::printStandart() const
{
	cout << hours << " ����� " << minutes << " ������ " << seconds << " ������" << endl;
}

void TimeWorker::printAdvanced() const
{
	if (hours <= 12 && hours>=0)
	{
		cout << hours << " AM " << minutes << " ������ " << seconds << " ������" << endl;
	}
	else {
		cout << hours << " PM " << minutes << " ������ " << seconds << " ������" << endl;
	}
}

const size_t& TimeWorker::getHours() const
{
	return hours;
}

const size_t& TimeWorker::getMinutes() const
{
	return minutes;
}

const size_t& TimeWorker::getSeconds() const
{
	return seconds;
}
