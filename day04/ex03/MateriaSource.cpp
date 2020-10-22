#include "MateriaSource.hpp"
# include <string>
#include <iostream>

MateriaSource::MateriaSource() {
	int i = 0;
	while (i < 4)
	{
		_materia[i] = nullptr;
		i++;
	}
}

MateriaSource::~MateriaSource() {
	int i = 0;
	while (i < 4)
	{
		if (_materia[i] != nullptr) {
			delete _materia[i];
			_materia[i] = nullptr;
		}
		i++;
	}
}

MateriaSource::MateriaSource(MateriaSource const &cp) { *this = cp; }

MateriaSource & MateriaSource::operator=(const MateriaSource &sec_arg) {
	if (this == &sec_arg)
		return (*this);
	this->~MateriaSource();
	int i = 0;
	while (i < 4)
	{
		if (sec_arg._materia[i] != nullptr)
		{
			_materia[i] = sec_arg._materia[i]->clone();
		}
		i++;
	}
	return (*this);
}

