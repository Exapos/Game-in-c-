#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <ctime>   
#include <cstdlib>
#include <string>

using namespace std;



int main()
{
	int armyFirst = 0;
	int armySecond = 0;
	int armyFirstAlive = false;
	int armySecondAlive = false;
	


	cout << "Wannabe gra" << endl << "Zmackni [ENTER] ke zapnuti hre";
	cin.get();

	cout << "Kolik chces aby mela prvni armada vojaku?: ";
		cin >> armyFirst;
	cout << "Kolik chces aby mela druha armada vojaku?: " ;
		cin >> armySecond;
	cout <<	endl;
	cout << endl;
	cout << "Tva prvni armada ma: " << armyFirst << endl << "Tva druha armada ma: " << armySecond << endl;
	cout << endl;
	cout << endl;
	cout << "Provadi se simulovani bitvy....";
	cout << endl;
	cout << endl;
	Sleep(10000);

	if (armyFirst > armySecond)
	{
		cout << "+----------------------+" << endl;
		cout << "| Prvni armada vyhrala |" << endl;
		cout << "+----------------------+" << endl;
	}
	else if (armyFirst == armySecond) {
		cout << "+---------------------------------------------------------------------------+" << endl;
		cout << "| Ani jedna armada nevyhrala, zbyl posledni 2 sniperi a oba si dali one tap |" << endl;
		cout << "+---------------------------------------------------------------------------+" << endl;
	}
	else {
		cout << "+----------------------+" << endl;
		cout << "| Druha armada vyhrala |" << endl;
		cout << "+----------------------+" << endl;
	}


	cout << endl;
	cout << endl;
	cout << "+--------------+" << endl;
	cout << "| Rekapitulace |" << endl;
	cout << "+--------------+" << endl;
	cout << endl;
	cout << "Prvni armada: " << armyFirst << endl;
	cout << "Druha armada: " << armySecond << endl << endl;

	return 0;
}