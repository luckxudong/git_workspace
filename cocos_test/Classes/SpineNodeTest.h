//
// Created by 刘旭东 on 6/14/15.
//


#ifndef __SpineNodeTest_H_
#define __SpineNodeTest_H_

#include "cocos2d.h"

using namespace cocos2d;

class SpineNodeTest : public Layer {

public:
    SpineNodeTest();

    virtual ~SpineNodeTest() ;

    CREATE_FUNC(SpineNodeTest);

protected:
    virtual bool init() override;

};

#endif //__SpineNodeTest_H_
