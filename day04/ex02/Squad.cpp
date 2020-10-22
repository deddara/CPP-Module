#include "Squad.hpp"
#include <string>

Squad::Squad() {
	_count = 0;
	_squad = new t_squad;
	_squad->next = nullptr;
	_squad->unit = nullptr;
	return ;
}

Squad::Squad(Squad const &cpy) {
	*this = cpy;
}

Squad::~Squad() { return; }

int Squad::getCount() const {
	return (_count);
}

Squad & Squad::operator=(const Squad &sec_arg) {
	if (this == &sec_arg)
		return (*this);
	t_squad *tmp = _squad;
	while (tmp != nullptr)
	{
		t_squad *tmp1 = tmp;
		if (tmp->unit != nullptr)
			delete tmp->unit;
		tmp = tmp->next;
		delete tmp1;
	}
	_count = 0;
	_squad = new t_squad;
	_squad->next = nullptr;
	_squad->unit = nullptr;
	int i = 0;
	while (i < sec_arg.getCount())
	{
		this->push(sec_arg.getUnit(i)->clone());
		i++;
	}
	return (*this);
}

ISpaceMarine *Squad::getUnit(int n) const {
	if (n + 1 > _count || n < 0 || _count == 0)
		return (nullptr);
	int i = 0;
	t_squad *tmp = _squad;
	while (i < n)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp->unit);
}

bool	Squad::checkExist(ISpaceMarine *unit) {
	t_squad *tmp = _squad;
	while (tmp != nullptr)
	{
		if (tmp->unit == unit)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int Squad::push(ISpaceMarine *unit) {
	if (unit == nullptr || this->checkExist(unit))
		return (_count);

	if (_count == 0)
	{
		_squad->unit = unit;
		_count++;
		return (_count);
	}
	t_squad *tmp = _squad;
	while (tmp->next != nullptr)
		tmp = tmp->next;
	t_squad *new_unit = new t_squad ;
	new_unit->unit = unit;
	new_unit->next = nullptr;
	tmp->next = new_unit;
	_count++;
	return (_count);
}