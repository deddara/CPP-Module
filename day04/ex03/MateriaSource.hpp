#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include "IMateriaSource.hpp"
# include "AMateria.hpp"


class MateriaSource : public IMateriaSource{

private:
	AMateria *_materia[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource const &);
	MateriaSource & operator=(MateriaSource const &);
	virtual ~MateriaSource();

	virtual void learnMateria(AMateria *);
	virtual AMateria* createMateria(std::string const & type);
};

#endif