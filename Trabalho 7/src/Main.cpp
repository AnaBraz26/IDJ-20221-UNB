#include "../include/Game.h"

int main(int argc, char** argv) {
	Game::GetInstance().Push(new TitleState());

	Game::GetInstance().Run();

	return 0;
}