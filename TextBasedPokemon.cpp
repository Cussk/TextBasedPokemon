#include <iostream>

void EnterName();

int main(int argc, char* argv[])
{
    EnterName();
    
    return 0;
}

void EnterName()
{
    std::string player_name;
    std::cout << "Welcome to the Pokemon System!\n" << "You must register to be eligible for Pokemon assignment.Kyl\n";
    std::cout << "Please enter your name here: \n";
    std:: cin >> player_name;
    std::cout << "Thank you " << player_name << ", you are now able to choose you starting Pokemon!\n";
}
