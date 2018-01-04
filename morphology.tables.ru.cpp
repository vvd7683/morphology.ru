#include "morphology.tables.ru.h"

using namespace MorphologyRU;

static const VerbReflection verbReflections[] = {
		{
			wstring(L"ть"), conjUnknown, aspUnknown, tenseUnknown, persUnknown, numUnknown, genUnknown, wstring(L"брать")
		},
		{
			wstring(L"ти"), conjI, aspUnknown, tenseUnknown, persUnknown, numUnknown, genUnknown, wstring(L"идти")
		},
		//I person
		//Single number
		{
			wstring(L"ю"), conjUnknown, aspImperfective, tensePresent, persI, numSingle, genUnknown, wstring(L"клюю")
		},
		{
			wstring(L"у"), conjUnknown, aspImperfective, tensePresent, persI, numSingle, genUnknown, wstring(L"тку")
		},
		{
			wstring(L"ю"), conjUnknown, aspPerfective, tenseFuture, persI, numSingle, genUnknown, wstring(L"поклюю")
		},
		{
			wstring(L"у"), conjUnknown, aspPerfective, tenseFuture, persI, numSingle, genUnknown, wstring(L"вытку")
		},
		//Multiple number
		{
			wstring(L"ем"), conjI, aspImperfective, tensePresent, persI, numMultiple, genUnknown, wstring(L"едем")
		},
		{
			wstring(L"ём"), conjI, aspImperfective, tensePresent, persI, numMultiple, genUnknown, wstring(L"суём")
		},
		{
			wstring(L"им"), conjII, aspImperfective, tensePresent, persI, numMultiple, genUnknown, wstring(L"дарим")
		},

		{
			wstring(L"ем"), conjI, aspPerfective, tenseFuture, persI, numMultiple, genUnknown, wstring(L"вынем")
		},
		{
			wstring(L"ём"), conjI, aspPerfective, tenseFuture, persI, numMultiple, genUnknown, wstring(L"отдаём")
		},
		{
			wstring(L"им"), conjII, aspPerfective, tenseFuture, persI, numMultiple, genUnknown, wstring(L"сварим")
		},
		//II person
		//Single number
		{
			wstring(L"ешь"), conjI, aspImperfective, tensePresent, persI, numSingle, genUnknown, wstring(L"делаешь")
		},
		{
			wstring(L"ёшь"), conjI, aspImperfective, tensePresent, persI, numSingle, genUnknown, wstring(L"несёшь")
		},
		{
			wstring(L"ишь"), conjII, aspImperfective, tensePresent, persI, numSingle, genUnknown, wstring(L"носишь")
		},
		{
			wstring(L"ешь"), conjI, aspPerfective, tenseFuture, persI, numSingle, genUnknown, wstring(L"вынешь")
		},
		{
			wstring(L"ёшь"), conjI, aspPerfective, tenseFuture, persI, numSingle, genUnknown, wstring(L"уберёшь")
		},
		{
			wstring(L"ишь"), conjII, aspPerfective, tenseFuture, persI, numSingle, genUnknown, wstring(L"бросишь")
		},

		//Multiple number
		{
			wstring(L"ете"), conjI, aspImperfective, tensePresent, persI, numSingle, genUnknown, wstring(L"делаете")
		},
		{
			wstring(L"ёте"), conjI, aspImperfective, tensePresent, persI, numSingle, genUnknown, wstring(L"берёте, льёте")
		},
		{
			wstring(L"ите"), conjII, aspImperfective, tensePresent, persI, numSingle, genUnknown, wstring(L"носите")
		},
		{
			wstring(L"ете"), conjI, aspPerfective, tenseFuture, persI, numSingle, genUnknown, wstring(L"вынете")
		},
		{
			wstring(L"ёте"), conjI, aspPerfective, tenseFuture, persI, numSingle, genUnknown, wstring(L"уберёте, нальёте")
		},
		{
			wstring(L"ите"), conjII, aspPerfective, tenseFuture, persI, numSingle, genUnknown, wstring(L"бросите")
		},
		//III person
		//Single number
		{
			wstring(L"ет"), conjI, aspImperfective, tensePresent, persI, numSingle, genUnknown, wstring(L"делает")
		},
		{
			wstring(L"ёт"), conjI, aspImperfective, tensePresent, persI, numSingle, genUnknown, wstring(L"берёт")
		},
		{
			wstring(L"ит"), conjII, aspImperfective, tensePresent, persI, numSingle, genUnknown, wstring(L"носит")
		},
		{
			wstring(L"ет"), conjI, aspPerfective, tenseFuture, persI, numSingle, genUnknown, wstring(L"вынет")
		},
		{
			wstring(L"ёт"), conjI, aspPerfective, tenseFuture, persI, numSingle, genUnknown, wstring(L"уберёт, нальёт")
		},
		{
			wstring(L"ит"), conjII, aspPerfective, tenseFuture, persI, numSingle, genUnknown, wstring(L"бросит")
		},

		//Multiple number
		{
			wstring(L"ут"), conjI, aspImperfective, tensePresent, persI, numSingle, genUnknown, wstring(L"ищут")
		},
		{
			wstring(L"ют"), conjI, aspImperfective, tensePresent, persI, numSingle, genUnknown, wstring(L"поют, льют")
		},
		{
			wstring(L"ат"), conjII, aspImperfective, tensePresent, persI, numSingle, genUnknown, wstring(L"жужжат")
		},
		{
			wstring(L"ят"), conjII, aspImperfective, tensePresent, persI, numSingle, genUnknown, wstring(L"доят, хотят")
		},
		{
			wstring(L"ут"), conjI, aspPerfective, tenseFuture, persI, numSingle, genUnknown, wstring(L"уберут")
		},
		{
			wstring(L"ют"), conjI, aspPerfective, tenseFuture, persI, numSingle, genUnknown, wstring(L"споют, нальют")
		},
		{
			wstring(L"ат"), conjII, aspPerfective, tensePresent, persI, numSingle, genUnknown, wstring(L"удержат")
		},
		{
			wstring(L"ят"), conjII, aspImperfective, tensePresent, persI, numSingle, genUnknown, wstring(L"простят, посмотрят")
		},
		//Past
		{
			wstring(L"а"), conjUnknown, aspUnknown, tensePast, persUnknown, numSingle, genFeminine, wstring(L"держала")
		},
		{
			wstring(L"и"), conjUnknown, aspUnknown, tensePast, persUnknown, numMultiple, genUnknown, wstring(L"держали")
		},
		{
			wstring(), conjUnknown, aspUnknown, tensePast, persUnknown, numSingle, genMasculine, wstring(L"держал")
		},
		{
			wstring(L"о"), conjUnknown, aspUnknown, tensePast, persUnknown, numSingle, genNeuther, wstring(L"держало")
		},

		{
			wstring(), conjUnknown, aspUnknown, tenseUnknown, persUnknown, numUnknown, genUnknown, wstring(L"беречь")
		}
};

wstring Verb::getPostfixesRegexp(const wstring delimiter) {
	wstring result = L"((";
	wstring res_end = L"))";
	for (auto &verb_postfix : verbPostfixes) {
		if (verb_postfix.size()) {
			(&verb_postfix != &verbPostfixes[0]) && (result += delimiter).size();
			result += verb_postfix;
		}
		else {
			res_end = L")?)";
		}
	}
	result += res_end;
	return result;
}

wstring Verb::getReflectionsRegexp(const wstring delimiter) {
	wstring result = L"(";
	for (auto &verb_reflection : verbReflections) {
		(&verb_reflection != &verbReflections[0]) && (result += delimiter).size();
		result += verb_reflection.s;
	}
	result += L")";
	return result;
}

VerbParser::VerbParser(const std::wstring &cStr) : Parser(cStr) {
	//
}

const std::wstring &VerbParser::Parse(const std::wstring &cStr) {
	str = cStr;
	std::wregex rx;
	std::wcmatch match;//TODO: use cVerbReflections
	getReflectionsRegexp() + getPostfixesRegexp();
	for (auto &reflection : verbReflections) {
		reflection.s;
	}
	std::regex_search(cStr.c_str(), match, rx);
	return str;
}
