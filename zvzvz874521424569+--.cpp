#include <iostream>
#include <ctime>
using namespace std;
int main() {
	/*const int n = 10;
	int k = 0;
	int arr[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++){
		arr[i] = rand()%51-25;
		cout << arr[i] << " ";
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			k = k + 1;

		}
	}
	cout << k;*/
	//cam1
	/*const int n = 10;
	int sum = 0;
	int arr[n];
	srand(time(nullptr));
	    for (int i = 0; i < n; i++) {
		arr[i] = rand() % 31 - 10;
		cout << arr[i] << " ";
	}
	for (int i = 0; i < n; i++) {
	if (arr[i] %2== 0) {
	sum= sum + arr[i];

		}
	}
	cout << sum;*/
	//cam2
	/*const int n = 10;
	int k = 0;
	int arr[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
	arr[i] = rand() %101-50 ;
    cout << arr[i] << " ";
	}
	    for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
	    k = k + 1;

		}
	}
	    cout << k;*/
//cam3
/*const int n = 10;
int pr = 1;
int arr[n];
srand(time(nullptr));
for (int i = 0; i < n; i++) {
arr[i] = rand() %41-20 ;
cout << arr[i] << " ";
}
	for (int i = 0; i < n; i++) {
	if (arr[i] % 5 != 0) {
	pr = pr * arr[i];

	}
}
	cout << pr;*/
	//cam4
		/*const int n = 10;
		int sum = 0;
		int arr[n];
		srand(time(nullptr));
		for (int i = 0; i < n; i++) {
		arr[i] = rand() %20-5 ;
		cout << arr[i] << " ";
		}
			for (int i = 0; i < n; i++) {
			if (arr[i] % 5 != 0 || arr[i] % 3 != 0) {
			sum = sum + arr[i];

			}
		}
			cout << (float)sum/n;*/
	//cam5
		/*const int n = 10;
		int pr = 1;
		int arr[n];
		srand(time(nullptr));
		for (int i = 0; i < n; i++) {
		arr[i] = rand() %15+1 ;
		cout << arr[i] << " ";
		}
			for (int i = 1; i < n; i+=2) {
			if (i % 2 != 0) {
			pr = pr * arr[i];

			}
		}
			cout <<sqrt((double) pr);*/
	/*Array2.Дано целое число N(> 0).Сформировать и вывести целочисленный
		массив размера N, содержащий степени двойки от первой до N - й:1, 2, 4,
		8, 16, . . . .*/
	/*int const n;
	int arr[0]=1;
	for (int i = 1; i < 10; i++) {
		arr[i] = arr[i - 1] * 2;
	}
	cout << arr;*/
//Array3.Дано целое число N(> 1), а также первый член A и разность D арифметической прогрессии.Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии :
//A, A + D, A + 2·D, A + 3·D
int n;
cin >> n; int a, d;
cin >> a >> d;
int arr[n];
int arr[0] = a;
for (int i = a; i < n; i++) {
	arr[i] = arr[i + d] * 2;
}
cout << arr;






}