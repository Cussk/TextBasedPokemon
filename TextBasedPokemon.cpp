#include <iostream>

void EnterName();
void ChoosePokemonText();
void ChoosePokemon(int player_choice);
void GetFirstPokemon(int player_choice);
std::string player_name;
int first_pokemon_choice;

int main(int argc, char* argv[])
{
    EnterName();
    ChoosePokemonText();
    
    return 0;
}

void EnterName()
{
    std::cout << "Welcome to the Pokemon System!\n" << "You must register to be eligible for Pokemon assignment.Kyl\n";
    std::cout << "Please enter your name here: ";
    std:: cin >> player_name;
    std::cout << "Thank you " << player_name << ", you are now able to choose you starting Pokemon!\n";
}

void ChoosePokemon()
{
    std::cout << "Please enter a number 1-3 to choose your Pokemon: ";
    std::cin >> first_pokemon_choice;
}

void ChoosePokemonText()
{
    std::cout << "Now that you are registered you must choose your first Pokemon\n";
    std::cout << "You can choose between 3 starters!\n";
    std::cout << "First: Bulbasaur the grass Pokemon, like nature balanced and versatile.\n";
    std::cout << "Second: Charmander the fire Pokemon, explosive power but easily damaged.\n";
    std::cout << "Third: Squirtle the water Pokemon, a tough shell but lacking in offensive.\n";

    ChoosePokemon();
    GetFirstPokemon(first_pokemon_choice);
}

void GetFirstPokemon(int player_choice)
{
    switch (player_choice)
    {
        case 1:
            std::cout << "You chose Bulbasaur! A wise choice.\n";
            break;
        case 2:
            std::cout << "You chose Charmander! A fiery choice.\n";
            break;
        case 3:
            std::cout << "You chose Squirtle! A cool choice.\n";
            break;
        default:
            std::cout << "Please enter a valid choice.\n";
            ChoosePokemon();
            break;
    }

}
