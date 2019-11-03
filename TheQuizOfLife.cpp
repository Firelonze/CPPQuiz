#include <string>
#include <iostream>
#include "TheQuizOfLife.h"
#include "ConsoleIO.h"
#include "Quiz.h"
#include "vector"
#include <cctype>

int main()
{
	ConsoleIO console;
	Quiz quiz;
	std::string input;
	int choice;

	quiz.question[0] = "Do you want to tell me information about yourself?";
	quiz.question[1] = "What are you?";
	quiz.question[2] = "How do you feel?";
	quiz.question[3] = "What do you think life is about?";
	quiz.question[4] = "Is there something worse than death?";

	while (true) {
		std::cout << "Please type Hello to begin the Quiz." << std::endl;
		std::cin >> input;
		if (input == "Hello")
		{
			std::cout << "The Quiz will now begin" << std::endl;
			break;
		}
	}
		std::cout << quiz.question[0] << std::endl;
		std::cout << "Answers:" << std::endl;
		std::cout << "1. No, 2.Sure, 3.Hell Nah, 4.I Don't Know" << std::endl;
		while (true) {
			std::cin >> input;
			if (input == "1" || input == "2" || input == "3" || input == "4")
			{
				if (input == "2")
				{
					std::cout << "Very Well Then Let's Begin" << std::endl;
					console.setFinalScore(1);
					break;
				}
				else {
					std::cout << "Well Have It Your Way Then" << std::endl;
					exit(0);
				}
			}
			else {
				std::cout << "What Does Thou Not Understand About 1.,2.,3.,4.? Are Thou Stupid?" << std::endl;
			}
		}
		std::cout << quiz.question[1] << std::endl;
		std::cout << "Answers:" << std::endl;
		std::cout << "1.Human, 2.Inferior Life Source, 3.Nothing, 4.Thine God" << std::endl;
		while (true) {
			std::cin >> input;
			if (input == "1" || input == "2" || input == "3" || input == "4")
			{
				choice = std::stoi(input);
				if (choice == 1) {
					std::cout << "Correct, BUT not what I'm looking for." << std::endl;
					break;
				}
				if (choice == 2)
				{
					std::cout << "Exactly you know what you are and you know where you belong, 2 Points for griffoendor" << std::endl;
					console.setFinalScore(1);
					break;
				}
				if (choice == 3)
				{
					std::cout << "If Thou Art Truely Nothing Then How Does Thee Take This Quiz." << std::endl;
					break;
				}
				if (choice == 4)
				{
					std::cout << "Nothing is or shall become my god cause I am greater than god I am... thine lonze" << std::endl;
					break;
				}
			}
			else {
				std::cout << "What Does Thou Not Understand About 1.,2.,3.,4.? Are Thou Stupid?" << std::endl;
			}
		}
		std::cout << quiz.question[2] << std::endl;
		std::cout << "Answers:" << std::endl;
		std::cout << "1.Sad, 2.Great, 3.Angry, 4.Happy And Fluffy" << std::endl;
		while (true) {
			std::cin >> input;
			if (input == "1" || input == "2" || input == "3" || input == "4")
			{
				choice = std::stoi(input);
				if (choice == 4)
				{
					std::cout << "Thou are a True HAPPY AND FLUFFY MASTER" << std::endl;
					console.setFinalScore(2);
					break;
				}
				else
				{
					std::cout << "Human Emotions are normal Don't be so Normal Mortal" << std::endl;
					console.setFinalScore(1);
					break;
				}
			}
			else {
				std::cout << "What Does Thou Not Understand About 1.,2.,3.,4.? Are Thou Stupid?" << std::endl;
			}
		}
		std::cout << quiz.question[3] << std::endl;
		std::cout << "Answers:" << std::endl;
		std::cout << "1.Fun, 2.Becoming Known, 3.Becoming Rich 4.Living till you DIE" << std::endl;
		while (true) {
			std::cin >> input;
			if (input == "1" || input == "2" || input == "3" || input == "4")
			{
				std::cout << "There is no wrong answer life is everything you think it is" << std::endl;
				console.setFinalScore(1);
				break;
			}
			else {
				std::cout << "What Does Thou Not Understand About 1.,2.,3.,4.? Are Thou Stupid?" << std::endl;
			}
		}
		std::cout << quiz.question[4] << std::endl;
		std::cout << "Answers:" << std::endl;
		std::cout << "Y/N" << std::endl;
		while (true) {
			std::cin >> input;
			if (input == "Y" || input == "y")
			{
				std::cout << "False There Is SomeThings Worse Than Death Like Difine Punishments" << std::endl;
				break;
			}
			if (input == "N" || input == "n")
			{
				std::cout << "Thou IS Right, Only Few Know Actively About Fate Worse Than DEATH" << std::endl;
				console.setFinalScore(1);
				break;
			}
			else {
				std::cout << "Thou Art Really Stupid To Do This" << std::endl;
			}
		}
		for (int i = 0; i < 21; i++)
		{
			std::cout << "Answer IS Being Calculated" << std::endl;
		}
		if (console.getFinalScore() <= 1)
		{
			std::cout << "Thine Has Answered So Stupidly That Thine Shall Recieve Punishment" << console.getFinalScore() << "/6";
		}
		if (console.getFinalScore() >= 2 && console.getFinalScore() <= 3)
		{
			std::cout << "This Is Rediculous Thou Is Unfit To Be Human Thy Shall Be Reborn As A Bug Or No Faced Creature" << console.getFinalScore() << "/6";
		}
		if (console.getFinalScore() >= 4 && console.getFinalScore() <= 5)
		{
			std::cout << "Decent Mortal Thou Has Earned I's Bond" << console.getFinalScore() << "/6";
		}
		if (console.getFinalScore() >= 6)
		{
			std::cout << "PERFECT SCORE, Mortal NO Thou Shalt not be Mortal Anymore Thy Shall Be God In Next Life Like I" << console.getFinalScore() << "/6";
		}
		if (input == "End")
		{
			exit(0);
		}
	}
