/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * GameEngine.hpp                                                              *
 *                                                                             *
 * Copyright (c) 2015 Tory Gaurnier                                            *
 *                                                                             *
 * Distributed under the MIT License.                                          *
 * See accompanying file LICENSE or copy at http://opensource.org/licenses/MIT *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#ifndef GAME_ENGINE_HPP
#define GAME_ENGINE_HPP


#include <QObject>


class QTimer;


class GameEngine : QObject {
	Q_OBJECT
	public:
		static int result;

		static void destroy();
		static void init(int argc, char **argv);
		static bool isRunning();
		static void run();


	private:
		static GameEngine *instance;
		QTimer *game_loop_timer	=	nullptr;
		bool running			=	false;

		GameEngine();
		~GameEngine();

	private slots:
		void gameLoop();
};


#endif
