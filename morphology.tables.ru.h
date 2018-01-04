#ifndef _MORPHOLOGY_TABLES_RU_H_
#define _MORPHOLOGY_TABLES_RU_H_

#include "morphology.tables.h"

using namespace std;

namespace MorphologyRU {
	class Parser : public MorphologyParser
	{
	public:
		Parser(const wstring &cStr) : MorphologyParser(cStr) {
			//TODO: check for characters set, grammar etc
		}
	};
	//Verb categories
	//Permanent
	typedef enum {
		conjUnknown = -1,

		conjI,
		conjII,

		conjCount
	} Conjugation;
	typedef enum {
		aspUnknown = -1,

		aspImperfective,
		aspPerfective,

		aspCount
	} Aspect;
	//Changable
	typedef enum {
		tenseUnknown = -1,

		tensePast,
		tensePresent,
		tenseFuture,

		tenseCount
	} Tense;
	typedef enum {
		persUnknown = -1,

		persI,
		persII,
		persIII,

		persCount
	} Person;

	typedef enum {
		numUnknown = -1,

		numSingle,
		numMultiple,

		numCount
	} Number;
	typedef enum {
		genUnknown = -1,

		genMasculine,
		genFeminine,
		genNeuther,

		genCount
	} Gender;
	const wstring verbPostfixes[] = { L"ся", L"сь" };
	typedef struct {
		wstring s;
		Conjugation conjugation;
		Aspect aspect;
		Tense tense;
		Person person;
		Number number;
		Gender gender;
		wstring example;
	} VerbReflection;
	static MorphologyParser::Morphemes cVerbReflections = {
		//Инфинитив
		L"ть",//брать
		L"ти",//идти
		//Нулевой суффикс беречь, толочь
		//I лицо ед. число
		L"ю",//клюю
		L"у",//тку
		//I лицо множ. число
		L"ем",//делаем
		L"ём",//бьём
		L"им",//хотим
		//II лицо ед. число
		L"ешь",
		L"ёшь",
		L"ишь",

		//II лицо множ. число
		L"ете",
		L"ёте",
		L"ите",

		///III лицо ед. число
		L"ет",//делает
		L"ёт",//даёт
		L"ит",//строит
		///III лицо множ. число
		L"ют",//кроют
		L"ут",//врут
		L"ят",//доят
		L"ат",//лечат

		L"и",//искали
		L"а",//смотрела
		L""
	};
	class Verb
	{
	public:
		Verb() : conjugation(conjUnknown), aspect(aspUnknown), tense(tenseUnknown), person(persUnknown) {}
		Verb(const wstring &cStr) : conjugation(conjUnknown), aspect(aspUnknown), tense(tenseUnknown), person(persUnknown) {}
		static wstring getPostfixesRegexp(const wstring delimiter = L"|");
		static wstring getReflectionsRegexp(const wstring delimiter = L"|");
		const Tense getTense() {
			return tense;
		}
		const Conjugation getConjugation() {
			return conjugation;
		}
		const Person getPerson() {
			return person;
		}

		wstring getRegexp() {
			return wstring();
		}
	protected:
		Conjugation conjugation;
		Aspect aspect;

		Tense tense;
		Person person;
	};

	class VerbParser : public Parser, public Verb
	{
	public:
		VerbParser(const wstring &cStr);
		virtual const wstring &Parse(const wstring &cStr);

		virtual const wstring cBase() { return wstring(); }
		virtual const wstring cEnd() {
			wstring result;
			for (auto postfix : cPostfixes()) {
				result = postfix + result;
			}
			for (auto reflection : cReflections()) {
				result = reflection + result;
			}
			for (auto suffix : cSuffixes()) {
				result = suffix + result;
			}
			return result;
		}
		virtual const wstring cBegin() {
			wstring result;
			for (auto prefix : cPrefixes()) {
				result = result + prefix;
			}
			return result;
		}
	};

	static MorphologyParser::Morphemes cPrefixes = {
		L""
	};

	static MorphologyParser::Morphemes cSuffixes = {
		L"к",
		L"ик",
		L"ек",
		L"ок",
		L"ёк",
		L"ец",
		L"иц",
		L"ич",
		L"енк",
		L"инк",
		L"онк",
		L"ёнк",
		L"онок",
		L"оньк",
		L"еньк",
		L"иньк",

		L"ер",
		L"ен",
		L"ён",
		L"ени",

		L"ин",
		L"ын",
		L"ее",
		L"ей",
		L"а",
		L"у",
		L"ше",

		L"ейш",
		L"айш",

		L"ечк",
		L"очк",
		L"ушк",
		L"юшк",
		L"ышк",
		L"ишк",
		L"ячк",

		L"ник",
		L"чик",
		L"щик",
		L"тель",

		L"иц",
		L"щиц",
		L"чиц",
		L"ниц",
		L"к",

		L"изн",
		L"инств",
		L"отн",
		L"овн",
		L"от",
		L"ость",
		L"ет",
		L"есть",
		L"еств",
		//Суффиксы прилагательных
		L"ист",
		L"ск",
		L"нн",
		L"енн",
		L"онн",
		L"еск",
		L"ическ",
		L"инск",
		L"енск",
		L"чат",
		L"ат",
		L"ив",
		L"ем",
		L"им",
		L"овит",
		L"оват",
		L"евит",
		L"еват",
		L"лив",
		L"чив",


		L"ов",
		L"ев",
		L"н",

		L"и",
		L"е",
		L"ова",
		L"ева",
		L"ыва",
		L"ива",
		L"ва",
		L"ёвыва",
		//Суффиксы глаголов
		L"ть",
		L"ти",
		L"чь",

		L"л",
		//Постфиксы
		//	L"ся",
		//	L"сь",
		//Суффиксы причастий
		L"ущ",
		L"ющ",
		L"ащ",
		L"ящ",
		L"вш",
		L"ш",
		L"ем",
		L"ом",
		L"им",
		L"т",
		//Суффиксы деепричастий
		L"вши",
		L"ши",
		L"чи",
		L"в",
		//Пустой суффикс
		L""
	};
}; //MorphologyRU
#endif //_MORPHOLOGY_TABLES_RU_H_
