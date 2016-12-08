#ifndef __PCL_TYPES_HPP__
#define __PCL_TYPES_HPP__

#include <base/Time.hpp>
#include <pcl/PCLPointCloud2.h>

namespace pcl
{
    // NOTE: This is a helper to force typelib to parse PCLPointCloud2 when parsing this header.
    //typedef pcl::PCLPointCloud2 _PCLPointCloud2;
    // NOTE: typedef caused the following error
    // tools/utilrb/lib/utilrb/module/const_defined_here_p.rb:9:in `const_defined?': 
    //  wrong constant name _PCLPointCloud2 (NameError)
    struct Dummy {
        PCLPointCloud2 pc2;
    };
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