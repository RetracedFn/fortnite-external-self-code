#include <iostream>
#include "driver.h"
int main()
{
	
	if (!mem::find_driver()) {
		std::cout << "\n Driver isn't loaded!\n";
	}
	mem::process_id = mem::find_process(L"FortniteClient-Win64-Shipping.exe");

	virtualaddy = mem::find_image();

	std::cout << "File Explorer Base Address -> " << virtualaddy << "\n";
}