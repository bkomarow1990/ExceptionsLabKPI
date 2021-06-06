#pragma once
#include <iostream>
using namespace std;
class TimeWorker
{
public:
	void setHours(const size_t& hours);
	void setMinutes(const size_t& minutes);
	void setSeconds(const size_t& seconds);
	void printStandart()const; // Друк по шаблону 1
	void printAdvanced()const;// Друк по шаблону 2
	const size_t& getHours()const;
	const size_t& getMinutes()const;
	const size_t& getSeconds()const;
	TimeWorker(const size_t& hours, const size_t& minutes, const size_t& seconds)
	{
		setHours(hours);
		setMinutes(minutes);
		setSeconds(seconds);
	}
	TimeWorker()
	:hours(0),minutes(0),seconds(0){
		
	}
private:
	size_t hours;
	size_t minutes;
	size_t seconds;
};

