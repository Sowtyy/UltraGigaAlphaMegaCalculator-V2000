#include "Header.h"


const int MAXINPNUMS = 2;

const std::vector<std::string> EXITOPTVEC
{
	"", "l", "q"
};

const std::vector<std::string> MODEVEC
{
	"+", "-", "*", "/"
};

const std::vector<std::string> LANGVEC
{
	"en", "ru"
};

const std::unordered_map<std::string, std::unordered_map<std::string, std::string>> TEXTMAP
{
	{"choose_lang", {
		{"en", "Select language: "},
		{"ru", "Выберите язык: "}
	}},
	{"welcome", {
		{"en", "\n\tWelcome to the UltraGigaAlphaMegaCalculator V2000 (giga_english_edition)\n\n\n"},
		{"ru", "\n\tДобро пожаловать в УльтраГигаАльфаМегаКалькулятор V2000 (alpha_russian_edition)\n\n\n"}
	}},
	{"welcome_note", {
		{"en", "Pro tip: If you don't understand who made this program or don't understand how to use calculators like this,\n exit this program or try to type NUMBERS ONLY(otherwise, crash will happen in 100 %).\n\n\n\n\n"},
		{"ru", "Если вы не понимаете, кто создал этот калькулятор или не понимаете, как пользоваться подобными калькуляторами,\n выйдите из этой программы или постарайтесь вводить ТОЛЬКО ЦИФРЫ (иначе, крэш произойдёт в 100% случаев)\n\n\n\n\n"}
	}},
	{"choose_mode", {
		{"en", "\n\n1. Addition (+)\n2. Subtraction (-)\n3. Multiplication (*)\n4. Division (/)\n\nChoose the operation: "},
		{"ru", "\n\n1. Сложение (+)\n2. Вычитание (-)\n3. Умножение (*)\n4. Деление (/)\n\nВыберете операцию: "}
	}},
	{"enter_num", {
		{"en", "\nEnter number "},
		{"ru", "\nВведите число "}
	}},
	{"result", {
		{"en", "\n\nResult: "},
		{"ru", "\n\nРезультат: "}
	}},
	{"to_exit", {
		{"en", "\n\nEnter 'l' to change language, 'q' to exit, or press Enter to continue... "},
		{"ru", "\n\nВведите 'l' чтобы изменить язык, 'q' чтобы выйти, или нажмите Enter чтобы продолжить... "}
	}}
};
