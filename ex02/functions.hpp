#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

# include <ctime>
# include <cstdlib>
# include <iostream>
# include <exception>

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif