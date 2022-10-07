#ifndef SPRITE_H
#define SPRITE_H
#define INCLUDE_SDL_IMAGE
#define INCLUDE_SDL
#include "SDL_include.h"
#include "Component.h"
#include "Resources.h"
#include "GameObject.h"
#include "Timer.h"
#include <string>
#include <stdio.h>

class Sprite: public Component {
private:
   SDL_Texture* texture;
   int width;
   int height;
   SDL_Rect clipRect;
   Vec2 scale;

   //Trabalho 6
   int frameCount;
   int currentFrame;
   float timeElapsed;
   float frameTime;
   Timer *selfDestructCount;
   float secondsToSelfDestruct;
     
public:
   Sprite(GameObject &associated);
   Sprite(GameObject &associated, std :: string file, int frameCount = 1, float frameTime = 1, float secondsToSelfDestruct = 0);
   ~Sprite();
   void Open(std :: string file);
   void SetClip(int x, int y, int w, int h);
   void Render();
   void Render(float x, float y);//, float w, float h);
   int GetWidth();
   int GetHeight();
   bool IsOpen();
   void Update(float dt);
   bool Is(std :: string type);
   void Start();
   void SetScale(float scaleX, float scaleY);
   Vec2 GetScale();

   // Trabalho 6  
   void SetFrame(int frame);
   void SetframeCount(int frameCount);
   void SetFrameTime(float frameTime);
   void NotifyCollision(GameObject& other);


};

#endif 