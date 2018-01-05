#include "morphology.tables.ru.h"

using namespace MorphologyRU;

static const NounReflection nounReflections[] = {
		//Declension I
		{
			wstring(L"а"), declI, aUnknown, genMasculine, caseNominative, numSingle, L"староста"
		},
		{
			wstring(L"а"), declI, aUnknown, genFeminine, caseNominative, numSingle, L"глухота"
		},
		{
			wstring(L"ы"), declI, aUnknown, genMasculine, caseGenetive, numSingle, L"старосты"
		},
		{
			wstring(L"ы"), declI, aUnknown, genFeminine, caseGenetive, numSingle, L"глухоты"
		},
		{
			wstring(L"и"), declI, aUnknown, genMasculine, caseGenetive, numSingle, L"дедушки"
		},
		{
			wstring(L"и"), declI, aUnknown, genFeminine, caseGenetive, numSingle, L"кошки"
		},
		{
			wstring(L"у"), declI, aUnknown, genMasculine, caseAccusative, numSingle, L"дедушку"
		},
		{
			wstring(L"у"), declI, aUnknown, genFeminine, caseAccusative, numSingle, L"кошку"
		},
		{
			wstring(L"е"), declI, aUnknown, genMasculine, caseDative, numSingle, L"воеводе"
		},
		{
			wstring(L"е"), declI, aUnknown, genFeminine, caseDative, numSingle, L"подводе"
		},
		{
			wstring(L"ой"), declI, aUnknown, genMasculine, caseInstrumental, numSingle, L"дедушкой"
		},
		{
			wstring(L"ой"), declI, aUnknown, genFeminine, caseInstrumental, numSingle, L"подводой"
		},
		{
			wstring(L"ей"), declI, aUnknown, genMasculine, caseInstrumental, numSingle, L"<no sample>" 
		},
		{
			wstring(L"ей"), declI, aUnknown, genFeminine, caseInstrumental, numSingle, L"тысячей"
		},
		{
			wstring(L"е"), declI, aUnknown, genMasculine, casePrepositional, numSingle, L"о папе"
		},
		{
			wstring(L"е"), declI, aUnknown, genFeminine, casePrepositional, numSingle, L"о маме, о тысяче, о подводе"
		},


		{
			wstring(L"ы"), declI, aUnknown, genMasculine, caseNominative, numMultiple, L"старосты"
		},
		{
			wstring(L"ы"), declI, aUnknown, genFeminine, caseNominative, numMultiple, L"подводы"
		},
		{
			wstring(L"и"), declI, aUnknown, genMasculine, caseNominative, numMultiple, L"дедушки"
		},
		{
			wstring(L"и"), declI, aUnknown, genFeminine, caseNominative, numMultiple, L"кошки"
		},
		{
			wstring(), declI, aUnknown, genMasculine, caseGenetive, numMultiple, L""
		},
		{
			wstring(), declI, aUnknown, genFeminine, caseGenetive, numMultiple, L""
		},
		{
			wstring(), declI, aAnimated, genMasculine, caseAccusative, numMultiple, L""
		},
		{
			wstring(), declI, aAnimated, genFeminine, caseAccusative, numMultiple, L""
		},
		{
			wstring(L"ы"), declI, aInanimated, genMasculine, caseAccusative, numMultiple, L""
		},
		{
			wstring(L"ы"), declI, aInanimated, genFeminine, caseAccusative, numMultiple, L""
		},
		{
			wstring(L"ам"), declI, aUnknown, genMasculine, caseDative, numMultiple, L""
		},
		{
			wstring(L"ам"), declI, aUnknown, genFeminine, caseDative, numMultiple, L""
		},
		{
			wstring(L"ами"), declI, aUnknown, genMasculine, caseInstrumental, numMultiple, L""
		},
		{
			wstring(L"ами"), declI, aUnknown, genFeminine, caseInstrumental, numMultiple, L""
		},
		{
			wstring(L"ах"), declI, aUnknown, genMasculine, casePrepositional, numMultiple, L""
		},
		{
			wstring(L"ах"), declI, aUnknown, genFeminine, casePrepositional, numMultiple, L""
		},
		//-я
		//Single number
		{
			wstring(L"я"), declI, aUnknown, genMasculine, caseNominative, numSingle, L""
		},
		{
			wstring(L"я"), declI, aUnknown, genFeminine, caseNominative, numSingle, L""
		},
		{
			wstring(L"и"), declI, aUnknown, genMasculine, caseGenetive, numSingle, L""
		},
		{
			wstring(L"и"), declI, aUnknown, genFeminine, caseGenetive, numSingle, L""
		},
		{
			wstring(L"ю"), declI, aUnknown, genMasculine, caseAccusative, numSingle, L""
		},
		{
			wstring(L"ю"), declI, aUnknown, genFeminine, caseAccusative, numSingle, L""
		},
		{
			wstring(L"е"), declI, aUnknown, genMasculine, caseDative, numSingle, L""
		},
		{
			wstring(L"е"), declI, aUnknown, genFeminine, caseDative, numSingle, L""
		},
		{
			wstring(L"ёй"), declI, aUnknown, genUnknown, caseInstrumental, numSingle, L""
		},
		{
			wstring(L"ей"), declI, aUnknown, genUnknown, caseInstrumental, numSingle, L""
		},
		{
			wstring(L"е"), declI, aUnknown, genMasculine, casePrepositional, numSingle, L""
		},
		{
			wstring(L"е"), declI, aUnknown, genFeminine, casePrepositional, numSingle, L""
		},
		//Multiple number
		{
			wstring(L"и"), declI, aUnknown, genMasculine, caseNominative, numMultiple, L""
		},
		{
			wstring(L"и"), declI, aUnknown, genFeminine, caseNominative, numMultiple, L""
		},
		{
			wstring(L"ь"), declI, aUnknown, genUnknown, caseGenetive, numMultiple, L""
		},
		{
			wstring(L"ей"), declI, aUnknown, genUnknown, caseGenetive, numMultiple, L""
		},
		{
			wstring(L"ей"), declI, aAnimated, genMasculine, caseAccusative, numMultiple, L""
		},
		{
			wstring(L"ь"), declI, aAnimated, genMasculine, caseAccusative, numMultiple, L""
		},
		{
			wstring(L"ей"), declI, aAnimated, genMasculine, caseAccusative, numMultiple, L""
		},
		{
			wstring(L"ь"), declI, aAnimated, genFeminine, caseAccusative, numMultiple, L""
		},
		{
			wstring(L"и"), declI, aInanimated, genMasculine, caseAccusative, numMultiple, L""
		},
		{
			wstring(L"и"), declI, aInanimated, genFeminine, caseAccusative, numMultiple, L""
		},
		{
			wstring(L"ям"), declI, aUnknown, genMasculine, caseDative, numMultiple, L""
		},
		{
			wstring(L"ям"), declI, aUnknown, genFeminine, caseDative, numMultiple, L""
		},
		{
			wstring(L"ями"), declI, aUnknown, genMasculine, caseInstrumental, numMultiple, L""
		},
		{
			wstring(L"ями"), declI, aUnknown, genFeminine, caseInstrumental, numMultiple, L""
		},
		{
			wstring(L"ях"), declI, aUnknown, genMasculine, casePrepositional, numMultiple, L""
		},
		{
			wstring(L"ях"), declI, aUnknown, genFeminine, casePrepositional, numMultiple, L""
		},
		//Declension II
		{
			wstring(), declI, aUnknown, genMasculine, caseNominative, numSingle, L""
		},
		{
			wstring(L"о"), declI, aInanimated, genNeuther, caseNominative, numSingle, L""
		},
		{
			wstring(L"е"), declI, aInanimated, genNeuther, caseNominative, numSingle, L""
		},

		//Declension various
		{
			wstring(L"я"), declVar, aInanimated, genNeuther, caseNominative, numSingle, L""
		},
		{
			wstring(L"и"), declVar, aInanimated, genNeuther, caseGenetive, numSingle, L""
		},
		{
			wstring(L"я"), declVar, aInanimated, genNeuther, caseAccusative, numSingle, L""
		},
		{
			wstring(L"и"), declVar, aInanimated, genNeuther, caseDative, numSingle, L""
		},
		{
			wstring(L"ем"), declVar, aInanimated, genNeuther, caseInstrumental, numSingle, L""
		},
		{
			wstring(L"и"), declVar, aInanimated, genNeuther, casePrepositional, numSingle, L""
		},


		{
			wstring(L"а"), declVar, aInanimated, genNeuther, caseNominative, numMultiple, L""
		},
		{
			wstring(L"ён"), declVar, aInanimated, genNeuther, caseGenetive, numMultiple, L""
		},
		{
			wstring(L"а"), declVar, aInanimated, genNeuther, caseAccusative, numMultiple, L""
		},
		{
			wstring(L"ам"), declVar, aInanimated, genNeuther, caseDative, numMultiple, L""
		},
		{
			wstring(L"ами"), declVar, aInanimated, genNeuther, caseInstrumental, numMultiple, L""
		},
		{
			wstring(L"ах"), declVar, aInanimated, genNeuther, casePrepositional, numMultiple, L""
		}
};

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
	std::wcmatch match;
	const wstring cReflectionsRegexp = getReflectionsRegexp();
	const wstring cPostfixesRegexp = getPostfixesRegexp();
	std::regex_search(cStr.c_str(), match, rx);
	return str;
}
