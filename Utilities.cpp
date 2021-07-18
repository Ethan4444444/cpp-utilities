#include "Utilities.h"

void util::println(short value) {
	std::cout << value << '\n';
}

void util::println(unsigned short value) {
	std::cout << value << '\n';
}

void util::println(int value) {
	std::cout << value << '\n';
}

void util::println(unsigned int value) {
	std::cout << value << '\n';
}

void util::println(long value) {
	std::cout << value << '\n';
}

void util::println(unsigned long value) {
	std::cout << value << '\n';
}

void util::println(long long value) {
	std::cout << value << '\n';
}

void util::println(unsigned long long value) {
	std::cout << value << '\n';
}

void util::println(float value) {
	std::cout << value << '\n';
}

void util::println(double value) {
	std::cout << value << '\n';
}

void util::println(long double value) {
	std::cout << value << '\n';
}

void util::println(bool value) {
	std::cout << value << '\n';
}

void util::println(const void* value) {
	std::cout << (char*)value << '\n';
}

void util::println(char value) {
	std::cout << value << '\n';
}

void util::println(unsigned char value) {
	std::cout << value << '\n';
}

// Any non-primitive input will be passed by reference
template<typename T>
void util::println(T& s) {
	std::cout << s << '\n';
}

bool util::stob(const std::string& s) {
	if(s == "true" || s == "false") {
		return s == "true";
	}
	else if (s == "1" || s == "0") {
		return s == "1";
	}
	else {
		throw std::domain_error("not a valid boolean value");
	}
}

bool util::equal(const float a, const float b, float eps) {
	return std::fabs(a - b) <= eps;
}

bool util::equal(const float a, const double b, float eps) {
	return std::fabs(a - b) <= eps;
}

bool util::equal(const float a, const long double b, float eps) {
	return std::fabs(a - b) <= eps;
}

bool util::equal(const double a, const double b, float eps) {
	return std::fabs(a - b) <= eps;
}

bool util::equal(const double a, const float b, float eps) {
	return std::fabs(a - b) <= eps;
}

bool util::equal(const double a, const long double b, float eps) {
	return std::fabs(a - b) <= eps;
}

bool util::equal(const long double a, const long double b, float eps) {
	return std::fabs(a - b) <= eps;
}

bool util::equal(const long double a, const double b, float eps) {
	return std::fabs(a - b) <= eps;
}

bool util::equal(const long double a, const float b, float eps) {
	return std::fabs(a - b) <= eps;
}
