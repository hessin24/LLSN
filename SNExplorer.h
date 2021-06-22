/*
 * SNExplorer.h
 *
 *  Created on: 03.05.2021
 *      Author: kheri
 */

#ifndef SNEXPLORER_H_
#define SNEXPLORER_H_

#include "SerialNumber.h"
#include "utils/Utils.h"

namespace snr {
class SNExplorer {
	private: string sn;

public:
	SNExplorer(SerialNumber sn);
	string last, first;
	string getFirst();
	string second();
	string getLast();
	bool isNumeric();
	bool isLetters();
	long length();
	bool startWith(string);
	bool isContains(string str);
};

} /* namespace utils */

#endif /* SNEXPLORER_H_ */
