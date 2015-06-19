/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * GameDisplay.hpp                                                             *
 *                                                                             *
 * Copyright (c) 2015 Tory Gaurnier                                            *
 *                                                                             *
 * Distributed under the MIT License.                                          *
 * See accompanying file LICENSE or copy at http://opensource.org/licenses/MIT *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#ifndef GAME_DISPLAY_HPP
#define GAME_DISPLAY_HPP


#include <QGraphicsView>


class GameScene;


class GameDisplay : private QGraphicsView {
	public:
		static void destroy();
		static void init();
		static void setScene(GameScene *scene);

	private:
		static GameDisplay *instance;

		GameDisplay();
		~GameDisplay();
};


#endif
