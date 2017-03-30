//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: UInt8MultiArray_.h
//  Source: std_msgs/msg/dds_opensplice/UInt8MultiArray_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _UINT8MULTIARRAY__H_
#define _UINT8MULTIARRAY__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "MultiArrayLayout_.h"


namespace std_msgs
{
   namespace msg
   {
      namespace dds_
      {
         struct UInt8MultiArray_;

         struct UInt8MultiArray_
         {
               struct _data__seq_uniq_ {};
               typedef DDS_DCPSUFLSeq < DDS::Octet, struct _data__seq_uniq_> _data__seq;
               typedef DDS_DCPSSequence_var < _data__seq> _data__seq_var;
               typedef DDS_DCPSSequence_out < _data__seq> _data__seq_out;
               MultiArrayLayout_ layout_;
               _data__seq data_;
         };

         typedef DDS_DCPSStruct_var < UInt8MultiArray_> UInt8MultiArray__var;
         typedef DDS_DCPSStruct_out < UInt8MultiArray_> UInt8MultiArray__out;
      }
   }
}




#endif 