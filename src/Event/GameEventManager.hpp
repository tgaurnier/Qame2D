#ifndef GAME_EVENT_MANAGER_HPP
#define GAME_EVENT_MANAGER_HPP


#include <QObject>

#include "GameEvent.hpp"


class GameEventManager : public QObject {
	Q_OBJECT


	public:
		static void destroy();
		static void dispatchEvent(GameEvent event);
		static const GameEventManager * const getInstance();
		static void init();


	signals:
		void eventDispatched(GameEvent event);


	private:
		static GameEventManager *instance;

		GameEventManager();
		~GameEventManager();
};


#endif
