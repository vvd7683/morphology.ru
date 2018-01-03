#ifndef _MORPHOLOGY_TABLES_H_
#define _MORPHOLOGY_TABLES_H_

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <regex>

#include <vector>
#include <map>
#include <string>

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
	typedef const std::vector<std::wstring > Morphemes;
	typedef std::vector<std::wstring > WordParts;
	//typedef const std::vector<const std::wstring > WordParts;
	MorphologyParser() : str(std::wstring()), wtype(posUnknown) {}
	MorphologyParser(const std::wstring &cStr) : str(std::wstring()), wtype(posUnknown) { Parse(cStr); }
	virtual const std::wstring &Parse(const std::wstring &);
	virtual WordParts &cSuffixes() {
		return Suffixes;
	}
	virtual WordParts &cReflections() {
		return Reflections;
	}
	virtual const std::wstring &cWord() { return str; }
	virtual const std::wstring cBase() = 0;
	const WordType cWordType() { return wtype; }
protected:
	std::wstring str;
	WordType wtype;
	WordParts Suffixes;
	WordParts Reflections;
};

class MorphologyNoun
{
public:
/*	MorphologyNounParser(const std::wstring &cStr) {
		//
	}*/
};

#endif
