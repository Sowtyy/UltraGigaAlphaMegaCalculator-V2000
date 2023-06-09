#include "Header.h"
#include "Constants.cpp"


class App
{
public:
	const std::string version = "1.1.0";
	const std::string date = "25.05.2023 @ 2 pm";

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

std::string strToLower(const std::string& str)
{
	std::string strLower;

	for (const char& chr : str)
		strLower += tolower(chr);

	return strLower;
}

bool checkStrDigit(const std::string& str)
{
	if (str.size() < 1)
		return false;

	for (const char chr : str)
		if (!isdigit(chr))
			return false;

	return true;
}

template <typename T>
bool checkVecElemExists(const T& elem, const std::vector<T>& vec)
{
	for (const T& vecElem : vec)
	{
		if (vecElem == elem)
			return true;
	}

	return false;
}

template<typename T>
std::vector<std::string> optsToStrNums(const std::vector<T>& optsVec)
{
	std::vector<std::string> strNums;

	for (unsigned int i = 0; i < optsVec.size(); i++)
		strNums.push_back(std::to_string(i + 1));
	
	return strNums;
}

template<typename T>
T strNumToOpt(const std::string& strNum, const std::vector<T>& optsVec)
{
	return optsVec[std::stoi(strNum) - 1];
}

std::string buildOptionsStr(const std::vector<std::string>& optionsVec, const std::string& delimiter = ", ")
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

std::string getTextMap(const std::string& key)
{
	std::string text = TEXTMAP.at(key).at(app.lang);
	return text;
}

void printTextMap(const std::string& key, const std::string& addText = "")
{
	std::cout << getTextMap(key) << addText;
}


std::string askInput(const std::string& text = "")
{
	std::string inp;

	std::cout << text;
	//std::cin >> inp;
	std::getline(std::cin, inp);

	return inp;
}

void askInputLang()
{
	const std::string allowedOptsStr = buildOptionsStr(LANGVEC);

	std::string inp;

	do
		inp = strToLower(askInput(getTextMap("choose_lang") + allowedOptsStr + " "));
	while (!checkVecElemExists(inp, LANGVEC));

	app.lang = inp;
	setlocale(LC_ALL, inp.c_str());
}

void askInputMode()
{
	const std::vector<std::string> newOpts = optsToStrNums(MODEVEC);
	const std::string allowedOptsStr = buildOptionsStr(newOpts);

	std::string inp;

	do
		inp = askInput(getTextMap("choose_mode") + allowedOptsStr + " ");
	while (!checkVecElemExists(inp, newOpts));

	std::string opt = strNumToOpt(inp, MODEVEC);

	app.mode = opt;
}

void askInputNums(std::vector<int>& inpNumbers)
{
	std::string inp;

	for (int i = 0; i < MAXINPNUMS; i++)
	{
		do
			inp = askInput(getTextMap("enter_num") + std::to_string(i + 1) + ": ");
		while (!checkStrDigit(inp));

		inpNumbers.push_back(std::stoi(inp));
	}
}

void askInputExit(std::string& inp)
{
	std::string newInp;

	do
		newInp = strToLower(askInput(getTextMap("to_exit")));
	while (!checkVecElemExists(newInp, EXITOPTVEC));

	inp = newInp;
}

void processNums(std::vector<int>& numbers, int& result)
{
	std::string& mode = app.mode;

	const int numbersSize = numbers.size();

	for (int i = 0; i < numbersSize; i++)
	{
		int iPlus = i + 1;

		if (iPlus >= numbersSize)
			continue;

		int& number1 = numbers[i];
		int& number2 = numbers[iPlus];

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

void processMainInput(const std::string& inp)
{
	if (inp == "l")
		askInputLang();
	else if (inp == "q")
		app.run = false;
}


int main()
{
	SetConsoleTitle(strConv(app.name_and_version).c_str());

	askInputLang();

	printTextMap("welcome");
	//printTextMap("welcome_note");

	int result = 0;
	std::vector<int> inpNumbers;

	std::string mainInp;

	while (app.run)
	{
		askInputMode();
		askInputNums(inpNumbers);

		processNums(inpNumbers, result);
		
		printTextMap("result", std::to_string(result));
		
		askInputExit(mainInp);
		processMainInput(mainInp);

		std::cout << "----------\n\n";
	}
}
