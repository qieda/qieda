//
// Created by mroszko on 9/25/2016.
//

#ifndef QIEDA_GRIDLAYER_HPP
#define QIEDA_GRIDLAYER_HPP

#include "rocore/graphics/GraphicLayer.hpp"
#include "rocore/rocore.hpp"

namespace rocore {
namespace graphics {
    class ROCORE_EXPORT GridLayer : public GraphicLayer {
    public:
        GridLayer() : GraphicLayer(Colors::DarkGray) {
        };
        virtual bool Prepare(GLPainter* painter) override;
    };
}
}


#endif //QIEDA_GRIDLAYER_HPP