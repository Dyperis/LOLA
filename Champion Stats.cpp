#include <iostream>
using namespace std;
#include <string>
using namespace std;

class Champion {
private:
    string name;

    // Defensive stats
    double health;
    double healthGrowth;
    double healthRegen;
    double healthRegenGrowth;
    double armor;
    double armorGrowth;
    double magicResist;
    double magicResistGrowth;

    // Offensive stats
    double attackDamage;
    double attackDamageGrowth;
    double attackSpeed;
    double attackSpeedGrowth;

    // Utility stats
    double mana;
    double manaGrowth;
    double manaRegen;
    double manaRegenGrowth;
    double movementSpeed;
    double attackRange;

public:
    // Constructor
    Champion(
        string name,
        double health,
        double healthGrowth,
        double healthRegen,
        double healthRegenGrowth,
        double armor,
        double armorGrowth,
        double magicResist,
        double magicResistGrowth,
        double attackDamage,
        double attackDamageGrowth,
        double attackSpeed,
        double attackSpeedGrowth,
        double mana,
        double manaGrowth,
        double manaRegen,
        double manaRegenGrowth,
        double movementSpeed,
        double attackRange
    ) {
        this->name = name;

        this->health = health;
        this->healthGrowth = healthGrowth;
        this->healthRegen = healthRegen;
        this->healthRegenGrowth = healthRegenGrowth;

        this->armor = armor;
        this->armorGrowth = armorGrowth;
        this->magicResist = magicResist;
        this->magicResistGrowth = magicResistGrowth;

        this->attackDamage = attackDamage;
        this->attackDamageGrowth = attackDamageGrowth;
        this->attackSpeed = attackSpeed;
        this->attackSpeedGrowth = attackSpeedGrowth;

        this->mana = mana;
        this->manaGrowth = manaGrowth;
        this->manaRegen = manaRegen;
        this->manaRegenGrowth = manaRegenGrowth;

        this->movementSpeed = movementSpeed;
        this->attackRange = attackRange;
    }
    string getName() {
        return name;
    }
};

int main() {
    Champion myChampion("Ahri", 500, 100, 50, 10, 20, 5, 20, 5, 60, 10, 1.5, 0.5, 300, 50, 50, 10, 325, 125);
    cout << "Champion: " << myChampion.getName() << endl;
    return 0;
}