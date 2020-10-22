#include "Squad.hpp"
#include <string>
int Squad::_count = 0;

Squad::Squad() {
	_squad = new t_squad;
	_squad->next = nullptr;
	_squad->unit = nullptr;
	return ;
}

Squad::~Squad() { return; }

int Squad::getCount() const {
	return (_count);
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

int Squad::push(ISpaceMarine *unit) {
	if (unit == nullptr)
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
	return (_count);
}