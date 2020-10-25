#include "ConverClass.hpp"

void Num::setDispl(int num) {
	if ((num >= 0 && num <= 31) || num == 127)
		_char_displ = 1;
}