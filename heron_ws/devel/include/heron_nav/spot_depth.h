/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/lukewen/heron_ws/src/heron_nav/msg/spot_depth.msg
 *
 */


#ifndef HERON_NAV_MESSAGE_SPOT_DEPTH_H
#define HERON_NAV_MESSAGE_SPOT_DEPTH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace heron_nav
{
template <class ContainerAllocator>
struct spot_depth_
{
  typedef spot_depth_<ContainerAllocator> Type;

  spot_depth_()
    : depth(0.0)
    , lat_spot(0.0)
    , long_spot(0.0)  {
    }
  spot_depth_(const ContainerAllocator& _alloc)
    : depth(0.0)
    , lat_spot(0.0)
    , long_spot(0.0)  {
    }



   typedef double _depth_type;
  _depth_type depth;

   typedef double _lat_spot_type;
  _lat_spot_type lat_spot;

   typedef double _long_spot_type;
  _long_spot_type long_spot;




  typedef boost::shared_ptr< ::heron_nav::spot_depth_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::heron_nav::spot_depth_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct spot_depth_

typedef ::heron_nav::spot_depth_<std::allocator<void> > spot_depth;

typedef boost::shared_ptr< ::heron_nav::spot_depth > spot_depthPtr;
typedef boost::shared_ptr< ::heron_nav::spot_depth const> spot_depthConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::heron_nav::spot_depth_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::heron_nav::spot_depth_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace heron_nav

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'heron_nav': ['/home/lukewen/heron_ws/src/heron_nav/msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::heron_nav::spot_depth_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::heron_nav::spot_depth_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::heron_nav::spot_depth_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::heron_nav::spot_depth_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::heron_nav::spot_depth_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::heron_nav::spot_depth_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::heron_nav::spot_depth_<ContainerAllocator> >
{
  static const char* value()
  {
    return "01258744ab691c1e7c1bc57483923e07";
  }

  static const char* value(const ::heron_nav::spot_depth_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x01258744ab691c1eULL;
  static const uint64_t static_value2 = 0x7c1bc57483923e07ULL;
};

template<class ContainerAllocator>
struct DataType< ::heron_nav::spot_depth_<ContainerAllocator> >
{
  static const char* value()
  {
    return "heron_nav/spot_depth";
  }

  static const char* value(const ::heron_nav::spot_depth_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::heron_nav::spot_depth_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#The depth for the spot\n\
float64 depth\n\
\n\
#The latitude for the spot\n\
float64 lat_spot\n\
\n\
#The longtitude for the spot\n\
float64 long_spot\n\
";
  }

  static const char* value(const ::heron_nav::spot_depth_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::heron_nav::spot_depth_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.depth);
      stream.next(m.lat_spot);
      stream.next(m.long_spot);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct spot_depth_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::heron_nav::spot_depth_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::heron_nav::spot_depth_<ContainerAllocator>& v)
  {
    s << indent << "depth: ";
    Printer<double>::stream(s, indent + "  ", v.depth);
    s << indent << "lat_spot: ";
    Printer<double>::stream(s, indent + "  ", v.lat_spot);
    s << indent << "long_spot: ";
    Printer<double>::stream(s, indent + "  ", v.long_spot);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HERON_NAV_MESSAGE_SPOT_DEPTH_H
