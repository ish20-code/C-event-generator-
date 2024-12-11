#include <iostream> 
#include <ctime>

int main(){
    srand(time(NULL));
    int eventnum = (rand() % 5) + 1;

    switch(eventnum){
        case 1:
        std::cout << "There is a monster in front of you";
        break;

        case 2:
        std::cout << "It is raining, seek shelter gamer!";
        break;

        case 3:
        std::cout << "You have cleared all the soldiers, stand proud, you were strong";
        break;

        case 4:
        std::cout << "You have died..";
        break;

        case 5:
        std::cout << " You are low soldier!!";
        break; 
    }
}