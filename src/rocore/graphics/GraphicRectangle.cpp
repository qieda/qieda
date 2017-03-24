
#include <GL/glew.h>
#include "rocore/graphics/GraphicRectangle.hpp"

using namespace rocore::graphics;

void GraphicRectangle::Draw(GraphicLayer* layer)
{
    layer->AddOperation(GraphicPaintOperationQuad, 4);
    layer->AddVertex(start_.x,start_.y);
    layer->AddVertex(start_.x+width_, start_.y);
    layer->AddVertex(start_.x+width_, start_.y+height_);
    layer->AddVertex(start_.x, start_.y+height_);
}


BoundingBox GraphicRectangle::GetBoundingBox()
{
    return BoundingBox(start_,width_,height_);
}