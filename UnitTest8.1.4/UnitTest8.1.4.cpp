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

				Assert::IsFalse(foundPattern, L"���������, �� ������ �� ��������.");
				Assert::AreEqual(string("Hello world!"), result, L"����� �� ������� ��������, ������� ������� ����.");
			}

			

			TEST_METHOD(Test_EmptyString)
			{
				string str = "";
				bool foundPattern = false;
				string result = ReplacePatternWithAsterisks(str, foundPattern);

				Assert::IsFalse(foundPattern, L"���������, �� ������ �� �������� � ���������� �����.");
				Assert::AreEqual(string(""), result, L"����� ������� ���������� �������.");
			}

			TEST_METHOD(Test_SingleCharacter)
			{
				string str = "n";
				bool foundPattern = false;
				string result = ReplacePatternWithAsterisks(str, foundPattern);

				Assert::IsFalse(foundPattern, L"���������, �� ������ �� �������� ��� ������ ������� 'n'.");
				Assert::AreEqual(string("n"), result, L"����� �� ������� �������� ��� ������ ������� 'n'.");
			}

			TEST_METHOD(Test_BorderCasePatternAtEnd)
			{
				string str = "xxno";
				bool foundPattern = false;
				string result = ReplacePatternWithAsterisks(str, foundPattern);

				Assert::IsFalse(foundPattern, L"���������, �� ������ �� ��������, ������� ������� ����� �� 'n' �� 'o'.");
				Assert::AreEqual(string("xxno"), result, L"����� �� ������� ��������.");
			

			

		}
	};
}
