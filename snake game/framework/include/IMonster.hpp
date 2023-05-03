#ifndef __IMONSTER_HPP__
#define __IMONSTER_HPP__

#include <vector>

class IMonster
{
    public:
    virtual const std::vector<std::vector<char>>& GetMonsterBody() const = 0;
    virtual const std::pair<int, int> GetHead() const = 0;
    virtual bool MoveUp() = 0;
    virtual bool MoveDown() = 0;
    virtual bool MoveLeft() = 0;
    virtual bool MoveRight() = 0;
    virtual void EatAndGrow() = 0;
};


#endif  //__IMONSTER_HPP__