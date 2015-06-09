/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Makefile                                                                    *
 *                                                                             *
 * Copyright (c) 2015 Tory Gaurnier                                            *
 *                                                                             *
 * Distributed under the MIT License.                                          *
 * See accompanying file LICENSE or copy at http://opensource.org/licenses/MIT *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#ifndef CONVERT_HPP
#define CONVERT_HPP


#include <Box2D/Box2D.h>


class Convert {
	public:
		Convert() = delete;

		static void init(float meters_per_screen_height);
		static float metersToPixels(float meters);
		static float pixelsToMeters(float pixels);
		static b2Vec2 screenToWorldPos(b2Vec2 screen_pos);
		static float screenToWorldPosX(float screen_x);
		static float screenToWorldPosY(float screen_y);
		static b2Vec2 worldToScreenPos(b2Vec2 world_pos);
		static float worldToScreenPosX(float world_x);
		static float worldToScreenPosY(float world_y);


	private:
		static float pixels_per_meter;
};


#endif
