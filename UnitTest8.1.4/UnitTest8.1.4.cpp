#include "pch.h"
#include "CppUnitTest.h"
#include "../lb8.1.4/lb8.1.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest814
{
	TEST_CLASS(UnitTest814)
	{
	public:
		
		

			TEST_METHOD(Test_NoPatternPresent)
			{
				string str = "Hello world!";
				bool foundPattern = false;
				string result = ReplacePatternWithAsterisks(str, foundPattern);

				Assert::IsFalse(foundPattern, L"Очікується, що патерн не знайдено.");
				Assert::AreEqual(string("Hello world!"), result, L"Рядок не повинен змінитися, оскільки патерну немає.");
			}

			

			TEST_METHOD(Test_EmptyString)
			{
				string str = "";
				bool foundPattern = false;
				string result = ReplacePatternWithAsterisks(str, foundPattern);

				Assert::IsFalse(foundPattern, L"Очікується, що патерн не знайдено в порожньому рядку.");
				Assert::AreEqual(string(""), result, L"Рядок повинен залишитися порожнім.");
			}

			TEST_METHOD(Test_SingleCharacter)
			{
				string str = "n";
				bool foundPattern = false;
				string result = ReplacePatternWithAsterisks(str, foundPattern);

				Assert::IsFalse(foundPattern, L"Очікується, що патерн не знайдено для одного символу 'n'.");
				Assert::AreEqual(string("n"), result, L"Рядок не повинен змінитися для одного символу 'n'.");
			}

			TEST_METHOD(Test_BorderCasePatternAtEnd)
			{
				string str = "xxno";
				bool foundPattern = false;
				string result = ReplacePatternWithAsterisks(str, foundPattern);

				Assert::IsFalse(foundPattern, L"Очікується, що патерн не знайдено, оскільки відсутня літера між 'n' та 'o'.");
				Assert::AreEqual(string("xxno"), result, L"Рядок не повинен змінитися.");
			

			

		}
	};
}
