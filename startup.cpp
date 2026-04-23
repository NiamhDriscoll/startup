#include <iostream>
#include <cstdlib>

int main (){
    std::cout << "Welcome " << '\n';
    std::cout << "Command options:" << '\n';
    std::cout << "Press 1: enter graphical display" << '\n';
    std::cout << "Press 2: enter btop" << '\n';
    std::cout << "Press 3: exit to command line" << '\n';
    std::cout << "Press 4: shutdown" << '\n';
    int input;
    std::cout << "Input: ";

    std::cin >> input;

    if (input == 1){
        std::system("startx");
        return(0);
        
    }
    if (input == 2){
        std::system("btop");
        return(0);
    }
    if (input == 3){
        return(0);
    }
    if (input == 4){
        std::system("shutdown now");
        return(0);
    }


    
}