#include<iostream>
#include<ctime>
using namespace std;

int main(){
	srand((unsigned int)time(NULL));
	int num;
	num = (rand()%1000 + 1);
	
	cout << num << endl;
	
	system("pause");
	
	return 0;
}
