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
	const VerbReflection verbReflections[] = {
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
