#pragma once
#include <unordered_map>
#include<memory>
#include "State.h"
#include "Paddle.h"
#include "Ball.h"
class StateMachine
{
public:
	State currentState;
	void ChangeState(State state);
	void ActivateGameObj(std::string key);

	void Init();
	void Update();
	void Render();
private:
	std::unordered_map<std::string, State> states;
	std::map <std::string, std::pair<bool, std::unique_ptr<GameObject>>> gameObjects;
	
};

