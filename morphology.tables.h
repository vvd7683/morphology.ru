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
	typedef const std::vector<const std::wstring > WordParts;
	MorphologyParser() : str(std::wstring()), wtype(posUnknown) {}
	MorphologyParser(const std::wstring &cStr) : str(std::wstring()), wtype(posUnknown) { Parse(cStr); }
	virtual const std::wstring &Parse(const std::wstring &);
	/*virtual WordParts cSuffixes() {
		std::vector<const std::wstring> wparts;
		for (auto part : Suffixes) {
			wparts.push_back(std::wstring(part));
		}
		return wparts;
	}
	virtual WordParts cReflections() {
		std::vector<const std::wstring> wparts;
		for (auto part : Reflections) {
			wparts.push_back(std::wstring(part));
		}
		return wparts;
	}*/
	virtual const std::wstring &cWord() { return str; }
	virtual const std::wstring cBase() = 0;
	const WordType cWordType() { return wtype; }
protected:
	std::wstring str;
	WordType wtype;
	std::vector<const wchar_t *> Suffixes;
	std::vector<const wchar_t *> Reflections;
};

class MorphologyNoun
{
public:
/*	MorphologyNounParser(const std::wstring &cStr) {
		//
	}*/
};

#endif
