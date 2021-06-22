/*
 * MyTime.h
 *
 *  Created on: 10.05.2021
 *      Author: kheri
 */

#ifndef MYTIME_H_
#define MYTIME_H_

#include <string>
#include <regex>

using namespace std;
namespace utils {
class MyTime {
private : string ss;
private : long y,m,d,h,mi,s;
string k(long,long);
public:
	MyTime();
	string asString();
	long getYear();
	long getMonth();
	long getDay();
	long getHour();
	long getMin();
	long getSec();

};

} /* namespace data */

#endif /* MYTIME_H_ */
