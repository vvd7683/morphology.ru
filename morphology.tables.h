#ifndef _MORPHOLOGY_TABLES_H_
#define _MORPHOLOGY_TABLES_H_

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <regex>

#include <vector>
#include <map>
#include <string>

using namespace std;
class MorphologyParser
{
public:
	typedef enum PartOfSpeech {
		posUnknown = -1,
		posNoun,
		posVerb,
		posAdjective,

		posCount
	} WordType;
	typedef const vector<wstring > Morphemes;
	typedef vector<wstring > WordParts;//TODO: make map<int position, wstring morpheme>
	//typedef const vector<const wstring > WordParts;
	MorphologyParser() : str(wstring()), wtype(posUnknown) {}
	MorphologyParser(const wstring &cStr) : str(wstring()), wtype(posUnknown) { Parse(cStr); }
	virtual const wstring &Parse(const wstring &);
	virtual WordParts &cPrefixes() {
		return Prefixes;
	}
	virtual WordParts &cSuffixes() {
		return Suffixes;
	}
	virtual WordParts &cReflections() {
		return Reflections;
	}
	virtual WordParts &cPostfixes() {
		return Postfixes;
	}
	virtual const wstring &cWord() { return str; }
	virtual const wstring cBase() = 0;
	virtual const wstring cBegin() = 0;
	virtual const wstring cEnd() = 0;
	const WordType cWordType() { return wtype; }
protected:
	wstring str;
	WordType wtype;
	WordParts Prefixes;
	WordParts Suffixes;
	WordParts Reflections;
	WordParts Postfixes;
};

class MorphologyNoun
{
public:
/*	MorphologyNounParser(const wstring &cStr) {
		//
	}*/
};

#endif
