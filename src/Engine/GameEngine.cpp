/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * GameEngine.cpp                                                              *
 *                                                                             *
 * Copyright (c) 2015 Tory Gaurnier                                            *
 *                                                                             *
 * Distributed under the MIT License.                                          *
 * See accompanying file LICENSE or copy at http://opensource.org/licenses/MIT *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include "GameEngine.hpp"

#include <QApplication>
#include <QTimer>

#include "../Physics/World.hpp"


GameEngine *GameEngine::instance = nullptr;


/* * * * * * * * * * * * *
 * STATIC PUBLIC METHODS *
 * * * * * * * * * * * * */


void GameEngine::destroy() {
	if(instance != nullptr) {
		delete instance;
		instance = nullptr;
	}
}


void GameEngine::init(int argc, char **argv) {
	if(instance == nullptr) {
		instance = new GameEngine();
	}

	if(!qApp) {
		QApplication app(argc, argv);
	}
}


bool GameEngine::isRunning() {
	return instance != nullptr && instance->running;
}


void GameEngine::run() {
	if(instance != nullptr && !instance->running) {
		instance->game_loop_timer->start(0);
		result = qApp->exec();
	}
}


/* * * * * * * * * *
 * PRIVATE METHODS *
 * * * * * * * * * */


GameEngine::GameEngine() {
	game_loop_timer = new QTimer(this);
	connect(game_loop_timer, SIGNAL(timeout()), this, SLOT(gameLoop()));
}


GameEngine::~GameEngine() { }


void GameEngine::gameLoop() {
	//TODO
}
