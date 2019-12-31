// A Debugging Exercise by Marc Chee (marcc@aie.edu.au)
// 18/12/2016

// Marines are trying to "de-bug" an area (haha . . . haha)
// However something's up with this code . . . figure out what's going wrong
// When you're finished, there should be no compiler errors or warnings
// The encounter should also run and finish correctly as per the rules in the comments

// In many cases there are differences between what's in otherwise identical sections
// for Marines and Zerglings. It's good to be able to tell what the differences are
// and why they might be important.

// What's efficient and inefficient? Why?
// What uses more memory and what doesn't? Why?

// Last modified by Terry Nguyen (terryn@aie.edu.au)
// 10/09/2019

#include <iostream>
#include "Marine.h"
#include "Zergling.h"
#include "Entity.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int squadSize;
	int swarmSize;


	/*Marine m;
	Zergling z;*/

	int choiceMari = 3;
	int choiceZerg = 9;
	int damage = 0;

	bool marineAlive(Marine * swarmArr, int arrSize);
	bool zerglingAlive(Zergling * swarmArr, int arrSize);

	//This asks the player about the amount either side should have.
	cout << "How many Marines will enter the battle?" << endl;
	cin >> choiceMari;

	cout << "How many Zerglings will rampage today?" << endl;
	cin >> choiceZerg;

	squadSize = choiceMari;
	swarmSize = choiceZerg;

	Marine** squad = new Marine*[squadSize];
	Zergling** swarm = new Zergling*[swarmSize];

	// Set up the Squad and the Swarm at their initial sizes listed above

	for (int i = 0; i < squadSize; i++)
	{
		squad[i] = new Marine[squadSize];
	}


	for (int o = 0; o < swarmSize; o++)
	{
		swarm[o] = new Zergling[swarmSize];
	}

	cout << " A squad of " << squadSize << " marines approaches a swarm of " << swarmSize << " Zerglings and opens fire! The Zerglings charge!\n" << endl;

	// Attack each other until only one team is left alive

	while (marineAlive(squad, squadSize) == true || zerglingAlive(swarm, swarmSize) == true) // If anyone is left alive to fight . . .
	{
		if (squadSize > 0 && swarmSize > 0)
			cout << "---The Marines attack!)\n" << endl; //The Marines start their attack.

		for (int i = 0; i < squadSize; i++) // go through the squad
		{

			if (squadSize > choiceMari) //Check to see if squadSize doesn't go below 0.
				squadSize = 0;

			// each marine will attack the first zergling in the swarm
			if (!swarmSize == 0)
			{
				cout << "A marine fires for " << squad[i].attack() << " damage. " << endl;

				damage = squad[i].attack();

				swarm[0].takeDamage(damage);

				if (!swarm[0].isAlive()) // if the zergling dies, it is marked as such
				{
					cout << " The zergling target has been exterminated." << endl;

					//swarm.erase(swarm.begin());
					swarmSize--;
				}
				cout << " There are " << swarmSize << " zerglings left.\n" << endl;
			}

		}

		//The rest of this is just a repeat of the Marines portion located above.
		if (swarmSize > 0 && squadSize > 0)
			cout << "---The Zerglings attack!)\n" << endl;


		for (int i = 0; i < squadSize; i++) // loop through zerglings
		{
			if (swarmSize > choiceZerg)
				swarmSize = 0;

			if (!squadSize == 0)
			{
				cout << "A zergling attacks for " << swarm[i].attack() << " damage." << endl;

				damage = squad[i].attack();

				squad[0].takeDamage(damage);

				if (!squad[0].isAlive())
				{
					cout << "The marine succumbs to his wounds." << endl;

					//squad.erase(squad.begin());
					squadSize--;
				}
				cout << "There are " << squadSize << " marines left." << endl;
			}
		}

	}

	// Once one team is completely eliminated, the fight ends and one team wins
	cout << "The fight is over: ";

	if (marineAlive(squad, squadSize) == true)
		cout << "The Marines win." << endl;

	else if (zerglingAlive(swarm, swarmSize) == true)
		cout << "The Zerg win." << endl;

	else
		cout << "Its a Tie" << endl;

	cout << "Scroll up to see the damage" << endl;
}

// Is there a Marine Alive?
bool marineAlive(Marine * squadArr, int arrSize)
{
	return arrSize > 0;

}

// Is there a zergling Alive
bool zerglingAlive(Zergling * swarmArr, int arrSize)
{
	return arrSize > 0;
}
