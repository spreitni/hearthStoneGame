#include "Card.hpp"

int main(int argc, char** argv)
{
    Card* Yoshi = new Card("Yoshi", 5, 4, 6);
    Card* Kirby = new Card("Kirby", 5, 5, 6);
    Card* Cliffard = new Card("Cliffard", 8, 8, 8);
    Card* YogiBear = new Card("Yogi Bear", 8, 10, 6);
    
    Yoshi->display();
    Kirby->display();
    Cliffard->display();
    YogiBear->display();
}