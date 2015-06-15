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
