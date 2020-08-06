#include "StateMachine.h"

void StateMachine::Init()
{
	std::unique_ptr<GameObject> p1Paddle = std::make_unique<GameObject>(Paddle());
	std::unique_ptr<GameObject> p2Paddle = std::make_unique<GameObject>(Paddle());
	std::unique_ptr<GameObject> ball = std::make_unique<GameObject>(Ball());
	gameObjects["p1Paddle"] = std::pair <bool, std::unique_ptr<GameObject>> (false, std::move(p1Paddle));
	gameObjects["p2Paddle"] = std::pair <bool, std::unique_ptr<GameObject>>(false, std::move(p2Paddle));
	gameObjects["ball"] = std::pair <bool, std::unique_ptr<GameObject>>(false, std::move(ball));
}
