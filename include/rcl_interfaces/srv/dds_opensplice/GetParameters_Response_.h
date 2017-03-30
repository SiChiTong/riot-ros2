//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: GetParameters_Response_.h
//  Source: rcl_interfaces/srv/dds_opensplice/GetParameters_Response_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _GETPARAMETERS_RESPONSE__H_
#define _GETPARAMETERS_RESPONSE__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "ParameterValue_.h"


namespace rcl_interfaces
{
   namespace srv
   {
      namespace dds_
      {
         struct GetParameters_Response_;

         struct GetParameters_Response_
         {
               struct _values__seq_uniq_ {};
               typedef DDS_DCPSUVLSeq < ::rcl_interfaces::msg::dds_::ParameterValue_, struct _values__seq_uniq_> _values__seq;
               typedef DDS_DCPSSequence_var < _values__seq> _values__seq_var;
               typedef DDS_DCPSSequence_out < _values__seq> _values__seq_out;
               _values__seq values_;
         };

         typedef DDS_DCPSStruct_var < GetParameters_Response_> GetParameters_Response__var;
         typedef DDS_DCPSStruct_out < GetParameters_Response_> GetParameters_Response__out;
      }
   }
}




#endif 