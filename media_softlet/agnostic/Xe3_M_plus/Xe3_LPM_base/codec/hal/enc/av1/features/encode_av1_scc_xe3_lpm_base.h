/*
* Copyright (c) 2023, Intel Corporation
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation
* the rights to use, copy, modify, merge, publish, distribute, sublicense,
* and/or sell copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
* OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
* OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
* OTHER DEALINGS IN THE SOFTWARE.
*/
//!
//! \file     encode_av1_scc_xe3_lpm_base.h
//! \brief    SCC feature
//!

#ifndef __ENCODE_AV1_SCC_XE3_LPM_BASE_H__
#define __ENCODE_AV1_SCC_XE3_LPM_BASE_H__

#include "encode_av1_scc.h"

namespace encode
{
class Av1SccXe3_Lpm_Base : public Av1Scc
{
public:
    Av1SccXe3_Lpm_Base(EncodeAllocator *allocator,
        CodechalHwInterfaceNext *hwInterface,
        void *constSettings,
        MediaFeatureManager *featureManager) :
        Av1Scc(allocator, hwInterface, constSettings, featureManager) {};


    virtual ~Av1SccXe3_Lpm_Base()
    {
        ENCODE_FUNC_CALL();
    }

    MHW_SETPAR_DECL_HDR(VDENC_HEVC_VP9_TILE_SLICE_STATE);

    MHW_SETPAR_DECL_HDR(VDENC_CMD2);

    MHW_SETPAR_DECL_HDR(VDENC_CMD1);

MEDIA_CLASS_DEFINE_END(encode__Av1SccXe3_Lpm_Base)
};
}  // namespace encode

#endif  // __ENCODE_AV1_SCC_XE3_LPM_BASE_H__
