/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * GameDisplay.cpp                                                             *
 *                                                                             *
 * Copyright (c) 2015 Tory Gaurnier                                            *
 *                                                                             *
 * Distributed under the MIT License.                                          *
 * See accompanying file LICENSE or copy at http://opensource.org/licenses/MIT *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


#include "GameDisplay.hpp"

#include <QOpenGLWidget>


GameDisplay *GameDisplay::instance = nullptr;


/* * * * * * * * * * * * *
 * STATIC PUBLIC METHODS *
 * * * * * * * * * * * * */


void GameDisplay::destroy() {
	if(instance != nullptr) {
		delete instance;
		instance = nullptr;
	}
}


void GameDisplay::init() {
	if(instance == nullptr) {
		instance = new GameDisplay();
	}
}


void GameDisplay::setScene(GameScene *scene) {
	instance->QGraphicsView::setScene((QGraphicsScene*)scene);
}


/* * * * * * * * * *
 * PRIVATE METHODS *
 * * * * * * * * * */


GameDisplay::GameDisplay() {
	// Setup QOpenGLWidget
	QOpenGLWidget *open_gl_widget = new QOpenGLWidget(this);
	QSurfaceFormat format;
	format.setSamples(4);
	open_gl_widget->setFormat(format);

	setViewport(open_gl_widget);
}


GameDisplay::~GameDisplay() { }
