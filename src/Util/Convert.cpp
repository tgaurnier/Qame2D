/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Makefile                                                                    *
 *                                                                             *
 * Copyright (c) 2015 Tory Gaurnier                                            *
 *                                                                             *
 * Distributed under the MIT License.                                          *
 * See accompanying file LICENSE or copy at http://opensource.org/licenses/MIT *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include "Convert.hpp"


#include <QApplication>
#include <QDebug>
#include <QScreen>


float Convert::pixels_per_meter = 0.0f;


/* * * * * * * * * * * * *
 * Static Public Methods *
 * * * * * * * * * * * * */


void Convert::init(float Converts_per_screen_height) {
	pixels_per_meter = qApp->primaryScreen()->size().height() / Converts_per_screen_height;
}


float Convert::metersToPixels(float meters) {
	return meters * pixels_per_meter;
}


float Convert::pixelsToMeters(float pixels) {
	return pixels / pixels_per_meter;
}


b2Vec2 Convert::screenToWorldPos(b2Vec2 screen_pos) {
	b2Vec2 world_pos(
		screen_pos.x / pixels_per_meter,
		-(screen_pos.y / pixels_per_meter)
	);

	return world_pos;
}


float Convert::screenToWorldPosX(float screen_x) {
	return screenToWorldPos(b2Vec2(screen_x, 0.0f)).x;
}


float Convert::screenToWorldPosY(float screen_y) {
	return screenToWorldPos(b2Vec2(0.0f, screen_y)).y;
}


b2Vec2 Convert::worldToScreenPos(b2Vec2 world_pos) {
	b2Vec2 screen_pos(
		world_pos.x * pixels_per_meter,
		-(world_pos.y * pixels_per_meter)
	);

	return screen_pos;
}


float Convert::worldToScreenPosX(float world_x) {
	return worldToScreenPos(b2Vec2(world_x, 0.0f)).x;
}


float Convert::worldToScreenPosY(float world_y) {
	return worldToScreenPos(b2Vec2(0.0f, world_y)).y;
}
