/*
Следующее четное

На вход дается натуральное число N. Выведите следующее за ним четное число

Формат входных данных
На вход дается целое положительное число N, не превышающее 10000.

Формат выходных данных
Выведите одно целое число - ответ на задачу.

Sample Input 1:
7

Sample Output 1:
8

Sample Input 2:
8

Sample Output 2:
10
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << (((n % 2) == 0) ? (n + 2) : (n + 1));
	return 0;
}