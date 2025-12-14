#ifndef GAMEVIEW_H
#define GAMEVIEW_H

#include <SFML/Graphics.hpp>

struct GameView
{
    sf::RenderWindow window;
    sf::View camera;
    sf::Vector2i windowSize;
    sf::Clock clock;
};

typedef void (*OnUpdate)(void* pData, GameView& view, float deltaSec);
typedef void (*OnDraw)(void* pData, GameView& view);

GameView* NewGameView(const sf::Vector2i& windowSize);

void EnterGameLoop(GameView& view, OnUpdate onUpdate, OnDraw onDraw, void* pData);

void SetCameraCenter(GameView& view, const sf::Vector2f& center);

void DestroyGameView(GameView*& pView);

#endif