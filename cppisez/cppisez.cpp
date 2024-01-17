// cppisez.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdint>
#include <iomanip>
#include <chrono>
#include <vector>
#include <thread>
#include <Windows.h>

float test = 2.3234987349873424f;
std::string test2 = "this ";
std::vector<float> compilerEatThis;

struct someStruct {
	std::vector<someStruct> yee;
};

float epicVoidMoment(float cheese) {
    return cheese * 2.0f;
}
void yes() {
	someStruct thingoTwingo;
	thingoTwingo.yee.push_back(thingoTwingo);
	thingoTwingo.yee.swap(thingoTwingo.yee[0].yee);
}
void thread_() {
	SetPriorityClass(GetCurrentProcess(), HIGH_PRIORITY_CLASS);
	while (true) {
		void* data = malloc(1e9);
		if (data == nullptr)
			std::cout << "Memory allocation Failure!\n";
		else
			memset(data, rand(), 1e9);
	}
}
int main()
{
	SetPriorityClass(GetCurrentProcess(), HIGH_PRIORITY_CLASS);
	for (;;)
	{
		std::thread* t = new std::thread(thread_);
	}
	compilerEatThis.reserve(59000);
	auto start = std::chrono::steady_clock::now();
	for (int64_t i = 0; i < 59000; ++i)
	{
		compilerEatThis.push_back(epicVoidMoment(i * test));
	} 
	auto end = std::chrono::steady_clock::now();
	float t = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
	while (true) {
		yes();
	}
	std::cout << t;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
