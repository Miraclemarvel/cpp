#include<iostream>
#include<string>
using namespace std;

void func(){
	int **arr = new int *[10];
	for (int i = 0; i < 10; i++){
		arr[i] = new int[10];
	}
	int sum = 0;
	for (int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			arr[i][j] = i + j;
			sum++;
		}
	}
	cout << sum << endl;
	for (int i = 0; i < 10; i++){
			delete[] (arr[i]);
		}
		delete[] (arr);

	cout << "ÄÉÄá: " << arr[0][0] << endl;
	for (int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			cout << arr[i][j] << endl;
		}
	}
	}
void f(){
	int * (*arr) = new int*[10];
	for (int i = 0; i < 10; i++){
		arr[i] = new int[10];
	}
}

int main()
{	
	func();

	system("pause");
	
	return 0;
}