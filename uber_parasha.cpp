#include <iostream>
#include <string>



int main()
{
	setlocale(LC_ALL, "ru_RU");

	int a;
	int num1;
	int num2;
	int exit;
	int lang;

	std::cout << "1. Russian\n2. English\n " << std::endl;
	std::cout << "Select language (if you have an issues on russian): ";
	std::cin >> lang;
	std::cout << std::endl;








	switch (lang)
	{
	default:
		std::cout << "\tStop being an asshole and do what you need to do.\n" << std::endl;

		std::cout << "Enter some \"bullshit\" to exit: ";
		std::cin >> exit;
		break;



	case 1:                                                                                                                                   //РУЗЗГИЙ

		std::cout << "\t\tДобро пожаловать в УльтраГигаАльфаМегаКалькулятор V2000 (alpha_russian_edition)" << std::endl;



		{
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << "Совет: если вы не понимаете, кто сделал эту программу и\nне знаете, как пользоваться подобным калькулятором, выйдите\nиз данной программы, либо, постарайтесь вводить ТОЛЬКО ЧИСЛА (иначе,\nв 100% случаев произойдёт крэш)." << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;                                   //приветствие
		};


		std::cout << "1. Сложение \n2. Вычитание \n3. Умножение \n4. Деление\n\nВыберите действие: ";

		std::cin >> a;
		std::cout << std::endl;                                       //выбор действия





		switch (a)
		{
		case 1:
			std::cout << "Введите слагаемое 1: ";                           //сложение
			std::cin >> num1;
			std::cout << std::endl;


			std::cout << "Введите слагаемое 2: ";
			std::cin >> num2;
			std::cout << "\n" << std::endl;


			std::cout << "Результат: " << num1 + num2 << std::endl;
			break;

		case 2:
			std::cout << "Введите слагаемое 1: ";                           //вычитание
			std::cin >> num1;
			std::cout << std::endl;


			std::cout << "Введите слагаемое 2: ";
			std::cin >> num2;
			std::cout << "\n" << std::endl;


			std::cout << "Результат: " << num1 - num2 << std::endl;
			break;

		case 3:
			std::cout << "Введите слагаемое 1: ";                           //умножение
			std::cin >> num1;
			std::cout << std::endl;


			std::cout << "Введите слагаемое 2: ";
			std::cin >> num2;
			std::cout << "\n" << std::endl;


			std::cout << "Результат: " << num1 * num2 << std::endl;
			break;

		case 4:
			std::cout << "Введите слагаемое 1: ";                           //деление
			std::cin >> num1;
			std::cout << std::endl;


			std::cout << "Введите слагаемое 2: ";
			std::cin >> num2;
			std::cout << "\n" << std::endl;


			std::cout << "Результат: " << num1 / num2 << std::endl;         //ответ
			break;

		default:
			std::cout << "Произошла критическая ошибка так как вы - конченый дебил, который даже\nне может ввести цифру, которую его попросили.\n" << std::endl;        //для дурачков
			break;

		};



		std::cout << "Введите \"какую-нибудь хуйню\" чтобы выйти: ";
		std::cin >> exit;
		break;





	case 2:                                                                                                                                   //ОНГЛИЗГИЙ

	{	std::cout << "\t\tWelcome to the UltraGigaAlphaMegaCalculator V2000 (giga_english_edition)" << std::endl;



	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Pro tip: If you don't understand who made this program or don't understand how to use calculators like this,\n exit this program or try to type NUMBERS ONLY (otherwise, crash will happen in 100%)." << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}


	std::cout << "1. Addition (+) \n2. Subtraction (-) \n3. Multiplication (*) \n4. Division (/)\n\nChoose the operation: ";

	std::cin >> a;
	std::cout << std::endl;


	switch (a)
	{
	case 1:
		std::cout << "Enter item 1: ";                                  //сложение
		std::cin >> num1;
		std::cout << std::endl;


		std::cout << "Enter item 2: ";
		std::cin >> num2;
		std::cout << "\n" << std::endl;


		std::cout << "Result: " << num1 + num2 << std::endl;
		break;

	case 2:
		std::cout << "Enter item 1: ";                                  //вычитание
		std::cin >> num1;
		std::cout << std::endl;


		std::cout << "Enter item 2: ";
		std::cin >> num2;
		std::cout << "\n" << std::endl;


		std::cout << "Result: " << num1 - num2 << std::endl;
		break;

	case 3:
		std::cout << "Enter item 1: ";                                  //умножение
		std::cin >> num1;
		std::cout << std::endl;


		std::cout << "Enter item 2: ";
		std::cin >> num2;
		std::cout << "\n" << std::endl;


		std::cout << "Result: " << num1 * num2 << std::endl;
		break;

	case 4:
		std::cout << "Enter item 1: ";                                  //деление
		std::cin >> num1;
		std::cout << std::endl;


		std::cout << "Enter item 2: ";
		std::cin >> num2;
		std::cout << "\n" << std::endl;


		std::cout << "Result: " << num1 / num2 << std::endl;            //результат
		break;

	default:
		std::cout << "A critical error was ocurred because you're stupid idiot that can't enter the right number.\n" << std::endl;         //для дурачков
	

	};

	std::cout << "Enter some \"bullshit\" to exit: ";
	std::cin >> exit;


	};
	};
}