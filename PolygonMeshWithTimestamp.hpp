#ifndef PCL_POLYGON_MESH_AGGREGATOR_TIMESTAMPING_HPP
#define PCL_POLYGON_MESH_AGGREGATOR_TIMESTAMPING_HPP

#include <base/Time.hpp>
#include <pcl/PolygonMesh.h>

namespace aggregator
{

/**
 * Allows the aggregator and the transformer to determine the timestamp of the PolygonMesh type.
 */
inline base::Time determineTimestamp(const ::pcl::PolygonMesh& type)
{
    return base::Time::fromMicroseconds(type.header.stamp);
}

}

#endif
