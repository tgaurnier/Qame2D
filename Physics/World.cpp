/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * World.cpp                                                                   *
 *                                                                             *
 * Copyright (c) 2015 Tory Gaurnier                                            *
 *                                                                             *
 * Distributed under the MIT License.                                          *
 * See accompanying file LICENSE or copy at http://opensource.org/licenses/MIT *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include "World.hpp"


#include <QDebug>


World::World(
	b2Vec2 gravity,
	float32 time_step,
	int32 velocity_iterations,
	int32 position_iterations
) :
	b2World(gravity),
	time_step(time_step),
	velocity_iterations(velocity_iterations),
	position_iterations(position_iterations) { }


void World::clearForces() {
	b2World::ClearForces();
}


b2Body * World::createBody(const b2BodyDef *body_def) {
	return b2World::CreateBody(body_def);
}


b2Joint * World::createJoint(const b2JointDef *joint_def) {
	return b2World::CreateJoint(joint_def);
}


void World::destroyBody(b2Body *body) {
	b2World::DestroyBody(body);
}


void World::destroyJoint(b2Joint *joint) {
	b2World::DestroyJoint(joint);
}


void World::dump() {
	b2World::Dump();
}


bool World::getAllowSleeping() {
	return b2World::GetAllowSleeping();
}


bool World::getAutoClearForces() {
	return b2World::GetAutoClearForces();
}


int32 World::getBodyCount() {
	return b2World::GetBodyCount();
}


b2Body * World::getBodyList() {
	return b2World::GetBodyList();
}


int32 World::getContactCount() {
	return b2World::GetContactCount();
}


b2Contact * World::getContactList() {
	return b2World::GetContactList();
}


const b2ContactManager & World::getContactManager() {
	return b2World::GetContactManager();
}


bool World::getContinuousPhysics() {
	return b2World::GetContinuousPhysics();
}


b2Vec2 World::getGravity() {
	return b2World::GetGravity();
}


int32 World::getJointCount() {
	return b2World::GetJointCount();
}


b2Joint * World::getJointList() {
	return b2World::GetJointList();
}


const b2Profile & World::getProfile() {
	return b2World::GetProfile();
}


int32 World::getProxyCount() {
	return b2World::GetProxyCount();
}


bool World::getSubStepping() {
	return b2World::GetSubStepping();
}


int32 World::getTreeHeight() {
	return b2World::GetTreeHeight();
}


int32 World::getTreeBalance() {
	return b2World::GetTreeBalance();
}


float32 World::getTreeQuality() {
	return b2World::GetTreeQuality();
}


bool World::getWarmStarting() {
	return b2World::GetWarmStarting();
}


bool World::isLocked() {
	return b2World::IsLocked();
}


void World::queryAABB(b2QueryCallback *callback, const b2AABB &aabb) {
	b2World::QueryAABB(callback, aabb);
}


void World::rayCast(b2RayCastCallback *callback, const b2Vec2 &point1, const b2Vec2 &point2) {
	b2World::RayCast(callback, point1, point2);
}


void World::setAllowSleeping(bool flag) {
	b2World::SetAllowSleeping(flag);
}


void World::setAutoClearForces(bool flag) {
	b2World::SetAutoClearForces(flag);
}


void World::setContactFilter(b2ContactFilter *filter) {
	b2World::SetContactFilter(filter);
}


void World::setContactListener(b2ContactListener *listener) {
	b2World::SetContactListener(listener);
}


void World::setContinuousPhysics(bool flag) {
	b2World::SetContinuousPhysics(flag);
}


void World::setDestructionListener(b2DestructionListener *listener) {
	b2World::SetDestructionListener(listener);
}


void World::setGravity(const b2Vec2 &gravity) {
	b2World::SetGravity(gravity);
}


void World::setSubStepping(bool flag) {
	b2World::SetSubStepping(flag);
}


void World::setWarmStarting(bool flag) {
	b2World::SetWarmStarting(flag);
}


void World::shiftOrigin(const b2Vec2 &new_origin) {
	b2World::ShiftOrigin(new_origin);
}


void World::step() {
	b2World::Step(time_step, velocity_iterations, position_iterations);
}
