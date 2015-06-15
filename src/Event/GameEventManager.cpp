/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * GameEventManager.cpp                                                                   *
 *                                                                             *
 * Copyright (c) 2015 Tory Gaurnier                                            *
 *                                                                             *
 * Distributed under the MIT License.                                          *
 * See accompanying file LICENSE or copy at http://opensource.org/licenses/MIT *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include "GameEventManager.hpp"


GameEventManager *GameEventManager::instance = nullptr;


/* * * * * * * * * * * * *
 * STATIC PUBLIC METHODS *
 * * * * * * * * * * * * */


void GameEventManager::destroy() {
	if(instance != nullptr) {
		delete instance;
		instance = nullptr;
	}
}


void GameEventManager::dispatchEvent(GameEvent event) {
	emit instance->eventDispatched(event);
}


const GameEventManager * const GameEventManager::getInstance() {
	return instance;
}


void GameEventManager::init() {
	if(instance == nullptr) {
		instance = new GameEventManager();
	}
}


/* * * * * * * * * *
 * PRIVATE METHODS *
 * * * * * * * * * */


GameEventManager::GameEventManager() { }


GameEventManager::~GameEventManager() { }
