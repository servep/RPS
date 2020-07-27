#include <iostream>
#include <random>

int main()
{
    int computerNum;
   
    std::string user;
    std::string computer;

    std::random_device rd;
    computerNum = rd() % 3 + 1;

    if (computerNum == 1)
    {
        computer = "rock";
    }

    else if (computerNum == 2)
    {
        computer = "paper";
    }
    
    else if (computerNum == 3)
    {
        computer = "scissors";
    }

    std::cout << "Welcome to the game of Rock Paper Scissors! \nChoose which you want\n";
    std::getline(std::cin, user);
    
    while (user != "rock" && user != "paper" && user != "scissors")
    {
        std::cout << "Please select rock, paper, or scissors!\n";
        std::getline(std::cin, user);
    }
    
    if (user == "rock" && computer == "paper")
    {
        std::cout << "You have chosen " << user << "!\n";
        std::cout << "The computer has chosen " << computer << "\n";
        std::cout << "The computer won!\n";
    }
            
    else if (user == "rock" && computer == "scissors")
    {
        std::cout << "You have chosen " << user << "!\n";
        std::cout << "The computer has chosen " << computer << "\n";
        std::cout << "You won!\n";
    }

    else if (user == "paper" && computer == "rock")
    {
        std::cout << "You have chosen " << user << "!\n";
        std::cout << "The computer has chosen " << computer << "\n";
        std::cout << "You won!\n";
    }
            
    else if (user == "scissors" && computer == "scissors")
    {
        std::cout << "You have chosen " << user << "!\n";
        std::cout << "The computer has chosen " << computer << "\n";
        std::cout << "Tie!\n";
    }
            
    else if (user == "paper" && computer == "scissors")
    {
        std::cout << "You have chosen " << user << "!\n";
        std::cout << "The computer has chosen " << computer << "\n";
        std::cout << "The computer won!\n";
    }

    else if (user == "scissors" && computer == "rock")
    {
        std::cout << "You have chosen " << user << "!\n";
        std::cout << "The computer has chosen " << computer << "\n";
        std::cout << "The computer won!\n";
    }
    
    else if (user == "rock" && computer == "rock")
    {
        std::cout << "You have chosen " << user << "!\n";
        std::cout << "The computer has chosen " << computer << "\n";
        std::cout << "Tie!\n";
    }

    else if (user == "scissors" && computer == "paper")
    {
        std::cout << "You have chosen " << user << "!\n";
        std::cout << "The computer has chosen " << computer << "\n";
        std::cout << "You won!\n";
    }
        
    else if (user == "paper" && computer == "paper")
    {
        std::cout << "You have chosen " << user << "!\n";
        std::cout << "The computer has chosen " << computer << "\n";
        std::cout << "Tie!\n";
    }

return 0;

}