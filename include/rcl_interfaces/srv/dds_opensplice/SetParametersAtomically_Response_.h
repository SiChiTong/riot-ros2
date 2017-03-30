//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: SetParametersAtomically_Response_.h
//  Source: rcl_interfaces/srv/dds_opensplice/SetParametersAtomically_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _SETPARAMETERSATOMICALLY_RESPONSE__H_
#define _SETPARAMETERSATOMICALLY_RESPONSE__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "SetParametersResult_.h"


namespace rcl_interfaces
{
   namespace srv
   {
      namespace dds_
      {
         struct SetParametersAtomically_Response_;

         struct SetParametersAtomically_Response_
         {
               ::rcl_interfaces::msg::dds_::SetParametersResult_ result_;
         };

         typedef DDS_DCPSStruct_var < SetParametersAtomically_Response_> SetParametersAtomically_Response__var;
         typedef DDS_DCPSStruct_out < SetParametersAtomically_Response_> SetParametersAtomically_Response__out;
      }
   }
}




#endif 