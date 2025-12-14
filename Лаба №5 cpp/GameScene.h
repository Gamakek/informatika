#ifndef GAMESCENE_H
#define GAMESCENE_H

#include "TmxLevel.h"

struct GameScene
{
    TmxLevel level;
    TmxObject player;
    std::vector<TmxObject> enemies;
    std::vector<TmxObject> coins;
    std::vector<TmxObject> blocks;
    sf::Vector2f startPosition;
};

GameScene* NewGameScene();

void UpdateGameScene(void* pData, class GameView& view, float deltaSec);

void DrawGameScene(void* pData, class GameView& view);

void DestroyGameScene(GameScene*& pScene);

#endif 