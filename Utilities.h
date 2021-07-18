#include <string>
#include <iostream>
#include <stdexcept>
#include <cmath>

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

	// TODO: change default value of eps to a machine-specific value
	bool equal(const float a, const float b, float eps = 0.001);
	bool equal(const float a, const double b, float eps = 0.001);
	bool equal(const float a, const long double b, float eps = 0.001);
	bool equal(const double a, const double b, float eps = 0.001);
	bool equal(const double a, const float b, float eps = 0.001);
	bool equal(const double a, const long double b, float eps = 0.001);
	bool equal(const long double a, const long double b, float eps = 0.001);
	bool equal(const long double a, const double b, float eps = 0.001);
	bool equal(const long double a, const float b, float eps = 0.001);
}