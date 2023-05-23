#include "header.h"


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
		{"en", "Select language (if you have issues with russian): "},
		{"ru", "Выберите язык (если у вас есть проблемы с русским): "}
	}},
	{"welcome", {
		{"en", "\n\t\tWelcome to the UltraGigaAlphaMegaCalculator V2000 (giga_english_edition)\n\n\n\n\n"},
		{"ru", "\n\t\tДобро пожаловать в УльтраГигаАльфаМегаКалькулятор V2000(alpha_russian_edition)\n\n\n\n\n"}
	}},
	{"welcome_note", {
		{"en", "Pro tip: If you don't understand who made this program or don't understand how to use calculators like this,\n exit this program or try to type NUMBERS ONLY(otherwise, crash will happen in 100 %).\n\n\n\n\n"},
		{"ru", "Если вы не понимаете, кто создал этот калькулятор или не понимаете, как пользоваться подобными калькуляторами,\n выйдите из этой программы или постарайтесь вводить ТОЛЬКО ЦИФРЫ (иначе, крэш произойдёт в 100% случаев)\n\n\n\n\n"}
	}},
	{"choose_mode", {
		{"en", "Addition (+)\nSubtraction (-)\nMultiplication (*)\nDivision (/)\n\nChoose the operation: "},
		{"ru", "Сложение (+)\nВычитание (-)\nУмножение (*)\nДеление (/)\n\nВыберете операцию: "}
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
		{"en", "\nPress Enter to continue..."},
		{"ru", "\nНажмите Enter чтобы продолжить..."}
	}}
};
