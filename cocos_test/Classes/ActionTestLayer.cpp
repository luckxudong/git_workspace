//
// Created by 刘旭东 on 6/15/15.
//

#include "ActionTestLayer.h"

using namespace cocos2d;

bool ActionTestLayer::init() {
    bool success = Layer::init();
    if (!success)return false;

    auto sprite = Sprite::create("tab_me_checked.png");

    //sprite->setPosition(<#(float)x#>, <#(float)y#>)
    addChild(sprite);

    MoveBy *move = MoveBy::create(2, Vec2(200, 200));
    Repeat *pRepeat = Repeat::create(move, 2);

    RotateBy *rotateBy = RotateBy::create(3, 360);

    auto action = Sequence::create(pRepeat, rotateBy);

    sprite->runAction(action);

    return success;
}
