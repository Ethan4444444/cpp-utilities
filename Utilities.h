#include <string>
#include <iostream>
#include <stdexcept>

namespace util
{
	void println(char value);
	void println(unsigned char value);

	void println(short value);
	void println(unsigned short value);

	void println(int value);
	void println(unsigned int value);

	void println(long value);
	void println(unsigned long value);

	void println(long long value);
	void println(unsigned long long value);

	void println(float value);
	void println(double value);
	void println(long double value);

	void println(bool value);

	void println(const void* value);

	// Any non-primitive input will be passed by reference
	template<typename T>
	void println(T& s);

	bool stob(const std::string& s);
}