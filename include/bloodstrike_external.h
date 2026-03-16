#ifndef BLOODSTRIKE_EXTERNAL_H
#define BLOODSTRIKE_EXTERNAL_H

class GameEntity {
public:
    virtual void update() = 0; // Pure virtual function for updating the entity
};

class Player : public GameEntity {
public:
    void update() override;
    // Additional player-specific methods and attributes
};

class Item : public GameEntity {
public:
    void update() override;
    // Additional item-specific methods and attributes
};

class BloodstrikeExternal {
public:
    void initialize();
    // Additional methods for external interactions with the game
};

#endif // BLOODSTRIKE_EXTERNAL_H
