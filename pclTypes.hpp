#ifndef __PCL_TYPES_HPP__
#define __PCL_TYPES_HPP__

#include <base/Time.hpp>
#include <pcl/PCLPointCloud2.h>

namespace pcl
{
    /* NOTE: This is a helper to force typelib to parse PCLPointCloud2 when parsing this header */
    typedef pcl::PCLPointCloud2 _PCLPointCloud2;
}

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