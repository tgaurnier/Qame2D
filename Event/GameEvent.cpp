/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * GameEvent.cpp                                                               *
 *                                                                             *
 * Copyright (c) 2015 Tory Gaurnier                                            *
 *                                                                             *
 * Distributed under the MIT License.                                          *
 * See accompanying file LICENSE or copy at http://opensource.org/licenses/MIT *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include "GameEvent.hpp"


/* * * * * * * * * *
 * PUBLIC METHODS  *
 * * * * * * * * * */


GameEvent::GameEvent(void *source, GameEventType type, void *data)
: type(type), source(source), data(data) { }


void * GameEvent::getData() {
	return data;
}


void * GameEvent::getSource() {
	return source;
}


/* * * * * * * * * * *
 * PUBLIC OPERATORS  *
 * * * * * * * * * * */


GameEvent::operator GameEventType() {
	return type;
}


bool GameEvent::operator ==(GameEventType type) {
	return this->type == type;
}
