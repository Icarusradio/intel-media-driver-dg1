/*
* Copyright (c) 2017, Intel Corporation
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
//! \file      cm_gpuinit_kernel_g8.h  
//! \brief     Contains binary of GPUInit kernel on gen8.
//!

#pragma once

#ifdef IGFX_GEN8_SUPPORTED
extern const unsigned int iGPUInit_kernel_isa_size_Gen8 = 2078;

extern const unsigned char pGPUInit_kernel_isa_Gen8[] = {
0x43, 0x49, 0x53, 0x41, 0x03, 0x02, 0x02, 0x00, 0x0f, 0x73, 0x75, 0x72, 0x66, 0x61, 0x63, 0x65, 0x43, 0x6f, 0x70, 0x79, 0x5f, 0x73, 0x65, 0x74, 0x65, 0x00, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 
0x23, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x86, 0x02, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x14, 0x73, 0x75, 0x72, 0x66, 0x61, 0x63, 0x65, 0x43, 0x6f, 0x70, 0x79, 0x5f, 0x73, 
0x65, 0x74, 0x5f, 0x4e, 0x56, 0x31, 0x32, 0x5f, 0x01, 0x00, 0x00, 0x27, 0x01, 0x00, 0x00, 0x4a, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0xa6, 0x04, 0x00, 0x00, 0x78, 0x03, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x73, 0x75, 0x72, 0x66, 0x61, 0x63, 0x65, 0x43, 0x6f, 0x70, 0x79, 0x5f, 0x73, 0x65, 0x74, 0x00, 0x41, 0x73, 0x6d, 0x4e, 0x61, 0x6d, 0x65, 0x00, 
0x53, 0x4c, 0x4d, 0x53, 0x69, 0x7a, 0x65, 0x00, 0x4e, 0x6f, 0x42, 0x61, 0x72, 0x72, 0x69, 0x65, 0x72, 0x00, 0x53, 0x75, 0x72, 0x66, 0x61, 0x63, 0x65, 0x55, 0x73, 0x61, 0x67, 0x65, 0x00, 0x4f, 
0x75, 0x74, 0x70, 0x75, 0x74, 0x00, 0x4c, 0x30, 0x5f, 0x37, 0x00, 0x4c, 0x30, 0x5f, 0x38, 0x00, 0x4c, 0x30, 0x5f, 0x39, 0x00, 0x4c, 0x31, 0x30, 0x00, 0x4c, 0x31, 0x31, 0x00, 0x4c, 0x31, 0x32, 
0x00, 0x4c, 0x31, 0x33, 0x00, 0x4c, 0x31, 0x34, 0x00, 0x4c, 0x31, 0x35, 0x00, 0x4c, 0x31, 0x36, 0x00, 0x4c, 0x31, 0x37, 0x00, 0x4c, 0x31, 0x38, 0x00, 0x4c, 0x31, 0x39, 0x00, 0x4c, 0x32, 0x30, 
0x00, 0x4c, 0x32, 0x31, 0x00, 0x4c, 0x32, 0x32, 0x00, 0x4c, 0x32, 0x33, 0x00, 0x4c, 0x32, 0x34, 0x00, 0x4c, 0x32, 0x35, 0x00, 0x4c, 0x32, 0x36, 0x00, 0x4c, 0x32, 0x37, 0x00, 0x4c, 0x32, 0x38, 
0x00, 0x4c, 0x30, 0x5f, 0x32, 0x39, 0x00, 0x4c, 0x30, 0x5f, 0x33, 0x30, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0b, 0x00, 0x01, 0x00, 0x01, 0x05, 0x00, 
0x01, 0x00, 0x00, 0x02, 0x00, 0x20, 0x00, 0x20, 0x00, 0x04, 0x00, 0x02, 0x06, 0x00, 0x24, 0x00, 0x04, 0x00, 0x6f, 0x01, 0x00, 0x00, 0xd4, 0x01, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00, 0x19, 0x47, 
0x50, 0x55, 0x49, 0x6e, 0x69, 0x74, 0x5f, 0x6b, 0x65, 0x72, 0x6e, 0x65, 0x6c, 0x5f, 0x67, 0x65, 0x6e, 0x78, 0x5f, 0x30, 0x2e, 0x61, 0x73, 0x6d, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x29, 
0x00, 0x00, 0x73, 0x75, 0x72, 0x66, 0x61, 0x63, 0x65, 0x43, 0x6f, 0x70, 0x79, 0x5f, 0x73, 0x65, 0x74, 0x5f, 0x4e, 0x56, 0x31, 0x32, 0x00, 0x41, 0x73, 0x6d, 0x4e, 0x61, 0x6d, 0x65, 0x00, 0x53, 
0x4c, 0x4d, 0x53, 0x69, 0x7a, 0x65, 0x00, 0x4e, 0x6f, 0x42, 0x61, 0x72, 0x72, 0x69, 0x65, 0x72, 0x00, 0x53, 0x75, 0x72, 0x66, 0x61, 0x63, 0x65, 0x55, 0x73, 0x61, 0x67, 0x65, 0x00, 0x4f, 0x75, 
0x74, 0x70, 0x75, 0x74, 0x00, 0x4c, 0x31, 0x5f, 0x37, 0x00, 0x4c, 0x31, 0x5f, 0x38, 0x00, 0x4c, 0x31, 0x5f, 0x39, 0x00, 0x4c, 0x31, 0x30, 0x00, 0x4c, 0x31, 0x31, 0x00, 0x4c, 0x31, 0x32, 0x00, 
0x4c, 0x31, 0x33, 0x00, 0x4c, 0x31, 0x34, 0x00, 0x4c, 0x31, 0x35, 0x00, 0x4c, 0x31, 0x36, 0x00, 0x4c, 0x31, 0x37, 0x00, 0x4c, 0x31, 0x38, 0x00, 0x4c, 0x31, 0x39, 0x00, 0x4c, 0x32, 0x30, 0x00, 
0x4c, 0x32, 0x31, 0x00, 0x4c, 0x32, 0x32, 0x00, 0x4c, 0x32, 0x33, 0x00, 0x4c, 0x32, 0x34, 0x00, 0x4c, 0x32, 0x35, 0x00, 0x4c, 0x32, 0x36, 0x00, 0x4c, 0x32, 0x37, 0x00, 0x4c, 0x32, 0x38, 0x00, 
0x4c, 0x32, 0x39, 0x00, 0x4c, 0x33, 0x30, 0x00, 0x4c, 0x33, 0x31, 0x00, 0x4c, 0x33, 0x32, 0x00, 0x4c, 0x33, 0x33, 0x00, 0x4c, 0x33, 0x34, 0x00, 0x4c, 0x33, 0x35, 0x00, 0x4c, 0x33, 0x36, 0x00, 
0x4c, 0x33, 0x37, 0x00, 0x4c, 0x33, 0x38, 0x00, 0x4c, 0x31, 0x5f, 0x33, 0x39, 0x00, 0x4c, 0x31, 0x5f, 0x34, 0x30, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
0x0b, 0x00, 0x01, 0x00, 0x01, 0x05, 0x00, 0x01, 0x00, 0x00, 0x02, 0x00, 0x20, 0x00, 0x20, 0x00, 0x04, 0x00, 0x02, 0x06, 0x00, 0x24, 0x00, 0x04, 0x00, 0x0b, 0x02, 0x00, 0x00, 0x6f, 0x02, 0x00, 
0x00, 0x03, 0x00, 0x02, 0x00, 0x19, 0x47, 0x50, 0x55, 0x49, 0x6e, 0x69, 0x74, 0x5f, 0x6b, 0x65, 0x72, 0x6e, 0x65, 0x6c, 0x5f, 0x67, 0x65, 0x6e, 0x78, 0x5f, 0x31, 0x2e, 0x61, 0x73, 0x6d, 0x03, 
0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x48, 0x12, 0x40, 0x20, 0x04, 0x00, 0x00, 0x16, 0xff, 0x01, 0xff, 0x01, 0x05, 0x00, 0x00, 0x00, 0x48, 0x12, 0x80, 0x20, 0x06, 0x00, 
0x00, 0x16, 0xff, 0x01, 0xff, 0x01, 0x01, 0x4d, 0x00, 0x20, 0x07, 0x06, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x08, 0x0a, 0xe0, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
0x80, 0x00, 0x08, 0x0a, 0x20, 0x21, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x08, 0x0a, 0x60, 0x21, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
0x80, 0x00, 0x08, 0x0a, 0xa0, 0x21, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x04, 0x02, 0x00, 0x22, 0x24, 0x00, 0x00, 0x06, 0x00, 0x80, 0x0a, 0x12, 0x41, 0x00, 
0x00, 0x00, 0x28, 0x12, 0x60, 0x20, 0x40, 0x00, 0x00, 0x16, 0x20, 0x00, 0x20, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x06, 0xc8, 0x20, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x07, 0x00, 0x09, 0x00, 
0x00, 0x00, 0x28, 0x0a, 0xa0, 0x20, 0x60, 0x00, 0x00, 0x1e, 0x02, 0x00, 0x02, 0x00, 0x01, 0x40, 0x00, 0x20, 0x00, 0x06, 0x05, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x00, 0x22, 0xe0, 0x00, 
0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x20, 0x23, 0xe0, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x28, 0x12, 0xc4, 0x20, 0x80, 0x00, 
0x00, 0x16, 0x08, 0x00, 0x08, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x40, 0x22, 0x20, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x80, 0x22, 0x60, 0x01, 
0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x60, 0x23, 0x20, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0xc0, 0x22, 0xa0, 0x01, 
0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0xa0, 0x23, 0x60, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0xe0, 0x23, 0xa0, 0x01, 
0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x40, 0x24, 0xe0, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x80, 0x24, 0x20, 0x01, 
0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 0x60, 0x0c, 0x04, 0x3a, 0x00, 0x20, 0xc0, 0x00, 0x8d, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x4d, 0x00, 0x20, 0x07, 0x0f, 0x06, 0x00, 0x01, 0x00, 
0x80, 0x00, 0x0c, 0x02, 0xc0, 0x24, 0x60, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x00, 0x25, 0xa0, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 
0x00, 0x00, 0x28, 0x0a, 0xe0, 0x21, 0xa0, 0x00, 0x00, 0x1e, 0x20, 0x00, 0x20, 0x00, 0x31, 0x00, 0x60, 0x0c, 0x04, 0x3a, 0x00, 0x20, 0xe0, 0x01, 0x8d, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x4d, 
0x00, 0x20, 0x07, 0x18, 0x0f, 0x00, 0x40, 0x00, 0x00, 0x00, 0x28, 0x0a, 0x00, 0x23, 0xa0, 0x00, 0x00, 0x1e, 0x40, 0x00, 0x40, 0x00, 0x31, 0x00, 0x60, 0x0c, 0x04, 0x3a, 0x00, 0x20, 0x00, 0x03, 
0x8d, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x4d, 0x00, 0x20, 0x07, 0x21, 0x18, 0x00, 0x40, 0x00, 0x00, 0x00, 0x28, 0x0a, 0x20, 0x24, 0xa0, 0x00, 0x00, 0x1e, 0x60, 0x00, 0x60, 0x00, 0x31, 0x00, 
0x60, 0x0c, 0x04, 0x3a, 0x00, 0x20, 0x20, 0x04, 0x8d, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x4d, 0x00, 0x20, 0x07, 0x7f, 0x00, 0x00, 0x31, 0x00, 0x00, 0x07, 0x00, 0x3a, 0x00, 0x20, 0xe0, 0x0f, 
0x00, 0x06, 0x10, 0x00, 0x00, 0x82, 0x05, 0x00, 0x00, 0x00, 0x48, 0x12, 0x40, 0x20, 0x04, 0x00, 0x00, 0x16, 0xff, 0x01, 0xff, 0x01, 0x05, 0x00, 0x00, 0x00, 0x48, 0x12, 0x80, 0x20, 0x06, 0x00, 
0x00, 0x16, 0xff, 0x01, 0xff, 0x01, 0x01, 0x4d, 0x00, 0x20, 0x07, 0x0a, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x08, 0x0a, 0x60, 0x21, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
0x80, 0x00, 0x08, 0x0a, 0xa0, 0x21, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x08, 0x0a, 0xe0, 0x21, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
0x80, 0x00, 0x08, 0x0a, 0x20, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x04, 0x02, 0x00, 0x22, 0x24, 0x00, 0x00, 0x06, 0x00, 0x80, 0x0a, 0x12, 0x41, 0x00, 
0x00, 0x00, 0x28, 0x12, 0x60, 0x20, 0x40, 0x00, 0x00, 0x16, 0x20, 0x00, 0x20, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x06, 0x48, 0x21, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x07, 0x00, 0x41, 0x00, 
0x00, 0x00, 0x28, 0x12, 0xa0, 0x20, 0x80, 0x00, 0x00, 0x16, 0x08, 0x00, 0x08, 0x00, 0x01, 0x4d, 0x00, 0x20, 0x07, 0x2e, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x08, 0x0a, 0xe0, 0x25, 0x20, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x08, 0x0a, 0x20, 0x26, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x28, 0x0a, 0xc0, 0x20, 0x60, 0x00, 
0x00, 0x1e, 0x02, 0x00, 0x02, 0x00, 0x01, 0x40, 0x00, 0x20, 0x00, 0x0a, 0x06, 0x00, 0x40, 0x00, 0x00, 0x00, 0x28, 0x0a, 0xe0, 0x20, 0xc0, 0x00, 0x00, 0x1e, 0x20, 0x00, 0x20, 0x00, 0x01, 0x00, 
0x80, 0x00, 0x0c, 0x02, 0x80, 0x22, 0x60, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x02, 0x44, 0x21, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
0x80, 0x00, 0x0c, 0x02, 0xc0, 0x22, 0xa0, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x00, 0x23, 0xe0, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 
0x00, 0x00, 0x28, 0x0a, 0x00, 0x21, 0xc0, 0x00, 0x00, 0x1e, 0x40, 0x00, 0x40, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x40, 0x23, 0x20, 0x02, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
0x80, 0x00, 0x0c, 0x02, 0xa0, 0x23, 0x60, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0xe0, 0x23, 0xa0, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
0x80, 0x00, 0x0c, 0x02, 0x20, 0x24, 0xe0, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x60, 0x24, 0x20, 0x02, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x00, 
0x60, 0x0c, 0x04, 0x3a, 0x00, 0x20, 0x40, 0x01, 0x8d, 0x00, 0x00, 0x02, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x28, 0x0a, 0x20, 0x21, 0xc0, 0x00, 0x00, 0x1e, 0x60, 0x00, 0x60, 0x00, 0x01, 0x4d, 
0x00, 0x20, 0x07, 0x13, 0x0a, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0xc0, 0x24, 0x60, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x00, 0x25, 0xa0, 0x01, 
0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x40, 0x25, 0xe0, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x80, 0x25, 0x20, 0x02, 
0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x20, 0x00, 0x13, 0x07, 0x00, 0x31, 0x00, 0x60, 0x0c, 0x04, 0x3a, 0x00, 0x20, 0x60, 0x02, 0x8d, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x4d, 
0x00, 0x20, 0x07, 0x1c, 0x13, 0x00, 0x01, 0x40, 0x00, 0x20, 0x00, 0x1c, 0x08, 0x00, 0x31, 0x00, 0x60, 0x0c, 0x04, 0x3a, 0x00, 0x20, 0x80, 0x03, 0x8d, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x4d, 
0x00, 0x20, 0x07, 0x25, 0x1c, 0x00, 0x01, 0x40, 0x00, 0x20, 0x00, 0x25, 0x09, 0x00, 0x31, 0x00, 0x60, 0x0c, 0x04, 0x3a, 0x00, 0x20, 0xa0, 0x04, 0x8d, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 
0x00, 0x00, 0x0c, 0x06, 0xc8, 0x25, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x28, 0x0a, 0xc4, 0x25, 0xa0, 0x00, 0x00, 0x1e, 0x01, 0x00, 0x01, 0x00, 0x40, 0x00, 
0x00, 0x00, 0x04, 0x02, 0x00, 0x22, 0x24, 0x00, 0x00, 0x06, 0x01, 0x80, 0x0a, 0x0a, 0x01, 0x40, 0x00, 0x20, 0x00, 0x2e, 0x06, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x80, 0x26, 0xe0, 0x05, 
0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x20, 0x27, 0xe0, 0x05, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0xc0, 0x26, 0x20, 0x06, 
0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x60, 0x27, 0x20, 0x06, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0xc0, 0x27, 0xe0, 0x05, 
0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x0c, 0x02, 0x00, 0x28, 0x20, 0x06, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x4d, 0x00, 0x20, 0x07, 0x33, 0x2e, 0x00, 0x31, 0x00, 
0x60, 0x0c, 0x04, 0x3a, 0x00, 0x20, 0xc0, 0x05, 0x8d, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x40, 0x00, 0x20, 0x00, 0x33, 0x07, 0x00, 0x31, 0x00, 0x60, 0x0c, 0x04, 0x3a, 0x00, 0x20, 0x60, 0x06, 
0x8d, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x4d, 0x00, 0x20, 0x07, 0x38, 0x33, 0x00, 0x01, 0x40, 0x00, 0x20, 0x00, 0x38, 0x08, 0x00, 0x31, 0x00, 0x60, 0x0c, 0x04, 0x3a, 0x00, 0x20, 0x00, 0x07, 
0x8d, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x4d, 0x00, 0x20, 0x07, 0x3d, 0x38, 0x00, 0x01, 0x40, 0x00, 0x20, 0x00, 0x3d, 0x09, 0x00, 0x31, 0x00, 0x60, 0x0c, 0x04, 0x3a, 0x00, 0x20, 0xa0, 0x07, 
0x8d, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x4d, 0x00, 0x20, 0x07, 0x7f, 0x00, 0x00, 0x31, 0x00, 0x00, 0x07, 0x00, 0x3a, 0x00, 0x20, 0xe0, 0x0f, 0x00, 0x06, 0x10, 0x00, 0x00, 0x82 };
#else
unsigned int iGPUInit_kernel_isa_size_Gen8 = 4;
unsigned char pGPUInit_kernel_isa_Gen8[] = { 0x00, 0x00, 0x00, 0x00 };
#endif