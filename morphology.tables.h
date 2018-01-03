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
	typedef vector<wstring > WordParts;
	//typedef const vector<const wstring > WordParts;
	MorphologyParser() : str(wstring()), wtype(posUnknown) {}
	MorphologyParser(const wstring &cStr) : str(wstring()), wtype(posUnknown) { Parse(cStr); }
	virtual const wstring &Parse(const wstring &);
	virtual WordParts &cSuffixes() {
		return Suffixes;
	}
	virtual WordParts &cReflections() {
		return Reflections;
	}
	virtual const wstring &cWord() { return str; }
	virtual const wstring cBase() = 0;
	const WordType cWordType() { return wtype; }
protected:
	wstring str;
	WordType wtype;
	WordParts Suffixes;
	WordParts Reflections;
};

class MorphologyNoun
{
public:
/*	MorphologyNounParser(const wstring &cStr) {
		//
	}*/
};

#endif
