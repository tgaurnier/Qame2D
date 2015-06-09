/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Makefile                                                                    *
 *                                                                             *
 * Copyright (c) 2015 Tory Gaurnier                                            *
 *                                                                             *
 * Distributed under the MIT License.                                          *
 * See accompanying file LICENSE or copy at http://opensource.org/licenses/MIT *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#ifndef WORLD_HPP
#define WORLD_HPP


#include <Box2D/Box2D.h>


class World {
	public:
		static void init(
			b2Vec2 gravity,
			float32 time_step,
			int32 velocity_iterations,
			int32 position_iterations
		);


		static void destroy();


		static void clearForces();


		static b2Body * createBody(const b2BodyDef *body_def);


		static b2Joint * createJoint(const b2JointDef *joint_def);


		static void destroyBody(b2Body *body);


		static void destroyJoint(b2Joint *joint);


		static void dump();


		static bool getAllowSleeping();


		static bool getAutoClearForces();


		static int32 getBodyCount();


		static b2Body * getBodyList();


		static int32 getContactCount();


		static b2Contact * getContactList();


		static const b2ContactManager & getContactManager();


		static bool getContinuousPhysics();


		static b2Vec2 getGravity();


		static int32 getJointCount();


		static b2Joint * getJointList();


		static const b2Profile & getProfile();


		static int32 getProxyCount();


		static bool getSubStepping();


		static int32 getTreeHeight();


		static int32 getTreeBalance();


		static float32 getTreeQuality();


		static bool getWarmStarting();


		static bool isLocked();


		static void queryAABB(b2QueryCallback *callback, const b2AABB &aabb);


		static void rayCast(
			b2RayCastCallback *callback,
			const b2Vec2 &point1,
			const b2Vec2 &point2
		);


		static void setAllowSleeping(bool flag);


		static void setAutoClearForces(bool flag);


		static void setContactFilter(b2ContactFilter *filter);


		static void setContactListener(b2ContactListener *listener);


		static void setContinuousPhysics(bool flag);


		static void setDestructionListener(b2DestructionListener *listener);


		static void setGravity(const b2Vec2 &gravity);


		static void setSubStepping(bool flag);


		static void setWarmStarting(bool flag);


		static void shiftOrigin(const b2Vec2 &new_origin);


		static void step();


	private:
		static b2World *world;
		static float32 time_step;
		static int32 velocity_iterations;
		static int32 position_iterations;


		World() = delete;
};


#endif
