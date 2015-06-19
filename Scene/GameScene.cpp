/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * GameScene.cpp                                                               *
 *                                                                             *
 * Copyright (c) 2015 Tory Gaurnier                                            *
 *                                                                             *
 * Distributed under the MIT License.                                          *
 * See accompanying file LICENSE or copy at http://opensource.org/licenses/MIT *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include "GameScene.hpp"

#include "../Physics/World.hpp"


/* * * * * * * * * * * * *
 * STATIC PUBLIC METHODS *
 * * * * * * * * * * * * */


void GameScene::enablePhysics(
	b2Vec2 gravity,
	float32 time_step,
	int32 velocity_iterations,
	int32 position_iterations
) {
	phys_world = new World(gravity, time_step, velocity_iterations, position_iterations);
}


bool GameScene::isPhysicsEnabled() {
	return phys_world != nullptr;
}


World * GameScene::world() {
	return phys_world;
}
