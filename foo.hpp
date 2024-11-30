#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> wynik;

    for(auto it=people.rbegin();it!=people.rend();++it)
    {
        it->birthday();

        if(it->isMonster())
        {
            wynik.push_back('n');
        }
        else
        {
            wynik.push_back('y');
        }
    }


    return wynik;
}
