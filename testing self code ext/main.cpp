#include <iostream>
#include "driver.h"

#include <dwmapi.h>
#include <vector>
#include "xor.hpp"
#include "xstring"
//uint64_t base_address;
HWND hwnd = NULL;
DWORD processID;
int main()
{
	while (hwnd == NULL)
	{
		XorS(wind, "Fortnite");
		hwnd = FindWindowA(0, wind.decrypt());
		Sleep(100);
	}

	
	if (!mem::find_driver()) {
		std::cout << "\n Driver isn't loaded!\n";
	}
	mem::process_id = mem::find_process(L"FortniteClient-Win64-Shipping.exe");

	virtualaddy = mem::find_image();

	std::cout << "File Explorer Base Address -> " << virtualaddy << "\n";
}
