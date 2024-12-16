#include "menu_function.hpp"

#include"cstdlib"
#include<iostream>

const Vskudaeva::MenuItem* Vskudaeva::show_menu(const MenuItem* current) {
	std::cout << "Обучайка приветствует тебя!" << std::endl;
	for (int i = 1; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;
	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "Обучайка > ";

	int user_input;
	std::cin >> user_input;
	std::cout >> std::endl;

	if (user_input >= 0 && user_input < current->children_count) {
		return current->children[user_input];
	}
	else {
		std::cout << "wrong, try again" << std::endl;
		return current;
	}
	//return current->children[user_input];
}

const Vskudaeva::MenuItem* Vskudaeva::exit(const MenuItem* current) {
	std::exit(0);
}

const Vskudaeva::MenuItem* Vskudaeva::study_summ(const MenuItem* current) {
	//TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}
const Vskudaeva::MenuItem* Vskudaeva::study_substract(const MenuItem* current) {
	//TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}
const Vskudaeva::MenuItem* Vskudaeva::study_multiply(const MenuItem* current) {
	//TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}
const Vskudaeva::MenuItem* Vskudaeva::study_divide(const MenuItem* current) {
	//TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}
const Vskudaeva::MenuItem* Vskudaeva::study_go_back(const MenuItem* current) {
	//TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
}

const Vskudaeva::MenuItem* Vskudaeva::first_grade_subjects(const MenuItem* current) {
	std::cout << "Выберите предмет для изучения в 1-м классе:" << std::endl;
	return current->parent;
}