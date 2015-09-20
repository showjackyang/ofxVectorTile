//
//  glmTileFeature.h
//
//  Created by Patricio Gonzalez Vivo on 8/27/14.
//
//

#pragma once

//  TODO: use default one
//
#include <memory>

#include "glmString.h"
#include "glmPolyline.h"
#include "glmMesh.h"

class glmFeature : public glmMesh {
public:

    glmFeature(){};
    virtual ~glmFeature(){};
    
    std::vector<glmPolyline> shapes;
    std::string idString;
    
protected:
    
};

typedef std::shared_ptr<glmFeature> glmFeatureRef;