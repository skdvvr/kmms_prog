﻿#pragma once

#include "menu.hpp"

namespace Vskudaeva {
	const MenuItem* show_menu(const MenuItem* current);

	const MenuItem* exit(const MenuItem* current);
	

	const MenuItem* study_go_back(const MenuItem* current);
	const MenuItem* study_summ(const MenuItem* current);
	const MenuItem* study_substract(const MenuItem* current);
	const MenuItem* study_multiply(const MenuItem* current);
	const MenuItem* study_divide(const MenuItem* current);

	const MenuItem* first_grade_subjects(const MenuItem* current);

}