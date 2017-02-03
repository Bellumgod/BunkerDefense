#pragma once
#include "SceneManager.h"
#include "RenderManager.h"
#include "ObjectManager.h"
#include "Common.h"

class PlayScene : public IScene
{
	

public:
	PlayScene();
	~PlayScene();

	void OnEnter();
	void OnUpdate(float deltaTime);
	void OnExit();
	void OnDraw();
};