/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * World.cpp                                                                    *
 *                                                                             *
 * Copyright (c) 2015 Tory Gaurnier                                            *
 *                                                                             *
 * Distributed under the MIT License.                                          *
 * See accompanying file LICENSE or copy at http://opensource.org/licenses/MIT *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include "World.hpp"


#include <QDebug>


b2World *World::world				=	nullptr;
float32 World::time_step			=	0.0f;
int32 World::velocity_iterations	=	0;
int32 World::position_iterations	=	0;


void World::init(
	b2Vec2 gravity,
	float32 time_step,
	int32 velocity_iterations,
	int32 position_iterations
) {
	if(world == nullptr) {
		World::world				=	new b2World(gravity);
		World::time_step			=	time_step;
		World::velocity_iterations	=	velocity_iterations;
		World::position_iterations	=	position_iterations;
	}
}


void World::destroy() {
	if(world != nullptr) {
		delete world;
		world = nullptr;
	}
}


void World::clearForces() {
	world->ClearForces();
}


b2Body * World::createBody(const b2BodyDef *body_def) {
	return world->CreateBody(body_def);
}


b2Joint * World::createJoint(const b2JointDef *joint_def) {
	return world->CreateJoint(joint_def);
}


void World::destroyBody(b2Body *body) {
	world->DestroyBody(body);
}


void World::destroyJoint(b2Joint *joint) {
	world->DestroyJoint(joint);
}


void World::dump() {
	world->Dump();
}


bool World::getAllowSleeping() {
	return world->GetAllowSleeping();
}


bool World::getAutoClearForces() {
	return world->GetAutoClearForces();
}


int32 World::getBodyCount() {
	return world->GetBodyCount();
}


b2Body * World::getBodyList() {
	return world->GetBodyList();
}


int32 World::getContactCount() {
	return world->GetContactCount();
}


b2Contact * World::getContactList() {
	return world->GetContactList();
}


const b2ContactManager & World::getContactManager() {
	return world->GetContactManager();
}


bool World::getContinuousPhysics() {
	return world->GetContinuousPhysics();
}


b2Vec2 World::getGravity() {
	return world->GetGravity();
}


int32 World::getJointCount() {
	return world->GetJointCount();
}


b2Joint * World::getJointList() {
	return world->GetJointList();
}


const b2Profile & World::getProfile() {
	return world->GetProfile();
}


int32 World::getProxyCount() {
	return world->GetProxyCount();
}


bool World::getSubStepping() {
	return world->GetSubStepping();
}


int32 World::getTreeHeight() {
	return world->GetTreeHeight();
}


int32 World::getTreeBalance() {
	return world->GetTreeBalance();
}


float32 World::getTreeQuality() {
	return world->GetTreeQuality();
}


bool World::getWarmStarting() {
	return world->GetWarmStarting();
}


bool World::isLocked() {
	return world->IsLocked();
}


void World::queryAABB(b2QueryCallback *callback, const b2AABB &aabb) {
	world->QueryAABB(callback, aabb);
}


void World::rayCast(b2RayCastCallback *callback, const b2Vec2 &point1, const b2Vec2 &point2) {
	world->RayCast(callback, point1, point2);
}


void World::setAllowSleeping(bool flag) {
	world->SetAllowSleeping(flag);
}


void World::setAutoClearForces(bool flag) {
	world->SetAutoClearForces(flag);
}


void World::setContactFilter(b2ContactFilter *filter) {
	world->SetContactFilter(filter);
}


void World::setContactListener(b2ContactListener *listener) {
	world->SetContactListener(listener);
}


void World::setContinuousPhysics(bool flag) {
	world->SetContinuousPhysics(flag);
}


void World::setDestructionListener(b2DestructionListener *listener) {
	world->SetDestructionListener(listener);
}


void World::setGravity(const b2Vec2 &gravity) {
	world->SetGravity(gravity);
}


void World::setSubStepping(bool flag) {
	world->SetSubStepping(flag);
}


void World::setWarmStarting(bool flag) {
	world->SetWarmStarting(flag);
}


void World::shiftOrigin(const b2Vec2 &new_origin) {
	world->ShiftOrigin(new_origin);
}


void World::step() {
	world->Step(time_step, velocity_iterations, position_iterations);
}
