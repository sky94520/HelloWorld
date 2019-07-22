#include "HelloWorldScene.h"

HelloWorld::HelloWorld()
{
}

HelloWorld::~HelloWorld()
{
}

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    Director::getInstance()->getRenderer()->setDrawColor(Color4B(0,255,255));
    //add event listener
	/*
    auto listener = EventListenerTouchOneByOne::create();
    listener->onTouchBegan = SDL_CALLBACK_2(HelloWorld::onTouchBegan, this);

    _eventDispatcher->addEventListener(listener, this);
    
	auto label = LabelDotChar::create("Hello World", 3, Color3B(0, 0, 0));
	label->setTag(10);
	label->setPosition(200, 200);
	this->addChild(label);
	*/

    return true;
}

void HelloWorld::menuCloseCallback(Object* pSender)
{
}
