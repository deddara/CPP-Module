#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

void myTest()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("lol");
	std::cout << tmp << std::endl;
	tmp = src->createMateria("cure");
	std::cout << tmp->getType() << std::endl;
	me->equip(nullptr);
	me->equip(tmp);
	me->use(0, *me);
	std::cout << "------" << std::endl;
	me->unequip(0);
	me->use(0, *me);
	me->use(5, *me);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->use(0, *me);
	delete src;
	delete me;
}

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
//	myTest();
	return 0;
}