#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <ctime>   
#include <cstdlib>
#include <string>
using namespace std;

int createZombie() {
	if (rand() % 67 < 10)
		return 11;


	else 
		return	rand() % 10 + 1;
}

int	main()
{
	srand(time(NULL));
	char enter;

	int playerAlive = true;
	int playerSkill = 9;
	int playerScore = 1;
	string playerName;
	int zombieCount = 0;
	int zombieKilled = 0;

	cout << "Vitej v Nacistickej simulator." << endl << "Zmackni [ENTER] ke zapnuti hre";
	cin.get();

	cout << "Napis jsem svoje jmeno! (Kazdej vi ze jsi Hanz): ";
	getline(cin, playerName);

	cout << "Kolik hanzu chces fightit: ";
		cin >> zombieCount;

		cout << "Zabij vsechny Hanze!!! " << playerName << "!" << endl;

		while (playerAlive && zombieKilled < zombieCount)
		{
			int zombieSkill = createZombie();
			
			if (zombieSkill > 10)
			{
				cout << endl << "Tady jde boss Hanz!" << endl;
			}
			else {
				cout << endl << "Tady jde Hanz! " << "level " <<zombieSkill + 1 << endl;
			}
			cout << "Boj..." << endl;
			Sleep(5000);

				if (playerSkill < zombieSkill)
				{
					playerAlive = false;
					cout << "Umrel jsi debile." << endl;
				}
				else {
					if (playerSkill - zombieSkill > 7){
						cout << "Co jsi s nim udelal?! Vzdyt se jenom branil" << endl;
						playerScore = playerScore * 2;
					}
					else if (playerSkill - zombieSkill > 5)
					{
						cout << "Serizl jsi mu hlavu zmrdovy!" << endl;
						playerScore = playerScore * 2;
					}
					else if (playerSkill - zombieSkill > 0) {
						cout << "Zabil jsi chudaka Hanze ;( !" << endl;
						playerScore = playerScore * 2;
					}
					else {
						cout << "Zabil jsi Hanze, ale jsi zraneny" << endl;
					}

					zombieKilled++;
				}
				cout << endl;
				Sleep(1);
		}
		if (zombieKilled == zombieCount) {
			// victory
			cout << "Vyhral jsi nad Hanzama!" << endl;
		}
		else {
			// lost
			cout << "Skoncil jsi v plynnovy komore unlako." << endl;
		}
		cout << "Zombies killed: " << zombieKilled << endl;
		cout << "Final score: " << playerScore << endl << endl;
}