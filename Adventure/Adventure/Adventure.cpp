#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::cout << "You are a chicken crossing the road. Will you run, walk, or stand still?\n";
    std::cout << "1. Run\n";
    std::cout << "2. Walk\n";
    std::cout << "3. Stand still\n";

    int cho;
    bool safe = false;
    srand(time(0));
    int ran;

    while (!safe) {
        std::cin >> cho;
        ran = std::rand() % 2 + 1;

        if (cho == 1) {
            std::cout << "You ran across the road and made it safely to the other side.\n";
            safe = true;
        }
        else if (cho == 2) {
            if (ran == 1) {
                std::cout << "You walked across the road and made it safely to the other side.\n";
                safe = true;
            }
            else {
                std::cout << "You walked across the road and got hit by a car. Game over.\n";
                return 0;
            }
        }
        else if (cho == 3) {
            std::cout << "You stand still on the road, waiting for the right moment...\n";
            std::cout << "A car approaches quickly! What will you do?\n";
            std::cout << "1. Stay still and hope it stops\n";
            std::cout << "2. Run for the other side\n";
            std::cout << "3. Walk slowly and cautiously\n";

            int cho2;
            std::cin >> cho2;

            if (cho2 == 1) {
                std::cout << "The car swerves at the last moment and narrowly avoids hitting you! You stay alive, but scared.\n";
                safe = true;
            }
            else if (cho2 == 2) {
                std::cout << "You run across the road in time and make it safely to the other side.\n";
                safe = true;
            }
            else if (cho2 == 3) {
                std::cout << "You walk slowly and cautiously, but the car doesn't slow down and hits you. Game over.\n";
                return 0;
            }
            else {
                std::cout << "Invalid choice. The car doesn't have time to react, and you get hit. Game over.\n";
                return 0;
            }
        }
        else {
            std::cout << "Invalid choice. Please select a valid option.\n";
        }
    }

    std::cout << "     \\  \n";
    std::cout << "     (o> \n";
    std::cout << "  \\_//)\n";
    std::cout << "   \\_/)\n";
    std::cout << "    _|_ \n";

    std::cout << "\nNow, you see a farm to your left and a forest to your right. Where do you go?\n";
    std::cout << "1. Farm\n";
    std::cout << "2. Forest\n";
    std::cout << "3. Stay where you are\n";

    int cho3;
    std::cin >> cho3;

    if (cho3 == 1) {
        std::cout << "You enter the farm and see a farmer. He notices you and...\n";
        std::cout << "What do you do?\n";
        std::cout << "1. Ask for food\n";
        std::cout << "2. Try to escape\n";
        std::cout << "3. Make friends with the farmer\n";

        int cho4;
        std::cin >> cho4;

        if (cho4 == 1) {
            std::cout << "The farmer gives you some corn. You enjoy a nice meal and stay on the farm.\n";
        }
        else if (cho4 == 2) {
            std::cout << "You try to escape, but the farmer catches you. Game over.\n";
        }
        else if (cho4 == 3) {
            std::cout << "You make friends with the farmer, and he lets you roam the farm freely. A peaceful life!\n";
        }
        else {
            std::cout << "Invalid choice. The farmer looks confused and chases you off. Game over.\n";
        }
    }
    else if (cho3 == 2) {
        std::cout << "You enter the dark forest. Suddenly, a fox appears!\n";

        std::cout << "What do you do?\n";
        std::cout << "1. Try to fight the fox\n";
        std::cout << "2. Run away\n";
        std::cout << "3. Try to make peace with the fox\n";

        int cho5;
        std::cin >> cho5;

        if (cho5 == 1) {
            std::cout << "You try to fight the fox, but it's much stronger than you. Game over.\n";
        }
        else if (cho5 == 2) {
            std::cout << "You manage to run away and find a safe spot in the trees.\n";
        }
        else if (cho5 == 3) {
            std::cout << "The fox listens to your plea and decides to let you go. You walk away safely.\n";
        }
        else {
            std::cout << "Invalid choice. The fox catches you while you're distracted. Game over.\n";
        }
    }
    else if (cho3 == 3) {
        std::cout << "You decide to stay where you are. But soon, a thunderstorm starts, and you're soaked.\n";
        std::cout << "What do you do?\n";
        std::cout << "1. Seek shelter under a tree\n";
        std::cout << "2. Wait it out and endure the rain\n";
        std::cout << "3. Try to cross the road again\n";

        int cho6;
        std::cin >> cho6;

        if (cho6 == 1) {
            std::cout << "You find a nice tree and stay dry until the storm passes. You're safe!\n";
        }
        else if (cho6 == 2) {
            std::cout << "You endure the rain and become soggy, but you survive. You're not the happiest chicken, though.\n";
        }
        else if (cho6 == 3) {
            std::cout << "You try to cross the road again, but the rain makes it slippery, and you get hit by a car. Game over.\n";
        }
        else {
            std::cout << "Invalid choice. You stay confused in the rain until the storm worsens. Game over.\n";
        }
    }
    else {
        std::cout << "Invalid choice. You wander aimlessly and get lost. Game over.\n";
    }

    return 0;
}
