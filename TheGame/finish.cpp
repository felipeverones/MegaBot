#include "finish.h"

Finish::Finish() : Element()
{
    type = "finish";
    width = FINISH_WIDTH;
    height = FINISH_HEIGHT;

    setSprite(":/resources/images/finish.png");
}
