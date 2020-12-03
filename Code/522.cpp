//模板函数
// https://www.runoob.com/cplusplus/cpp-templates.html
#include <iostream>
using namespace std;

template<class T>
T get_sum(T* array, int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += array[i];
	}
	return sum;
}

int main()
{
  int arr_int[6] = { 1, 2, 3, 4, 5, 6 };
  double arr_double[6] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
  cout << get_sum(arr_int, 6) << endl;
  cout << get_sum(arr_double, 6) << endl;
  return 0;
}