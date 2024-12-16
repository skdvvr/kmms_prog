#include<clocale>
#include<iostream>

#include "menu.hpp"
#include "menu_function.hpp"
#include "menu_item.hpp"

int main() {
	std::setlocale(LC_ALL, "");

	const Vskudaeva::MenuItem* current = &Vskudaeva::MAIN;
	do {
		current = current->func(current);
	} while (true);
	return 0;
}
