/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * GameScene.hpp                                                               *
 *                                                                             *
 * Copyright (c) 2015 Tory Gaurnier                                            *
 *                                                                             *
 * Distributed under the MIT License.                                          *
 * See accompanying file LICENSE or copy at http://opensource.org/licenses/MIT *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#ifndef GAME_SCENE_HPP
#define GAME_SCENE_HPP


#include <QGraphicsScene>

#include <Box2D/Box2D.h>


class World;


class GameScene : public QGraphicsScene {
	// Inherit constructors
	using QGraphicsScene::QGraphicsScene;


	public:
		void enablePhysics(
			b2Vec2 gravity,
			float32 time_step,
			int32 velocity_iterations,
			int32 position_iterations
		);

		bool isPhysicsEnabled();

		virtual void update();

		World * world();


	private:
		World *phys_world = nullptr;
};


#endif
