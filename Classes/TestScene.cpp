#include "TestScene.h"

USING_NS_CC;

// on "init" you need to initialize your instance
bool TestScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Node::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

   
    auto sprite = Sprite::create("HelloWorld.png");

	sprite->setAnchorPoint(Point::ZERO);

	this->setContentSize(sprite->getContentSize());

	sprite->setPosition(Point::ZERO);

    this->addChild(sprite, 0);
    
    return true;
}
