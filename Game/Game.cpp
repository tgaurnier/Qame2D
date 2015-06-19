/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Game.cpp                                                                    *
 *                                                                             *
 * Copyright (c) 2015 Tory Gaurnier                                            *
 *                                                                             *
 * Distributed under the MIT License.                                          *
 * See accompanying file LICENSE or copy at http://opensource.org/licenses/MIT *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include "Game.hpp"

#include "../Event/GameEvent.hpp"
#include "../Event/GameEventManager.hpp"


Game::Game() {
	connect(
		GameEventManager::getInstance(), SIGNAL(eventDispatched(GameEvent *)),
		this, SLOT(manageGameEvent(GameEvent *))
	);
}
