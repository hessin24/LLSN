/*
 * ArraySerialNumber.h
 *
 *  Created on: 24.04.2021
 *      Author: Kheri
 */

#ifndef ARRAYSERIALNUMBER_H_
#define ARRAYSERIALNUMBER_H_

#include <iostream>
#include <map>
#include "SerialNumber.h"
#include "SNExplorer.h"
using namespace std;
namespace snr {

class ArraySerialNumber {
private: SerialNumber NUL(string);
public:
	ArraySerialNumber();
	std::map<const string, const SerialNumber> list;
	int getCount();
	void addSerialNumber(SerialNumber);
	void addSerialNumber(SerialNumber, SerialNumber);
	void removeSerialNumber(SerialNumber);
	void removeSerialNumberRange(SerialNumber[]);
	void editSerialNumber(SerialNumber);
	void replaceSerialNumber(SerialNumber, SerialNumber);
	bool istExistsSerialNumber(SerialNumber);
	bool istExistsSerialNumber(string key);
	SerialNumber getSerialNumber(int i);
	SerialNumber getSerialNumberRange(int, int);
	SerialNumber getSerialNumber(string);
	SerialNumber getSerialNumber(SerialNumber);
	SerialNumber getSerialNumber();

};

} /* namespace utils */

#endif /* ARRAYSERIALNUMBER_H_ */
