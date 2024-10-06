#ifndef __UTILS_HPP__
# define __UTILS_HPP__

#include <iostream>
#include <string>
#include <stdexcept>

class Utils 
{
    protected:
        ~Utils();
    public:
        Utils();
        Utils(Utils &other);
        Utils &operator=(Utils rhs);

        static void printMsg(const std::string& msg, const std::string& color);
        static void printErr(const std::string& msg);
};

#endif
