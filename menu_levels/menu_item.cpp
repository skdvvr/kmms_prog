#include "menu_item.hpp"

#include<cstddef>
#include "menu_function.hpp"

const Vskudaeva::MenuItem Vskudaeva::STUDY_SUMM = {
	"1-изучать предметы 1-го класса", Vskudaeva::study_summ, &Vskudaeva::STUDY
};
const Vskudaeva::MenuItem Vskudaeva::STUDY_SUBSTRACT = {
	"2-изучать предметы 2-го класса", Vskudaeva::study_substract, &Vskudaeva::STUDY
};
const Vskudaeva::MenuItem Vskudaeva::STUDY_MULTIPLY = {
	"3-изучать предметы 3-го класса", Vskudaeva::study_multiply, &Vskudaeva::STUDY
};
const Vskudaeva::MenuItem Vskudaeva::STUDY_DIVIDE = {
	"4-изучать предметы 4-го класса", Vskudaeva::study_divide, &Vskudaeva::STUDY
};
const Vskudaeva::MenuItem Vskudaeva::STUDY_GO_BACK = {
	"0-главное меню", Vskudaeva::study_go_back, &Vskudaeva::STUDY
};

namespace {
	const Vskudaeva::MenuItem* const study_children[] = {
		&Vskudaeva::STUDY_GO_BACK,
		&Vskudaeva::STUDY_SUMM,
		&Vskudaeva::STUDY_SUBSTRACT,
		&Vskudaeva::STUDY_MULTIPLY,
		&Vskudaeva::STUDY_DIVIDE,
		& Vskudaeva::FIRST_GRADE
	};
	const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const Vskudaeva::MenuItem Vskudaeva::STUDY = {
	"1-предметы какого класса школы вы хотите изучать?", Vskudaeva::show_menu, &Vskudaeva::MAIN, study_children,study_size
};
const Vskudaeva::MenuItem Vskudaeva::EXIT = {
	"0-я уже закончил школу и все знаю", Vskudaeva::exit, &Vskudaeva::MAIN
};

namespace {
	const Vskudaeva::MenuItem* const main_children[] = {
		&Vskudaeva::EXIT,
		&Vskudaeva::STUDY
	};
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const Vskudaeva::MenuItem Vskudaeva::MAIN = {
	nullptr, Vskudaeva::show_menu,nullptr, main_children, main_size
};







const Vskudaeva::MenuItem Vskudaeva::RUSSIAN_LANGUAGE = {
  "1-русский язык", Vskudaeva::study_russian_language, &Vskudaeva::FIRST_GRADE
};

const Vskudaeva::MenuItem Vskudaeva::RUSSIAN_LITERATURE = {
  "2-русская литература", Vskudaeva::study_russian_literature, &Vskudaeva::FIRST_GRADE
};

const Vskudaeva::MenuItem Vskudaeva::MATHEMATICS = {
  "3-математика", Vskudaeva::study_mathematics, &Vskudaeva::FIRST_GRADE
};

const Vskudaeva::MenuItem Vskudaeva::PHYSICAL_EDUCATION = {
  "4-я люблю физкультуру", Vskudaeva::study_physical_education, &Vskudaeva::FIRST_GRADE
};

const Vskudaeva::MenuItem Vskudaeva::FIRST_GRADE_GO_BACK = {
  "0-выйти в предыдущее меню", Vskudaeva::first_grade_go_back, &Vskudaeva::STUDY
};

namespace {
	const Vskudaeva::MenuItem* const first_grade_children[] = {
	  &Vskudaeva::FIRST_GRADE_GO_BACK,
	  &Vskudaeva::RUSSIAN_LANGUAGE,
	  &Vskudaeva::RUSSIAN_LITERATURE,
	  &Vskudaeva::MATHEMATICS,
	  &Vskudaeva::PHYSICAL_EDUCATION
	};
	const int first_grade_size = sizeof(first_grade_children) / sizeof(first_grade_children[0]);
}

const Vskudaeva::MenuItem Vskudaeva::FIRST_GRADE = {
  "1-выберите предмет для изучения в 1-м классе:", Vskudaeva::show_menu, &Vskudaeva::STUDY, first_grade_children, first_grade_size
};

