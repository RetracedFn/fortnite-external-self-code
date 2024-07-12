// testing self code ext.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "driver.h"
int main()
{
	//SetConsoleTitleA("Payson IOCTL - github.com/paysonism - Usermode Example");
	if (!mem::find_driver()) {
		system("color 2");
		std::cout << "\n Driver isn't loaded!\n";
	}
	mem::process_id = mem::find_process(L"FortniteClient-Win64-Shipping.exe");

	virtualaddy = mem::find_image();

	std::cout << "File Explorer Base Address -> " << virtualaddy << "\n";
}