#pragma once

#define VIEW_WIDTH		800
#define VIEW_HEIGHT		600

#define FPS				100		// �ʴ� �����Ӽ�

#define KEY_COUNT		256
#define MOUSE_COUNT		3

#define SOUND_MAX_CHANNEL	10

#define NEW_OBJECT(p, type) p = new type
#define DELETE_OBJECT(p) if ((p) != NULL) { delete (p); (p) = NULL; }
#define DELETE_OBJECTS(p) if ((p) != NULL) { delete[] (p); (p) = NULL; }
#define FOR_LIST(type, li) for (list<type>::iterator it = li.begin(); it != li.end(); it++)
#define DpELETE_OBJECT()	if ((p) != NULL) { delete (p); (p) = NULL; }
#define DELETE_OBJECTS(p)	if ((p) != NULL) { delete[] (p); (p) = NULL; }
#define RELEASE_OBJECT(p)	if ((p) != NULL) { (p)->Release(); (p) = NULL; }


enum KEY_STATE
{
	KEY_NONE, KEY_DOWN, KEY_UP, KEY_PRESS,
};

enum MOUSE_STATE
{
	MOUSE_NONE, MOUSE_DOWN, MOUSE_UP, MOUSE_PRESS, MOUSE_DRAG,
};

enum MOUSE_BUTTON
{
	MOUSE_LEFT, MOUSE_CENTER, MOUSE_RIGHT,
};

enum WND_TAG
{
	WND_NONE, WND_MAIN,
};

enum ALIGN_TYPE
{
	ALIGN_LEFT = 0, ALIGN_CENTER = 1, ALIGN_RIGHT = 2,
};

enum GRAPHICS_TYPE
{
	GRAPHICS_NONE, GRAPHICS_LINE, GRAPHICS_RECT, GRAPHICS_CIRCLE,
};

enum CAMERA_TAG
{
	CAM_NONE, CAM_MAIN, CAM_UI, CAM_MINIMAP,
};

enum SCENE_TAG
{
	SCENE_NONE, SCENE_START, SCENE_PLAY, SCENE_SHOP, SCENE_END,
};

enum OBJ_TAG
{
	OBJ_NONE, OBJ_PLAYER,
};

//02-06 �̽¹�
enum TEXT_ALIGN
{
	TEXT_ALIGN_LEFT = 0, TEXT_ALIGN_RIGHT = 1, TEXT_ALIGN_CENTER = 2,
};