/* Generated from orogen/lib/orogen/templates/typekit/Opaques.cpp */

#include <pcl/typekit/OpaqueTypes.hpp>
#include <pcl/typekit/Opaques.hpp>

    /** Returns the intermediate value that is contained in \c real_type */
    /** Stores \c intermediate into \c real_type. \c intermediate is owned by \c
     * real_type afterwards. */
    /** Release ownership of \c real_type on the corresponding intermediate
     * pointer.
     */


void orogen_typekits::toIntermediate(::wrappers::PCLVertices& intermediate, ::pcl::Vertices const& real_type)
{
    intermediate.vertices = real_type.vertices;
}

void orogen_typekits::fromIntermediate(::pcl::Vertices& real_type, ::wrappers::PCLVertices const& intermediate)
{
    real_type.vertices = intermediate.vertices;
}

