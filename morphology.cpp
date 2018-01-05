#include "morphology.h"
#include <iostream>
#ifdef _WIN32
#include <Windows.h>
#endif

int main(int argc, char *argv[]) {
#ifdef _WIN32
	//char *pl = setlocale (LC_ALL,"Russian_Russia.20866"); // koi8-r
	//char *pl = setlocale (LC_ALL,"Russian_Russia.65001"); // utf-8
	//char *pl = setlocale(LC_ALL, "Russian_Russia.1251"); // cp-1251
	//char *pl = setlocale (LC_ALL,"Russian_Russia.28595"); // iso8859-5
	//char *pl = setlocale (LC_ALL,"Russian_Russia.866"); // cp-866
	//char *pl = setlocale(LC_ALL, "Russian");
	//SetConsoleOutputCP(1251);
#endif
	setlocale(LC_ALL, "");
	const wchar_t *cTestWord = L"Тестовое слово";
	wprintf(L"Morphology parser\n");
	wprintf(L"%s\n", cTestWord);
	auto parser = MorphologyRU::VerbParser(std::wstring(cTestWord));
	/*for(auto cReflection : parser.cReflections())
	{
	cReflection;
	}*/
	std::getc(stdin);
	return 0;
}
