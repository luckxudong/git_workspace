//
// Created by 刘旭东 on 6/14/15.
//

#include "SpineNodeTest.h"

#include <spine/spine-cocos2dx.h>

using namespace spine;

bool SpineNodeTest::init() {
    bool success = Layer::init();

    if(!success)return false;

    auto skeletonNode = SkeletonAnimation::createWithFile("spine/spineboy.json", "spine/spineboy.atlas", 0.6f);

    skeletonNode->setMix("walk", "jump", 0.2f);
    skeletonNode->setMix("jump", "run", 0.2f);

    skeletonNode->setAnimation(0, "walk", true);

    skeletonNode->addAnimation(0, "jump", false, 3);

    skeletonNode->addAnimation(0, "run", true);

    Size windowSize = Director::getInstance()->getWinSize();
    skeletonNode->setPosition(Vec2(windowSize.width / 2, 20));
    addChild(skeletonNode);

    return true;
}

SpineNodeTest::SpineNodeTest() {

}

SpineNodeTest::~SpineNodeTest() {

}
