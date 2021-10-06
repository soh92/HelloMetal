//
//  ShaderTypes.h
//  HelloMetal
//
//  Created by sho yoneda on 2021/10/06.
//

#ifndef ShaderTypes_h
#define ShaderTypes_h

#include <simd/simd.h>

enum
{
    kShaderVertexInputIndexVertices = 0,
    kShaderVertexInputIndexViewportSize = 1,
};

typedef struct
{
    vector_float2 position;
    vector_floot4 color;
} ShaderVertex;

#endif /* ShaderTypes_h */