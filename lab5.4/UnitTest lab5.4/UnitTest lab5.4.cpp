#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

double S0(const int K, const int N);
double S1(const int K, const int N, const int i);
double S2(const int K, const int N, const int i);
double S3(const int K, const int N, const int i, double t);
double S4(const int K, const int N, const int i, double t);

namespace UnitTestlab54
{
	TEST_CLASS(UnitTestlab54)
	{
	public:

		TEST_METHOD(TestS0)
		{
			int K = 1; // Замініть це значення на те, яке ви хочете перевірити
			int N = 10; // Замініть це значення на те, яке ви хочете перевірити
			double expected_result = 0.0; // Очікуваний результат для порівняння
			double result = S0(K, N);
			Assert::AreEqual(expected_result, result, 1e-6); // Порівняння результату з очікуваним значенням з точністю 1e-6
		}

		TEST_METHOD(TestS1)
		{
			int K = 1; // Замініть це значення на те, яке ви хочете перевірити
			int N = 10; // Замініть це значення на те, яке ви хочете перевірити
			int i = K;
			double expected_result = 0.0; // Очікуваний результат для порівняння
			double result = S1(K, N, i);
			Assert::AreEqual(expected_result, result, 1e-6); // Порівняння результату з очікуваним значенням з точністю 1e-6
		}

		TEST_METHOD(TestS2)
		{
			int K = 1; // Замініть це значення на те, яке ви хочете перевірити
			int N = 10; // Замініть це значення на те, яке ви хочете перевірити
			int i = N;
			double expected_result = 0.0; // Очікуваний результат для порівняння
			double result = S2(K, N, i);
			Assert::AreEqual(expected_result, result, 1e-6); // Порівняння результату з очікуваним значенням з точністю 1e-6
		}

		TEST_METHOD(TestS3)
		{
			int K = 1; // Замініть це значення на те, яке ви хочете перевірити
			int N = 10; // Замініть це значення на те, яке ви хочете перевірити
			int i = K;
			double t = 0.0;
			double expected_result = 0.0; // Очікуваний результат для порівняння
			double result = S3(K, N, i, t);
			Assert::AreEqual(expected_result, result, 1e-6); // Порівняння результату з очікуваним значенням з точністю 1e-6
		}

		TEST_METHOD(TestS4)
		{
			int K = 1; // Замініть це значення на те, яке ви хочете перевірити
			int N = 10; // Замініть це значення на те, яке ви хочете перевірити
			int i = N;
			double t = 0.0;
			double expected_result = 0.0; // Очікуваний результат для порівняння
			double result = S4(K, N, i, t);
			Assert::AreEqual(expected_result, result, 1e-6); // Порівняння результату з очікуваним значенням з точністю 1e-6
		}
	};
}
