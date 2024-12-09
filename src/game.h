#pragma once
#include <sol/sol.hpp>
#include <stdexcept> // 標準例外クラスを使う場合
class Game final{
private: 
	static sol::state lua;
public:
	Game();
	~Game();
	void draw()const;
	void update();
	int initialize();
	int finalize();
	int mainLoop();
};
