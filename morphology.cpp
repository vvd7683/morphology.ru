#include "morphology.h"

int main(int argc, char *argv[]) {
	//setlocale(LC_ALL, ".1251");
	const wchar_t *cTestWord = L"Тестовое слово";
	wprintf(L"Morphology parser\n");
	auto parser = MorphologyRU::VerbParser(std::wstring(cTestWord));
	/*for(auto cReflection : parser.cReflections())
	{
		cReflection;
	}*/
	std::getc(stdin);
	return 0;
}
