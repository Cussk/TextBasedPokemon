#include <iostream>

enum class PokemonChoice
{
    InvalidChoice,
    Bulbasaur,
    Charmander,
    Squirtle,
    Pikachu
};

enum class PokemonType
{
    Fire,
    Electric,
    Water,
    Earth,
    Normal
};

void EnterName();
void ChoosePokemonText();
void ChoosePokemon(int player_choice);
void GetFirstPokemon(int player_choice);
void PostChoiceStory();
std::string PokemonChoiceToString(PokemonChoice choice);
std::string player_name;
PokemonChoice chosen_pokemon = PokemonChoice::InvalidChoice;
int first_pokemon_choice;

int main(int argc, char* argv[])
{
    EnterName();
    ChoosePokemonText();
    PostChoiceStory();
    
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
            chosen_pokemon = PokemonChoice::Bulbasaur;
            std::cout << "You chose Bulbasaur! A wise choice.\n";
            break;
        case 2:
            chosen_pokemon = PokemonChoice::Charmander;
            std::cout << "You chose Charmander! A fiery choice.\n";
            break;
        case 3:
            chosen_pokemon = PokemonChoice::Squirtle;
            std::cout << "You chose Squirtle! A cool choice.\n";
            break;
        default:
            chosen_pokemon = PokemonChoice::Pikachu;
            std::cout << "Invalid choice... ERROR, ERROR... Electrical overload... Take this rat...\n";
            std::cout << "You received Pikachu! Things are going to get charged up!\n";
            break;
    }
}

void PostChoiceStory()
{
    std::string pokemon_name = PokemonChoiceToString(chosen_pokemon);
    std::cout << "Congratulations!! You got your first Pokemon.\n";
    std::cout << "I look forward to hearing all the great things " << player_name << " and " << pokemon_name << " do in this world.\n";
}

std::string PokemonChoiceToString(PokemonChoice choice) {
    switch (choice) {
    case PokemonChoice::InvalidChoice: return "Invalid Choice";
    case PokemonChoice::Bulbasaur:     return "Bulbasaur";
    case PokemonChoice::Charmander:    return "Charmander";
    case PokemonChoice::Squirtle:      return "Squirtle";
    case PokemonChoice::Pikachu:       return "Pikachu";
    default:            return "Unknown";
    }
}
