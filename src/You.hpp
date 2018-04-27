// Author: You!

#ifndef YOU_HPP
#define YOU_HPP

#include "Foo.hpp"
#include <iostream>

std::ostream& operator<<(std::ostream& os, const Foo &foo)
{
    os << foo.getBar();
    return os;
}

#endif // YOU_HPP
