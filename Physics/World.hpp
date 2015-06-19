/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * World.hpp                                                                   *
 *                                                                             *
 * Copyright (c) 2015 Tory Gaurnier                                            *
 *                                                                             *
 * Distributed under the MIT License.                                          *
 * See accompanying file LICENSE or copy at http://opensource.org/licenses/MIT *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#ifndef WORLD_HPP
#define WORLD_HPP


#include <Box2D/Box2D.h>


class World : private b2World {
	public:
		World(
			b2Vec2 gravity,
			float32 time_step,
			int32 velocity_iterations,
			int32 position_iterations
		);


		void clearForces();


		b2Body * createBody(const b2BodyDef *body_def);


		b2Joint * createJoint(const b2JointDef *joint_def);


		void destroyBody(b2Body *body);


		void destroyJoint(b2Joint *joint);


		void dump();


		bool getAllowSleeping();


		bool getAutoClearForces();


		int32 getBodyCount();


		b2Body * getBodyList();


		int32 getContactCount();


		b2Contact * getContactList();


		const b2ContactManager & getContactManager();


		bool getContinuousPhysics();


		b2Vec2 getGravity();


		int32 getJointCount();


		b2Joint * getJointList();


		const b2Profile & getProfile();


		int32 getProxyCount();


		bool getSubStepping();


		int32 getTreeHeight();


		int32 getTreeBalance();


		float32 getTreeQuality();


		bool getWarmStarting();


		bool isLocked();


		void queryAABB(b2QueryCallback *callback, const b2AABB &aabb);


		void rayCast(b2RayCastCallback *callback, const b2Vec2 &point1, const b2Vec2 &point2);


		void setAllowSleeping(bool flag);


		void setAutoClearForces(bool flag);


		void setContactFilter(b2ContactFilter *filter);


		void setContactListener(b2ContactListener *listener);


		void setContinuousPhysics(bool flag);


		void setDestructionListener(b2DestructionListener *listener);


		void setGravity(const b2Vec2 &gravity);


		void setSubStepping(bool flag);


		void setWarmStarting(bool flag);


		void shiftOrigin(const b2Vec2 &new_origin);


		void step();


	private:
		float32 time_step			=	0.0f;
		int32 velocity_iterations	=	0;
		int32 position_iterations	=	0;
};


#endif
