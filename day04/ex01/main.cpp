#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
void myTest()
{
	Character* me = new Character("Vault Boy");
	Enemy* 		rad = new RadScorpion();
	Enemy*		super = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	std::cout << "*IF NO WEAPON* " <<  *me;
	std::cout << "*TRYING ATTACK WITHOUT WEAPON* " << std::endl;
	me->attack(rad);
	me->equip(pf);
	std::cout << *me << "*RECOVERING WITH FULL AP* ";
	me->recoverAP();
	std::cout << *me;
	me->attack(super);
	std::cout << *me;
	me->recoverAP();
	std::cout << "SUPER HP = " <<  super->getHP() << std::endl;
	std::cout << *me;
	me->attack(rad);
	me->equip(pr);
	me->attack(super);
	me->equip(pf);
	me->attack(super);
	me->attack(super);
	me->attack(super);
	std::cout << *me;
	me->attack(rad);
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->attack(rad);
	return ;
}


int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
//	myTest();
	return 0;
}