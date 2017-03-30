//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: GetParameterTypes_Request_.h
//  Source: rcl_interfaces/srv/dds_opensplice/GetParameterTypes_Request_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _GETPARAMETERTYPES_REQUEST__H_
#define _GETPARAMETERTYPES_REQUEST__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"


namespace rcl_interfaces
{
   namespace srv
   {
      namespace dds_
      {
         struct GetParameterTypes_Request_;

         struct GetParameterTypes_Request_
         {
               struct _names__seq_uniq_ {};
               typedef DDS_DCPSUStrSeqT <struct _names__seq_uniq_> _names__seq;
               typedef DDS_DCPSUStrSeq_var < _names__seq> _names__seq_var;
               typedef DDS_DCPSUStrSeq_out < _names__seq> _names__seq_out;
               _names__seq names_;
         };

         typedef DDS_DCPSStruct_var < GetParameterTypes_Request_> GetParameterTypes_Request__var;
         typedef DDS_DCPSStruct_out < GetParameterTypes_Request_> GetParameterTypes_Request__out;
      }
   }
}




#endif 