#ifndef __SNAKE_HPP__
#define __SNAKE_HPP__

#include <vector>

#include "IMonster.hpp"

class Snake : public IMonster
{
    
    
    public:
    Snake(int height, int width);
    ~Snake();

    enum Position
    {
        ROW,
        COL
    };

    bool MoveUp();
    bool MoveDown();
    bool MoveLeft();
    bool MoveRight();
    void EatAndGrow();
    inline const std::vector<std::pair<int, int>>& GetMonsterBody() const;
    inline const std::pair<int, int> GetHead() const;

    private:
    int m_body_links;
    int m_rows;
    int m_cols;
    std::pair<int, int> m_head; //@
    std::vector<std::pair<int, int>> m_snake_body;
    bool SearchValue(Position p, int value);
    void AdjustSnake();
   
};

const std::vector<std::pair<int, int>>& Snake::GetMonsterBody() const
{
    return m_snake_body;
}

const std::pair<int, int> Snake::GetHead() const
{
    return m_head;
}

#endif  //__SNAKE_HPP__