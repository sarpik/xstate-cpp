#include "stringUtils.h"

#include <vector>
#include <string>
#include <sstream>

/**
 * split a single string into an array of string tokens
 * opposite of `joinStr`
 *
 * TODO format
 */
std::vector<std::string> splitStr(std::string str, const char delim) {
    std::string buf;                 // Have a buffer string
    std::stringstream ss(str);       // Insert the string into a stream

    std::vector<std::string> tokens; // Create vector to hold our words

    while (getline(ss, buf, delim)) {
        tokens.push_back(buf);
	}

	return tokens;
}
