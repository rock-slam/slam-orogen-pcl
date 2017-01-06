#ifndef PCL_VERTICES_WRAPPER_HPP
#define PCL_VERTICES_WRAPPER_HPP

#include <vector>
#include <stdint.h>

namespace wrappers
{
    struct PCLVertices
    {
        std::vector<uint32_t> vertices;
    };
}

#endif
