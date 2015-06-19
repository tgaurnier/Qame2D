/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Game.hpp                                                                    *
 *                                                                             *
 * Copyright (c) 2015 Tory Gaurnier                                            *
 *                                                                             *
 * Distributed under the MIT License.                                          *
 * See accompanying file LICENSE or copy at http://opensource.org/licenses/MIT *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#ifndef GAME_HPP
#define GAME_HPP


#include <QObject>


class GameEvent;


class Game : public QObject {
	Q_OBJECT


	public:
		Game();


	public slots:
		virtual void manageGameEvent(GameEvent *event) = 0;
		virtual void update() = 0;
};


#endif
