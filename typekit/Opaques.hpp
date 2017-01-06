/* Generated from orogen/lib/orogen/templates/typekit/Opaques.hpp */

#ifndef __OROGEN_GENERATED_pcl_USER_MARSHALLING_HH
#define __OROGEN_GENERATED_pcl_USER_MARSHALLING_HH

#include <pcl/typekit/OpaqueFwd.hpp>

namespace orogen_typekits
{
    
    /** Converts \c real_type into \c intermediate */
    void toIntermediate(::wrappers::PCLVertices& intermediate, ::pcl::Vertices const& real_type);
    /** Converts \c intermediate into \c real_type */
    void fromIntermediate(::pcl::Vertices& real_type, ::wrappers::PCLVertices const& intermediate);
        
    
}

#endif

