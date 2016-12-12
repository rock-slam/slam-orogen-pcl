#ifndef PCL_AGGREGATOR_TIMESTAMPING_HPP
#define PCL_AGGREGATOR_TIMESTAMPING_HPP

#include <base/Time.hpp>
#include <pcl/PCLPointCloud2.h>

namespace aggregator
{

/**
 * Allows the aggregator and the transformer to determine the timestamp of the PCLPointCloud2 type.
 */
inline base::Time determineTimestamp(const ::pcl::PCLPointCloud2& type)
{
    return base::Time::fromMicroseconds(type.header.stamp);
}

}

#endif
