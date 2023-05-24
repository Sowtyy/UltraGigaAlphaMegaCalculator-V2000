#include "Header.h"
#include "Constants.cpp"


class App
{
public:
	const std::string version = "1.0.1";
	const std::string date = "24.05.2023 @ 12 am";

	const std::string name = "UltraGigaAlphaMegaCalculator V2000   Sowtyy's rewrite";

	const std::string name_and_version = name + " " + version;

	bool run = true;

	std::string lang;
	std::string mode;


	App(std::string lang)
	{
		this->lang = lang;
	}
};
App app(LANGVEC[0]);


std::string strConv(const std::wstring& string)
{
	static std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
	return converter.to_bytes(string);
}
std::wstring strConv(const std::string& string)
{
	static std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
	return converter.from_bytes(string);
}

bool checkStrDigit(std::string str)
{
	if (str.size() < 1)
		return false;

	for (const char chr : str)
		if (!isdigit(chr))
			return false;

	return true;
}

template <typename T>
bool checkVecElemExists(T elem, std::vector<T> vec)
{
	for (const T& vecElem : vec)
	{
		if (vecElem == elem)
			return true;
	}

	return false;
}

std::string getTextMap(std::string key)
{
	std::string text = TEXTMAP.at(key).at(app.lang);
	return text;
}

std::string buildOptionsStr(std::vector<std::string> optionsVec, std::string delimiter = ", ")
{
	const int optionsVecSize = optionsVec.size();
	std::string optionsStr = "[";

	for (int i = 0; i < optionsVecSize; i++)
	{
		optionsStr += optionsVec[i];
		if (i + 1 < optionsVecSize)
			optionsStr += delimiter;
	}

	optionsStr += "]";

	return optionsStr;
}

void printTextMap(std::string key, std::string addText = "")
{
	std::cout << getTextMap(key) << addText;
}

template <typename T = std::string>
T askInput(std::string text = "")
{
	T inp{};

	std::cout << text;
	std::cin >> inp;

	return inp;
}

void askInputLang()
{
	const std::string allowedOptsStr = buildOptionsStr(LANGVEC);

	std::string inp;

	do
		inp = askInput(getTextMap("choose_lang") + allowedOptsStr + " ");
	while (!checkVecElemExists(inp, LANGVEC));

	app.lang = inp;
}

void askInputMode()
{
	const std::string allowedOptsStr = buildOptionsStr(MODEVEC);

	std::string inp;

	do
		inp = askInput(getTextMap("choose_mode") + allowedOptsStr + " ");
	while (!checkVecElemExists(inp, MODEVEC));

	app.mode = inp;
}

void askInputNums(std::vector<int>& inpNumbers)
{
	std::string inp;

	for (int i = 0; i < 2; i++)
	{
		do
			inp = askInput(getTextMap("enter_num") + std::to_string(i + 1) + ": ");
		while (!checkStrDigit(inp));

		inpNumbers.push_back(std::stoi(inp));
	}
}

void processNums(std::vector<int>& inpNumbers, int& result)
{
	std::string& mode = app.mode;

	const int numbersSize = inpNumbers.size();

	for (int i = 0; i < numbersSize; i++)
	{
		int iPlus = i + 1;

		if (iPlus >= numbersSize)
			continue;

		int& number1 = inpNumbers[i];
		int& number2 = inpNumbers[iPlus];

		if (mode == "+")
			result = number1 + number2;
		else if (mode == "-")
			result = number1 - number2;
		else if (mode == "*")
			result = number1 * number2;
		else if (mode == "/")
			result = number1 / number2;
	}
}


int main()
{
	SetConsoleTitle(strConv(app.name_and_version).c_str());

	askInputLang();
	setlocale(LC_ALL, app.lang.c_str());

	printTextMap("welcome");
	//printTextMap("welcome_note");

	int result = 0;
	std::vector<int> inpNumbers;


	while (app.run)
	{
		askInputMode();
		askInputNums(inpNumbers);

		processNums(inpNumbers, result);

		printTextMap("result", std::to_string(result));
		printTextMap("to_exit");


		std::cin.ignore();
		std::cin.get();

		std::cout << "----------\n\n";
	}
}
