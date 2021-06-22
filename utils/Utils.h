/*
 * Utils.h
 *
 *  Created on: 13.05.2021
 *      Author: kheri
 */

#ifndef SRC_UTILS_H_
#define SRC_UTILS_H_

#include <string>
#include <regex>

using namespace std;
namespace utils {

class Utils {
public:
	static bool isNumeric(string);
	static bool isLetters(string);
};

} /* namespace utils */

#endif /* SRC_UTILS_H_ */
