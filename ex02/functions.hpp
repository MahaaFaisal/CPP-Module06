#ifndef __FUNCTIONS_HPP__
# define __FUNCTIONS_HPP__

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