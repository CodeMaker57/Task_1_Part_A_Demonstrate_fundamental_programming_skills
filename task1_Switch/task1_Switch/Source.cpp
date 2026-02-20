#include <iostream>
#include <cassert>

//define the enumerator PotionType with the types (HEALTH, SPEED, STRENGTH, MAGIC)
enum PotionType {
	HEALTH,
	SPEED,
	STRENGTH,
	MAGIC
};

//define the structure Player 
struct Player {

	//initialize the stat variables
	int health = 30;
	int speed = 10;
	int strength = 15;
	int magic = 30;
};

Player applyPotion(PotionType type, Player player); // define the Player(structure) function applyPotion with two parameters (enumerator PotionType (type) and Player structure (player))

//main body
int main() {
	const Player player; //create a constant Player structure called player
	Player altered_Player;

	altered_Player = applyPotion(PotionType::HEALTH, player); //call the applyPotion function with potion type of strength

	//check if the health potion alters each value correctly
	assert(altered_Player.health == 100);
	assert(altered_Player.speed == 10);
	assert(altered_Player.strength == 15);
	assert(altered_Player.magic == 30);


	altered_Player = applyPotion(PotionType::SPEED, player); //call the applyPotion function with potion type of strength

	//check if the speed potion alters each value correctly
	assert(altered_Player.health == 20);
	assert(altered_Player.speed == 50);
	assert(altered_Player.strength == 5);
	assert(altered_Player.magic == 10);


	altered_Player = applyPotion(PotionType::STRENGTH, player); //call the applyPotion function with potion type of strength

	//check if the strength potion alters each value correctly
	assert(altered_Player.health == 60);
	assert(altered_Player.speed == 25);
	assert(altered_Player.strength == 200);
	assert(altered_Player.magic == 30);


	altered_Player = applyPotion(PotionType::MAGIC, player); //call the applyPotion function with potion type of strength

	//check if the magic potion alters each value correctly
	assert(altered_Player.health == 30);
	assert(altered_Player.speed == 10);
	assert(altered_Player.strength == 10);
	assert(altered_Player.magic == 100);
}


//main body of function applyPotion
Player applyPotion(PotionType type, Player player) {

	//create a PotionType variable that holds the potion type the function was called with
	PotionType potion = type;

	//check for each possible value of potion (HEALTH, SPEED, STRENGTH, MAGIC) and alter the values accordingly
	switch (potion) {
	case(HEALTH):
		player.health = 100;
		break;
	case(SPEED):
		player.speed = 50;
		player.health -= 10;
		player.strength -= 10;
		player.magic = 10;
		break;
	case(STRENGTH):
		player.speed = 25;
		player.health = player.health * 2;
		player.strength = 200;
		break;
	case(MAGIC):
		player.strength = 10;
		player.magic = 100;
		break;
	}
	return player; //return the altered player
}