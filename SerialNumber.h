/*
 * SerialNumber.h
 *
 *  Created on: 24.04.2021
 *      Author: kheri
 */

#ifndef SERIALNUMBER_H_
#define SERIALNUMBER_H_

#include <string>
#include <regex>
using namespace std;

namespace snr {

class SerialNumber {
private:
	string sn,key;
	int pos;
	long an;
public:
	int CheckKey;
	SerialNumber(string, string);
	SerialNumber();
	void setPosition(int);
	void setArticleNumber(long);
	void setToCheck(string[]);

	string getKey();
	string asString();
	int getPosition();
	long getArticleNumber();
	int length;
	string getCheckList();
};
}
#endif /* SERIALNUMBER_H_ */
