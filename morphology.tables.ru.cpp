#include "morphology.tables.ru.h"

using namespace MorphologyRU;

VerbParser::VerbParser(const std::wstring &cStr) : Parser(cStr) {
	//
}

const std::wstring &VerbParser::Parse(const std::wstring &cStr) {
	str = cStr;
	std::string Temp;
	std::wregex rx;
	std::wcmatch match;//TODO: use cVerbReflections
	for (auto &reflection : cVerbReflections) {
		reflection;
	}
	std::regex_search(cStr.c_str(), match, rx);
	return str;
}
