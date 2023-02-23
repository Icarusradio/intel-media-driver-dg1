/*
* Copyright (c) 2022, Intel Corporation
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
//! \file     ddi_decode_trace_specific.cpp
//! \brief    Definition for decode event trace dump
//!

#include "ddi_decode_trace_specific.h"
#include "codec_def_decode_vp9.h"

namespace decode
{
#if MOS_EVENT_TRACE_DUMP_SUPPORTED

void DecodeEventDataAVCPicParamInit(
    DECODE_EVENTDATA_PICPARAM_AVC *pEventData,
    PCODEC_AVC_PIC_PARAMS         pAvcPicParams)
{
    pEventData->CurrFrameIdx = pAvcPicParams->CurrPic.FrameIdx;
    pEventData->CurrPicFlags = pAvcPicParams->CurrPic.PicFlags;
    pEventData->CurrPicEntry = pAvcPicParams->CurrPic.PicEntry;

    pEventData->pic_width_in_mbs_minus1  = pAvcPicParams->pic_width_in_mbs_minus1;
    pEventData->pic_height_in_mbs_minus1 = pAvcPicParams->pic_height_in_mbs_minus1;
    pEventData->bit_depth_luma_minus8    = pAvcPicParams->bit_depth_luma_minus8;
    pEventData->bit_depth_chroma_minus8  = pAvcPicParams->bit_depth_chroma_minus8;
    pEventData->num_ref_frames           = pAvcPicParams->num_ref_frames;
    pEventData->CurrFieldOrderCnt[0]     = pAvcPicParams->CurrFieldOrderCnt[0];
    pEventData->CurrFieldOrderCnt[1]     = pAvcPicParams->CurrFieldOrderCnt[1];

    pEventData->chroma_format_idc                 = pAvcPicParams->seq_fields.chroma_format_idc;
    pEventData->residual_colour_transform_flag    = pAvcPicParams->seq_fields.residual_colour_transform_flag;
    pEventData->frame_mbs_only_flag               = pAvcPicParams->seq_fields.frame_mbs_only_flag;
    pEventData->mb_adaptive_frame_field_flag      = pAvcPicParams->seq_fields.mb_adaptive_frame_field_flag;
    pEventData->direct_8x8_inference_flag         = pAvcPicParams->seq_fields.direct_8x8_inference_flag;
    pEventData->log2_max_frame_num_minus4         = pAvcPicParams->seq_fields.log2_max_frame_num_minus4;
    pEventData->pic_order_cnt_type                = pAvcPicParams->seq_fields.pic_order_cnt_type;
    pEventData->log2_max_pic_order_cnt_lsb_minus4 = pAvcPicParams->seq_fields.log2_max_pic_order_cnt_lsb_minus4;
    pEventData->delta_pic_order_always_zero_flag  = pAvcPicParams->seq_fields.delta_pic_order_always_zero_flag;

    pEventData->num_slice_groups_minus1        = pAvcPicParams->num_slice_groups_minus1;
    pEventData->slice_group_map_type           = pAvcPicParams->slice_group_map_type;
    pEventData->slice_group_change_rate_minus1 = pAvcPicParams->slice_group_change_rate_minus1;
    pEventData->pic_init_qp_minus26            = pAvcPicParams->pic_init_qp_minus26;
    pEventData->chroma_qp_index_offset         = pAvcPicParams->chroma_qp_index_offset;
    pEventData->second_chroma_qp_index_offset  = pAvcPicParams->second_chroma_qp_index_offset;

    pEventData->entropy_coding_mode_flag               = pAvcPicParams->pic_fields.entropy_coding_mode_flag;
    pEventData->weighted_pred_flag                     = pAvcPicParams->pic_fields.weighted_pred_flag;
    pEventData->weighted_bipred_idc                    = pAvcPicParams->pic_fields.weighted_bipred_idc;
    pEventData->transform_8x8_mode_flag                = pAvcPicParams->pic_fields.transform_8x8_mode_flag;
    pEventData->field_pic_flag                         = pAvcPicParams->pic_fields.field_pic_flag;
    pEventData->constrained_intra_pred_flag            = pAvcPicParams->pic_fields.constrained_intra_pred_flag;
    pEventData->pic_order_present_flag                 = pAvcPicParams->pic_fields.pic_order_present_flag;
    pEventData->deblocking_filter_control_present_flag = pAvcPicParams->pic_fields.deblocking_filter_control_present_flag;
    pEventData->redundant_pic_cnt_present_flag         = pAvcPicParams->pic_fields.redundant_pic_cnt_present_flag;
    pEventData->reference_pic_flag                     = pAvcPicParams->pic_fields.reference_pic_flag;
    pEventData->IntraPicFlag                           = pAvcPicParams->pic_fields.IntraPicFlag;

    pEventData->num_ref_idx_l0_active_minus1 = pAvcPicParams->num_ref_idx_l0_active_minus1;
    pEventData->num_ref_idx_l1_active_minus1 = pAvcPicParams->num_ref_idx_l1_active_minus1;

    for (int i = 0; i < 16; i++)
    {
        pEventData->RefFrameList[i].FrameIdx = pAvcPicParams->RefFrameList[i].FrameIdx;
        pEventData->RefFrameList[i].PicFlags = pAvcPicParams->RefFrameList[i].PicFlags;
        pEventData->RefFrameList[i].PicEntry = pAvcPicParams->RefFrameList[i].PicEntry;
    }

    for (int i = 0; i < 16; i++)
    {
        pEventData->FrameNumList[i] = pAvcPicParams->FrameNumList[i];
    }

    pEventData->NonExistingFrameFlags = pAvcPicParams->NonExistingFrameFlags;
    pEventData->UsedForReferenceFlags = pAvcPicParams->UsedForReferenceFlags;
    pEventData->frame_num             = pAvcPicParams->frame_num;

    for (int j = 0; j < 16; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            pEventData->FieldOrderCntList[j][i] = pAvcPicParams->FieldOrderCntList[j][i];
        }
    }

    pEventData->StatusReportFeedbackNumber = pAvcPicParams->StatusReportFeedbackNumber;
}

void DecodeEventDataAVCSliceParamInit(
    DECODE_EVENTDATA_SLICEPARAM_AVC *pEventData,
    PCODEC_AVC_SLICE_PARAMS         pAvcSliceParams,
    uint32_t                        dwNumSlices)
{
    for (uint32_t i = 0; i < dwNumSlices; i++)
    {
        pEventData->slice_data_size   = pAvcSliceParams->slice_data_size;
        pEventData->slice_data_offset = pAvcSliceParams->slice_data_offset;
        pAvcSliceParams++;
        pEventData++;
    }
}

void DecodeEventDataAVCLongSliceParamInit(
    DECODE_EVENTDATA_LONGSLICEPARAM_AVC *pEventData,
    PCODEC_AVC_SLICE_PARAMS             pAvcSliceParams,
    uint32_t                            dwNumSlices)
{
    for (uint32_t i = 0; i < dwNumSlices; i++)
    {
        pEventData->slice_data_size               = pAvcSliceParams->slice_data_size;    
        pEventData->slice_data_offset             = pAvcSliceParams->slice_data_offset;
        pEventData->slice_data_bit_offset         = pAvcSliceParams->slice_data_bit_offset;
        pEventData->first_mb_in_slice             = pAvcSliceParams->first_mb_in_slice;
        pEventData->NumMbsForSlice                = pAvcSliceParams->NumMbsForSlice;
        pEventData->slice_type                    = pAvcSliceParams->slice_type;   
        pEventData->direct_spatial_mv_pred_flag   = pAvcSliceParams->direct_spatial_mv_pred_flag;
        pEventData->num_ref_idx_l0_active_minus1  = pAvcSliceParams->num_ref_idx_l0_active_minus1;
        pEventData->num_ref_idx_l1_active_minus1  = pAvcSliceParams->num_ref_idx_l1_active_minus1;
        pEventData->cabac_init_idc                = pAvcSliceParams->cabac_init_idc;        
        pEventData->slice_qp_delta                = pAvcSliceParams->slice_qp_delta;    
        pEventData->disable_deblocking_filter_idc = pAvcSliceParams->disable_deblocking_filter_idc;
        pEventData->slice_alpha_c0_offset_div2    = pAvcSliceParams->slice_alpha_c0_offset_div2;
        pEventData->slice_beta_offset_div2        = pAvcSliceParams->slice_beta_offset_div2;


        for (uint32_t j = 0; j < 32; j++)
        {
            pEventData->RefPicList0[j].FrameIdx = pAvcSliceParams->RefPicList[0][j].FrameIdx;
            pEventData->RefPicList0[j].PicFlags = pAvcSliceParams->RefPicList[0][j].PicFlags;
            pEventData->RefPicList0[j].PicEntry = pAvcSliceParams->RefPicList[0][j].PicEntry;

            pEventData->RefPicList1[j].FrameIdx = pAvcSliceParams->RefPicList[1][j].FrameIdx;
            pEventData->RefPicList1[j].PicFlags = pAvcSliceParams->RefPicList[1][j].PicFlags;
            pEventData->RefPicList1[j].PicEntry = pAvcSliceParams->RefPicList[1][j].PicEntry;
        }
        
        pEventData->luma_log2_weight_denom   = pAvcSliceParams->luma_log2_weight_denom;
        pEventData->chroma_log2_weight_denom = pAvcSliceParams->chroma_log2_weight_denom;

        for (uint32_t j = 0; j < 32; j++)
        {
            // list 0
            pEventData->Weights0x00[j] = pAvcSliceParams->Weights[0][j][0][0];  // Y weight
            pEventData->Weights0x01[j] = pAvcSliceParams->Weights[0][j][0][1];  // Y offset
    
            pEventData->Weights0x10[j] = pAvcSliceParams->Weights[0][j][1][0];  // Cb weight
            pEventData->Weights0x11[j] = pAvcSliceParams->Weights[0][j][1][1];  // Cb offset
    
            pEventData->Weights0x20[j] = pAvcSliceParams->Weights[0][j][2][0];  // Cr weight
            pEventData->Weights0x21[j] = pAvcSliceParams->Weights[0][j][2][1];  // Cr offset
    
            // list 1
            pEventData->Weights1x00[j] = pAvcSliceParams->Weights[1][j][0][0];  // Y weight
            pEventData->Weights1x01[j] = pAvcSliceParams->Weights[1][j][0][1];  // Y offset
    
            pEventData->Weights1x10[j] = pAvcSliceParams->Weights[1][j][1][0];  // Cb weight
            pEventData->Weights1x11[j] = pAvcSliceParams->Weights[1][j][1][1];  // Cb offset
    
            pEventData->Weights1x20[j] = pAvcSliceParams->Weights[1][j][2][0];  // Cr weight
            pEventData->Weights1x21[j] = pAvcSliceParams->Weights[1][j][2][1];  // Cr offset
        }

        pEventData->slice_id               = pAvcSliceParams->slice_id;
        pEventData->first_mb_in_next_slice = pAvcSliceParams->first_mb_in_next_slice;

        pAvcSliceParams++;
        pEventData++;
    }
}

void DecodeEventDataHEVCPicParamInit(
    DECODE_EVENTDATA_PICPARAM_HEVC *pEventData,
    PCODEC_HEVC_PIC_PARAMS          pHevcPicParams)
{
    pEventData->CurrFrameIdx                = pHevcPicParams->CurrPic.FrameIdx;
    pEventData->CurrPicFlags                = pHevcPicParams->CurrPic.PicFlags;
    pEventData->CurrPicEntry                = pHevcPicParams->CurrPic.PicEntry;
    pEventData->PicWidthInMinCbsY           = pHevcPicParams->PicWidthInMinCbsY;
    pEventData->PicHeightInMinCbsY          = pHevcPicParams->PicHeightInMinCbsY;
    pEventData->wFormatAndSequenceInfoFlags = pHevcPicParams->wFormatAndSequenceInfoFlags;

    pEventData->sps_max_dec_pic_buffering_minus1         = pHevcPicParams->sps_max_dec_pic_buffering_minus1;
    pEventData->log2_min_luma_coding_block_size_minus3   = pHevcPicParams->log2_min_luma_coding_block_size_minus3;
    pEventData->log2_diff_max_min_luma_coding_block_size = pHevcPicParams->log2_diff_max_min_luma_coding_block_size;
    pEventData->log2_min_transform_block_size_minus2     = pHevcPicParams->log2_min_transform_block_size_minus2;
    pEventData->log2_diff_max_min_transform_block_size   = pHevcPicParams->log2_diff_max_min_transform_block_size;
    pEventData->max_transform_hierarchy_depth_inter      = pHevcPicParams->max_transform_hierarchy_depth_inter;
    pEventData->max_transform_hierarchy_depth_intra      = pHevcPicParams->max_transform_hierarchy_depth_intra;
    pEventData->num_short_term_ref_pic_sets              = pHevcPicParams->num_short_term_ref_pic_sets;
    pEventData->num_long_term_ref_pic_sps                = pHevcPicParams->num_long_term_ref_pic_sps;
    pEventData->num_ref_idx_l0_default_active_minus1     = pHevcPicParams->num_ref_idx_l0_default_active_minus1;
    pEventData->num_ref_idx_l1_default_active_minus1     = pHevcPicParams->num_ref_idx_l1_default_active_minus1;
    pEventData->init_qp_minus26                          = pHevcPicParams->init_qp_minus26;
    pEventData->ucNumDeltaPocsOfRefRpsIdx                = pHevcPicParams->ucNumDeltaPocsOfRefRpsIdx;
    pEventData->wNumBitsForShortTermRPSInSlice           = pHevcPicParams->wNumBitsForShortTermRPSInSlice;
    pEventData->dwCodingParamToolFlags                   = pHevcPicParams->dwCodingParamToolFlags;
    pEventData->dwCodingSettingPicturePropertyFlags      = pHevcPicParams->dwCodingSettingPicturePropertyFlags;
    pEventData->pps_cb_qp_offset                         = pHevcPicParams->pps_cb_qp_offset;
    pEventData->pps_cr_qp_offset                         = pHevcPicParams->pps_cr_qp_offset;
    pEventData->num_tile_columns_minus1                  = pHevcPicParams->num_tile_columns_minus1;
    pEventData->num_tile_rows_minus1                     = pHevcPicParams->num_tile_rows_minus1;
    pEventData->deblocking_filter_override_enabled_flag  = pHevcPicParams->deblocking_filter_override_enabled_flag;
    pEventData->pps_deblocking_filter_disabled_flag      = pHevcPicParams->pps_deblocking_filter_disabled_flag;

    for (int i = 0; i < CODEC_MAX_NUM_REF_FRAME_HEVC; i++)
    {
        pEventData->RefFrameList[i].FrameIdx = pHevcPicParams->RefFrameList[i].FrameIdx;
        pEventData->RefFrameList[i].PicFlags = pHevcPicParams->RefFrameList[i].PicFlags;
        pEventData->RefFrameList[i].PicEntry = pHevcPicParams->RefFrameList[i].PicEntry;
    }

    for (int i = 0; i < HEVC_NUM_MAX_TILE_COLUMN - 1; i++)
    {
        pEventData->column_width_minus1[i] = pHevcPicParams->column_width_minus1[i];
    }
    for (int i = 0; i < HEVC_NUM_MAX_TILE_ROW - 1; i++)
    {
        pEventData->row_height_minus1[i] = pHevcPicParams->row_height_minus1[i];
    }

    pEventData->diff_cu_qp_delta_depth           = pHevcPicParams->diff_cu_qp_delta_depth;
    pEventData->pps_beta_offset_div2             = pHevcPicParams->pps_beta_offset_div2;
    pEventData->pps_tc_offset_div2               = pHevcPicParams->pps_tc_offset_div2;
    pEventData->log2_parallel_merge_level_minus2 = pHevcPicParams->log2_parallel_merge_level_minus2;
    pEventData->CurrPicOrderCntVal               = pHevcPicParams->CurrPicOrderCntVal;          

    for (int i = 0; i < CODEC_MAX_NUM_REF_FRAME_HEVC; i++)
    {
        pEventData->PicOrderCntValList[i] = pHevcPicParams->PicOrderCntValList[i];
    }

    for (int i = 0; i < 8; i++)
    {
        pEventData->RefPicSetStCurrBefore[i] = pHevcPicParams->RefPicSetStCurrBefore[i];
        pEventData->RefPicSetStCurrAfter[i]  = pHevcPicParams->RefPicSetStCurrAfter[i];
        pEventData->RefPicSetLtCurr[i]       = pHevcPicParams->RefPicSetLtCurr[i];
    }

    pEventData->RefFieldPicFlag            = pHevcPicParams->RefFieldPicFlag;
    pEventData->RefBottomFieldFlag         = pHevcPicParams->RefBottomFieldFlag;    
    pEventData->TotalNumEntryPointOffsets  = pHevcPicParams->TotalNumEntryPointOffsets;
    pEventData->StatusReportFeedbackNumber = pHevcPicParams->StatusReportFeedbackNumber;
}

void DecodeEventDataHEVCRExtPicParamInit(
    DECODE_EVENTDATA_REXTPICPARAM_HEVC *pEventData,
    PCODEC_HEVC_PIC_PARAMS             pHevcPicParams,
    PCODEC_HEVC_EXT_PIC_PARAMS         pHevcExtPicParams)
{
    pEventData->CurrFrameIdx                              = pHevcPicParams->CurrPic.FrameIdx;
    pEventData->RangeExtensionPropertyFlags               = pHevcExtPicParams->PicRangeExtensionFlags.dwRangeExtensionPropertyFlags;
    pEventData->diff_cu_chroma_qp_offset_depth            = pHevcExtPicParams->diff_cu_chroma_qp_offset_depth;                      
    pEventData->chroma_qp_offset_list_len_minus1          = pHevcExtPicParams->chroma_qp_offset_list_len_minus1;                    
    pEventData->log2_sao_offset_scale_luma                = pHevcExtPicParams->log2_sao_offset_scale_luma;                          
    pEventData->log2_sao_offset_scale_chroma              = pHevcExtPicParams->log2_sao_offset_scale_chroma;                        
    pEventData->log2_max_transform_skip_block_size_minus2 = pHevcExtPicParams->log2_max_transform_skip_block_size_minus2;

    for (int i = 0; i < 6; i++)
    {
        pEventData->cb_qp_offset_list[i] = pHevcExtPicParams->cb_qp_offset_list[i];
        pEventData->cr_qp_offset_list[i] = pHevcExtPicParams->cr_qp_offset_list[i];
    }
}

void DecodeEventDataHEVCSccPicParamInit(
    DECODE_EVENTDATA_SCCPICPARAM_HEVC *pEventData,
    PCODEC_HEVC_PIC_PARAMS            pHevcPicParams,
    PCODEC_HEVC_SCC_PIC_PARAMS        pHevcSccPicParams)
{
    pEventData->CurrFrameIdx                     = pHevcPicParams->CurrPic.FrameIdx;
    pEventData->ScreenContentCodingPropertyFlags = pHevcSccPicParams->PicSCCExtensionFlags.dwScreenContentCodingPropertyFlags;
    pEventData->palette_max_size                 = pHevcSccPicParams->palette_max_size;                
    pEventData->delta_palette_max_predictor_size = pHevcSccPicParams->delta_palette_max_predictor_size;
    pEventData->PredictorPaletteSize             = pHevcSccPicParams->PredictorPaletteSize;            
    pEventData->pps_act_y_qp_offset_plus5        = pHevcSccPicParams->pps_act_y_qp_offset_plus5;       
    pEventData->pps_act_cb_qp_offset_plus5       = pHevcSccPicParams->pps_act_cb_qp_offset_plus5;      
    pEventData->pps_act_cr_qp_offset_plus3       = pHevcSccPicParams->pps_act_cr_qp_offset_plus3;

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 128; i++)
        {
            pEventData->PredictorPaletteEntries[j][i] = pHevcSccPicParams->PredictorPaletteEntries[j][i];
        }
    }
}

void DecodeEventDataHEVCSliceParamInit(
    DECODE_EVENTDATA_SLICEPARAM_HEVC *pEventData,
    PCODEC_HEVC_SLICE_PARAMS         pHevcSliceParams,
    uint32_t                         dwNumSlices)
{
    for (uint32_t i = 0; i < dwNumSlices; i++)
    {
        pEventData->NumEmuPrevnBytesInSliceHdr = pHevcSliceParams->NumEmuPrevnBytesInSliceHdr;
        pEventData->slice_data_size            = pHevcSliceParams->slice_data_size;
        pEventData->slice_data_offset          = pHevcSliceParams->slice_data_offset;
        pHevcSliceParams++;
        pEventData++;
    }
}

void DecodeEventDataHEVCLongSliceParamInit(
    DECODE_EVENTDATA_LONGSLICEPARAM_HEVC *pEventData,
    PCODEC_HEVC_SLICE_PARAMS             pHevcSliceParams,
    uint32_t                             dwNumSlices)
{
    for (uint32_t i = 0; i < dwNumSlices; i++)
    {
        pEventData->slice_data_size            = pHevcSliceParams->slice_data_size;
        pEventData->slice_data_offset          = pHevcSliceParams->slice_data_offset;
        pEventData->ByteOffsetToSliceData      = pHevcSliceParams->ByteOffsetToSliceData;
        pEventData->NumEmuPrevnBytesInSliceHdr = pHevcSliceParams->NumEmuPrevnBytesInSliceHdr;
        pEventData->slice_segment_address      = pHevcSliceParams->slice_segment_address;

        for (uint32_t j = 0; j < CODEC_MAX_NUM_REF_FRAME_HEVC; j++)
        {
            pEventData->RefPicList0[j].FrameIdx = pHevcSliceParams->RefPicList[0][j].FrameIdx;
            pEventData->RefPicList1[j].FrameIdx = pHevcSliceParams->RefPicList[1][j].FrameIdx;
        }

        pEventData->LastSliceOfPic                               = pHevcSliceParams->LongSliceFlags.fields.LastSliceOfPic;
        pEventData->dependent_slice_segment_flag                 = pHevcSliceParams->LongSliceFlags.fields.dependent_slice_segment_flag;
        pEventData->slice_type                                   = pHevcSliceParams->LongSliceFlags.fields.slice_type;             
        pEventData->color_plane_id                               = pHevcSliceParams->LongSliceFlags.fields.color_plane_id;             
        pEventData->slice_sao_luma_flag                          = pHevcSliceParams->LongSliceFlags.fields.slice_sao_luma_flag;             
        pEventData->slice_sao_chroma_flag                        = pHevcSliceParams->LongSliceFlags.fields.slice_sao_chroma_flag;             
        pEventData->mvd_l1_zero_flag                             = pHevcSliceParams->LongSliceFlags.fields.mvd_l1_zero_flag;             
        pEventData->cabac_init_flag                              = pHevcSliceParams->LongSliceFlags.fields.cabac_init_flag;             
        pEventData->slice_temporal_mvp_enabled_flag              = pHevcSliceParams->LongSliceFlags.fields.slice_temporal_mvp_enabled_flag;             
        pEventData->slice_deblocking_filter_disabled_flag        = pHevcSliceParams->LongSliceFlags.fields.slice_deblocking_filter_disabled_flag;      
        pEventData->collocated_from_l0_flag                      = pHevcSliceParams->LongSliceFlags.fields.collocated_from_l0_flag;            
        pEventData->slice_loop_filter_across_slices_enabled_flag = pHevcSliceParams->LongSliceFlags.fields.slice_loop_filter_across_slices_enabled_flag;

        pEventData->collocated_ref_idx             = pHevcSliceParams->collocated_ref_idx;
        pEventData->num_ref_idx_l0_active_minus1   = pHevcSliceParams->num_ref_idx_l0_active_minus1;
        pEventData->num_ref_idx_l1_active_minus1   = pHevcSliceParams->num_ref_idx_l1_active_minus1;
        pEventData->slice_qp_delta                 = pHevcSliceParams->slice_qp_delta;
        pEventData->slice_cb_qp_offset             = pHevcSliceParams->slice_cb_qp_offset;
        pEventData->slice_cr_qp_offset             = pHevcSliceParams->slice_cr_qp_offset;
        pEventData->slice_beta_offset_div2         = pHevcSliceParams->slice_beta_offset_div2;     
        pEventData->slice_tc_offset_div2           = pHevcSliceParams->slice_tc_offset_div2;          
        pEventData->luma_log2_weight_denom         = pHevcSliceParams->luma_log2_weight_denom;        
        pEventData->delta_chroma_log2_weight_denom = pHevcSliceParams->delta_chroma_log2_weight_denom;

        MOS_SecureMemcpy(pEventData->delta_luma_weight_l0,
            15,
            pHevcSliceParams->delta_luma_weight_l0,
            15);
        MOS_SecureMemcpy(pEventData->delta_luma_weight_l1,
            15,
            pHevcSliceParams->delta_luma_weight_l1,
            15);
        MOS_SecureMemcpy(pEventData->delta_chroma_weight_l0,
            15 * 2,
            pHevcSliceParams->delta_chroma_weight_l0,
            15 * 2);
        MOS_SecureMemcpy(pEventData->delta_chroma_weight_l1,
            15 * 2,
            pHevcSliceParams->delta_chroma_weight_l1,
            15 * 2);    
        MOS_SecureMemcpy(pEventData->luma_offset_l0,
            15,
            pHevcSliceParams->luma_offset_l0,
            15);
        MOS_SecureMemcpy(pEventData->luma_offset_l1,
            15,
            pHevcSliceParams->luma_offset_l1,
            15);
        MOS_SecureMemcpy(pEventData->ChromaOffsetL0,
            15 * 2,
            pHevcSliceParams->ChromaOffsetL0,
            15 * 2);
        MOS_SecureMemcpy(pEventData->ChromaOffsetL1,
            15 * 2,
            pHevcSliceParams->ChromaOffsetL1,
            15 * 2);

        pEventData->five_minus_max_num_merge_cand = pHevcSliceParams->five_minus_max_num_merge_cand;
        pEventData->num_entry_point_offsets       = pHevcSliceParams->num_entry_point_offsets;
        pEventData->EntryOffsetToSubsetArray      = pHevcSliceParams->EntryOffsetToSubsetArray;

        pHevcSliceParams++;
        pEventData++;
    }
}

void DecodeEventDataHEVCRExtLongSliceParamInit(
    DECODE_EVENTDATA_REXTLONGSLICEPARAM_HEVC *pEventData,
    PCODEC_HEVC_EXT_SLICE_PARAMS             pHevcRextSliceParams,
    uint32_t                                 dwNumSlices,
    bool                                     isHevcScc)
{
    for (uint32_t i = 0; i < dwNumSlices; i++)
    {
        MOS_SecureMemcpy(pEventData->luma_offset_l0,
            15 * sizeof(int16_t),
            pHevcRextSliceParams->luma_offset_l0,
            15 * sizeof(int16_t));
        MOS_SecureMemcpy(pEventData->luma_offset_l1,
            15 * sizeof(int16_t),
            pHevcRextSliceParams->luma_offset_l1,
            15 * sizeof(int16_t));
        MOS_SecureMemcpy(pEventData->ChromaOffsetL0,
            15 * 2 * sizeof(int16_t),
            pHevcRextSliceParams->ChromaOffsetL0,
            15 * 2 * sizeof(int16_t));
        MOS_SecureMemcpy(pEventData->ChromaOffsetL1,
            15 * 2 * sizeof(int16_t),
            pHevcRextSliceParams->ChromaOffsetL1,
            15 * 2 * sizeof(int16_t));
            
        pEventData->cu_chroma_qp_offset_enabled_flag = pHevcRextSliceParams->cu_chroma_qp_offset_enabled_flag;

        pEventData->isHevcScc = isHevcScc;
        if(isHevcScc)
        {
            pEventData->use_integer_mv_flag    = pHevcRextSliceParams->use_integer_mv_flag;
            pEventData->slice_act_y_qp_offset  = pHevcRextSliceParams->slice_act_y_qp_offset ;
            pEventData->slice_act_cb_qp_offset = pHevcRextSliceParams->slice_act_cb_qp_offset;
            pEventData->slice_act_cr_qp_offset = pHevcRextSliceParams->slice_act_cr_qp_offset;
        }
        
        pHevcRextSliceParams++;
        pEventData++;
    }
}

void DecodeEventDataVP9PicParamInit(
    DECODE_EVENTDATA_PICPARAM_VP9 *pEventData,
    void                          *pPicParams)
{
    PCODEC_VP9_PIC_PARAMS pVp9PicParams = (PCODEC_VP9_PIC_PARAMS)pPicParams;

    pEventData->CurrPic_FrameIdx = pVp9PicParams->CurrPic.FrameIdx;
    pEventData->CurrPic_PicFlags = pVp9PicParams->CurrPic.PicFlags;

    pEventData->FrameWidthMinus1  = pVp9PicParams->FrameWidthMinus1;
    pEventData->FrameHeightMinus1 = pVp9PicParams->FrameHeightMinus1;
    pEventData->profile           = pVp9PicParams->profile;
    pEventData->BitDepthMinus8    = pVp9PicParams->BitDepthMinus8;
    pEventData->subsampling_x     = pVp9PicParams->subsampling_x;
    pEventData->subsampling_y     = pVp9PicParams->subsampling_y;

    pEventData->frame_type                   = pVp9PicParams->PicFlags.fields.frame_type;
    pEventData->show_frame                   = pVp9PicParams->PicFlags.fields.show_frame;
    pEventData->error_resilient_mode         = pVp9PicParams->PicFlags.fields.error_resilient_mode;
    pEventData->intra_only                   = pVp9PicParams->PicFlags.fields.intra_only;
    pEventData->LastRefIdx                   = pVp9PicParams->PicFlags.fields.LastRefIdx;
    pEventData->LastRefSignBias              = pVp9PicParams->PicFlags.fields.LastRefSignBias;
    pEventData->GoldenRefIdx                 = pVp9PicParams->PicFlags.fields.GoldenRefIdx;
    pEventData->GoldenRefSignBias            = pVp9PicParams->PicFlags.fields.GoldenRefSignBias;
    pEventData->AltRefIdx                    = pVp9PicParams->PicFlags.fields.AltRefIdx;
    pEventData->AltRefSignBias               = pVp9PicParams->PicFlags.fields.AltRefSignBias;
    pEventData->allow_high_precision_mv      = pVp9PicParams->PicFlags.fields.allow_high_precision_mv;
    pEventData->mcomp_filter_type            = pVp9PicParams->PicFlags.fields.mcomp_filter_type;
    pEventData->frame_parallel_decoding_mode = pVp9PicParams->PicFlags.fields.frame_parallel_decoding_mode;
    pEventData->segmentation_enabled         = pVp9PicParams->PicFlags.fields.segmentation_enabled;
    pEventData->segmentation_temporal_update = pVp9PicParams->PicFlags.fields.segmentation_temporal_update;
    pEventData->segmentation_update_map      = pVp9PicParams->PicFlags.fields.segmentation_update_map;
    pEventData->reset_frame_context          = pVp9PicParams->PicFlags.fields.reset_frame_context;
    pEventData->refresh_frame_context        = pVp9PicParams->PicFlags.fields.refresh_frame_context;
    pEventData->frame_context_idx            = pVp9PicParams->PicFlags.fields.frame_context_idx;
    pEventData->LosslessFlag                 = pVp9PicParams->PicFlags.fields.LosslessFlag;

    pEventData->filter_level      = pVp9PicParams->filter_level;
    pEventData->sharpness_level   = pVp9PicParams->sharpness_level;
    pEventData->log2_tile_rows    = pVp9PicParams->log2_tile_rows;
    pEventData->log2_tile_columns = pVp9PicParams->log2_tile_columns;

    for (int i = 0; i < 8; i++)
    {
        pEventData->RefFrameList[i] = pVp9PicParams->RefFrameList[i].FrameIdx;
    }

    pEventData->UncompressedHeaderLengthInBytes = pVp9PicParams->UncompressedHeaderLengthInBytes;
    pEventData->FirstPartitionSize              = pVp9PicParams->FirstPartitionSize;
    pEventData->StatusReportFeedbackNumber      = pVp9PicParams->StatusReportFeedbackNumber;
}

void DecodeEventDataVP9SegParamInit(
    DECODE_EVENTDATA_SEGPARAM_VP9 *pEventData,
    void                          *pPicParams,
    void                          *pSegData)
{
    PCODEC_VP9_PIC_PARAMS pVp9PicParams = (PCODEC_VP9_PIC_PARAMS)pPicParams;
    pEventData->SegmentEnabled          = pVp9PicParams->PicFlags.fields.segmentation_enabled;
    pEventData->SegmentTemporalUpdate   = pVp9PicParams->PicFlags.fields.segmentation_temporal_update;
    pEventData->SegmentUpdateMap        = pVp9PicParams->PicFlags.fields.segmentation_update_map;

    PCODEC_VP9_SEG_PARAMS pVp9SegData = (PCODEC_VP9_SEG_PARAMS)pSegData;
    for (int i = 0; i < 8; i++)
    {
        pEventData->SegParam[i].SegmentReferenceEnabled = pVp9SegData->SegmentFlags.fields.SegmentReferenceEnabled;
        pEventData->SegParam[i].SegmentReference        = pVp9SegData->SegmentFlags.fields.SegmentReference;
        pEventData->SegParam[i].SegmentReferenceSkipped = pVp9SegData->SegmentFlags.fields.SegmentReferenceSkipped;

        pEventData->SegParam[i].LumaACQuantScale   = pVp9SegData->LumaACQuantScale;
        pEventData->SegParam[i].LumaDCQuantScale   = pVp9SegData->LumaDCQuantScale;
        pEventData->SegParam[i].ChromaACQuantScale = pVp9SegData->ChromaACQuantScale;
        pEventData->SegParam[i].ChromaDCQuantScale = pVp9SegData->ChromaDCQuantScale;

        pVp9SegData++;
    }
}

void DecodeEventDataAV1PicParamInit(
    DECODE_EVENTDATA_PICPARAM_AV1 *pEventData,
    CodecAv1PicParams             *pAv1PicParams)
{
    pEventData->CurrFrameIdx                 = pAv1PicParams->m_currPic.FrameIdx;
    pEventData->profile                      = pAv1PicParams->m_profile;
    pEventData->enableOrderHint              = pAv1PicParams->m_seqInfoFlags.m_fields.m_enableOrderHint;
    pEventData->orderHintBitsMinus1          = pAv1PicParams->m_orderHintBitsMinus1;
    pEventData->bitDepthIdx                  = pAv1PicParams->m_bitDepthIdx;
    pEventData->frameWidthMinus1             = pAv1PicParams->m_frameWidthMinus1;
    pEventData->frameHeightMinus1            = pAv1PicParams->m_frameHeightMinus1;
    pEventData->superResUpscaledWidthMinus1  = pAv1PicParams->m_superResUpscaledWidthMinus1;
    pEventData->superResUpscaledHeightMinus1 = pAv1PicParams->m_superResUpscaledHeightMinus1;

    // Sequence Info
    pEventData->use128x128Superblock     = pAv1PicParams->m_seqInfoFlags.m_fields.m_use128x128Superblock; 
    pEventData->enableIntraEdgeFilter    = pAv1PicParams->m_seqInfoFlags.m_fields.m_enableIntraEdgeFilter;
    pEventData->enableInterintraCompound = pAv1PicParams->m_seqInfoFlags.m_fields.m_enableInterintraCompound;
    pEventData->enableMaskedCompound     = pAv1PicParams->m_seqInfoFlags.m_fields.m_enableMaskedCompound;
    pEventData->enableDualFilter         = pAv1PicParams->m_seqInfoFlags.m_fields.m_enableDualFilter;      
    pEventData->enableJntComp            = pAv1PicParams->m_seqInfoFlags.m_fields.m_enableJntComp;         
    pEventData->enableCdef               = pAv1PicParams->m_seqInfoFlags.m_fields.m_enableCdef;            
    pEventData->filmGrainParamsPresent   = pAv1PicParams->m_seqInfoFlags.m_fields.m_filmGrainParamsPresent;
    pEventData->enableFilterIntra        = pAv1PicParams->m_seqInfoFlags.m_fields.m_enableFilterIntra;     
    pEventData->monoChrome               = pAv1PicParams->m_seqInfoFlags.m_fields.m_monoChrome;   
    pEventData->subsamplingX             = pAv1PicParams->m_seqInfoFlags.m_fields.m_subsamplingX;         
    pEventData->subsamplingY             = pAv1PicParams->m_seqInfoFlags.m_fields.m_subsamplingY;

    // Pic Info
    pEventData->allowWarpedMotion        = pAv1PicParams->m_picInfoFlags.m_fields.m_allowWarpedMotion;
    pEventData->allowScreenContentTools  = pAv1PicParams->m_picInfoFlags.m_fields.m_allowScreenContentTools;
    pEventData->forceIntegerMv           = pAv1PicParams->m_picInfoFlags.m_fields.m_forceIntegerMv;
    pEventData->allowIntrabc             = pAv1PicParams->m_picInfoFlags.m_fields.m_allowIntrabc;
    pEventData->allowHighPrecisionMv     = pAv1PicParams->m_picInfoFlags.m_fields.m_allowHighPrecisionMv;
    pEventData->isMotionModeSwitchable   = pAv1PicParams->m_picInfoFlags.m_fields.m_isMotionModeSwitchable;
    pEventData->disableFrameEndUpdateCdf = pAv1PicParams->m_picInfoFlags.m_fields.m_disableFrameEndUpdateCdf;
    pEventData->disableCdfUpdate         = pAv1PicParams->m_picInfoFlags.m_fields.m_disableCdfUpdate;
    pEventData->useSuperres              = pAv1PicParams->m_picInfoFlags.m_fields.m_useSuperres;
    pEventData->useRefFrameMvs           = pAv1PicParams->m_picInfoFlags.m_fields.m_useRefFrameMvs;
    pEventData->showFrame                = pAv1PicParams->m_picInfoFlags.m_fields.m_showFrame;
    pEventData->showableFrame            = pAv1PicParams->m_picInfoFlags.m_fields.m_showableFrame;
    pEventData->frameType                = pAv1PicParams->m_picInfoFlags.m_fields.m_frameType;

    // Reference
    for (int i = 0; i < 8; i++)
    {
        pEventData->RefFrameMapIdx[i] = pAv1PicParams->m_refFrameMap[i].FrameIdx;
    }
    for (int i = 0; i < 7; i++)
    {
        pEventData->RefFrameIdx[i] = pAv1PicParams->m_refFrameIdx[i];
    }
    pEventData->primaryRefFrame          = pAv1PicParams->m_primaryRefFrame;
    pEventData->orderHint                = pAv1PicParams->m_orderHint;
    pEventData->superresScaleDenominator = pAv1PicParams->m_superresScaleDenominator;
    pEventData->interpFilter             = pAv1PicParams->m_interpFilter;

    // Deblocking Filter
    pEventData->filterLevel_0       = pAv1PicParams->m_filterLevel[0];
    pEventData->filterLevel_1       = pAv1PicParams->m_filterLevel[1];
    pEventData->filterLevelU        = pAv1PicParams->m_filterLevelU;
    pEventData->filterLevelV        = pAv1PicParams->m_filterLevelV;
    pEventData->sharpnessLevel      = pAv1PicParams->m_loopFilterInfoFlags.m_fields.m_sharpnessLevel;
    pEventData->modeRefDeltaEnabled = pAv1PicParams->m_loopFilterInfoFlags.m_fields.m_modeRefDeltaEnabled;
    pEventData->modeRefDeltaUpdate  = pAv1PicParams->m_loopFilterInfoFlags.m_fields.m_modeRefDeltaUpdate;
    for (int i = 0; i < 8; i++)
    {
        pEventData->RefDeltas[i] = pAv1PicParams->m_refDeltas[i];
    }
    for (int i = 0; i < 2; i++)
    {
        pEventData->ModeDeltas[i] = pAv1PicParams->m_modeDeltas[i];
    }

    // Quantization
    pEventData->baseQindex   = pAv1PicParams->m_baseQindex;
    pEventData->yDcDeltaQ    = pAv1PicParams->m_yDcDeltaQ;
    pEventData->uDcDeltaQ    = pAv1PicParams->m_uDcDeltaQ;
    pEventData->uAcDeltaQ    = pAv1PicParams->m_uAcDeltaQ;
    pEventData->vDcDeltaQ    = pAv1PicParams->m_vDcDeltaQ;
    pEventData->vAcDeltaQ    = pAv1PicParams->m_vAcDeltaQ;
    pEventData->qmY          = pAv1PicParams->m_qMatrixFlags.m_fields.m_qmY;
    pEventData->qmU          = pAv1PicParams->m_qMatrixFlags.m_fields.m_qmU;
    pEventData->qmV          = pAv1PicParams->m_qMatrixFlags.m_fields.m_qmV;
    pEventData->usingQmatrix = pAv1PicParams->m_qMatrixFlags.m_fields.m_usingQmatrix;

    // Control Flag
    pEventData->deltaQPresentFlag  = pAv1PicParams->m_modeControlFlags.m_fields.m_deltaQPresentFlag;
    pEventData->log2DeltaQRes      = pAv1PicParams->m_modeControlFlags.m_fields.m_log2DeltaQRes;
    pEventData->referenceMode      = pAv1PicParams->m_modeControlFlags.m_fields.m_referenceMode;
    pEventData->skipModePresent    = pAv1PicParams->m_modeControlFlags.m_fields.m_skipModePresent;
    pEventData->reducedTxSetUsed   = pAv1PicParams->m_modeControlFlags.m_fields.m_reducedTxSetUsed;
    pEventData->txMode             = pAv1PicParams->m_modeControlFlags.m_fields.m_txMode;
    pEventData->deltaLfMulti       = pAv1PicParams->m_modeControlFlags.m_fields.m_deltaLfMulti;
    pEventData->deltaLfPresentFlag = pAv1PicParams->m_modeControlFlags.m_fields.m_deltaLfPresentFlag;
    pEventData->log2DeltaLfRes     = pAv1PicParams->m_modeControlFlags.m_fields.m_log2DeltaLfRes;
    pEventData->losslessMode       = pAv1PicParams->m_losslessMode;

    // Segment
    pEventData->SegData_enabled = pAv1PicParams->m_av1SegData.m_enabled;

    // Tile Info
    pEventData->tileCols = pAv1PicParams->m_tileCols;
    pEventData->tileRows = pAv1PicParams->m_tileRows;
    for (int i = 0; i < 64; i++)
    {
        pEventData->widthInSbsMinus1[i]  = pAv1PicParams->m_widthInSbsMinus1[i];
        pEventData->heightInSbsMinus1[i] = pAv1PicParams->m_heightInSbsMinus1[i];
    }
    
    // CDEF
    pEventData->m_contextUpdateTileId = pAv1PicParams->m_contextUpdateTileId;
    pEventData->m_cdefDampingMinus3   = pAv1PicParams->m_cdefDampingMinus3;
    pEventData->m_cdefBits            = pAv1PicParams->m_cdefBits;
    for (int i = 0; i < 8; i++)
    {
        pEventData->cdefYStrengths[i]  = pAv1PicParams->m_cdefYStrengths[i];
        pEventData->cdefUvStrengths[i] = pAv1PicParams->m_cdefUvStrengths[i];
    }

    // Loop Restoration
    pEventData->yframeRestorationType  = pAv1PicParams->m_loopRestorationFlags.m_fields.m_yframeRestorationType;
    pEventData->cbframeRestorationType = pAv1PicParams->m_loopRestorationFlags.m_fields.m_cbframeRestorationType;
    pEventData->crframeRestorationType = pAv1PicParams->m_loopRestorationFlags.m_fields.m_crframeRestorationType;
    pEventData->lrUnitShift            = pAv1PicParams->m_loopRestorationFlags.m_fields.m_lrUnitShift;
    pEventData->lrUvShift              = pAv1PicParams->m_loopRestorationFlags.m_fields.m_lrUvShift;

    // Warp Motion
    for (int i = 0; i < 7; i++)
    {
        pEventData->WarpMotion[i] = pAv1PicParams->m_wm[i];
    }
    pEventData->matrixCoefficients = pAv1PicParams->m_matrixCoefficients;

    // Film Grain
    pEventData->applyGrain = pAv1PicParams->m_filmGrainParams.m_filmGrainInfoFlags.m_fields.m_applyGrain;

    // Status Report
    pEventData->statusReportFeedbackNumber = pAv1PicParams->m_statusReportFeedbackNumber;
}

void DecodeEventDataAV1SegParamInit(
    DECODE_EVENTDATA_SEGPARAM_AV1 *pEventData,
    CodecAv1PicParams             *pAv1PicParams)
{
    pEventData->CurrFrameIdx           = pAv1PicParams->m_currPic.FrameIdx;
    pEventData->SegData_enabled        = pAv1PicParams->m_av1SegData.m_enabled;
    pEventData->SegData_updateMap      = pAv1PicParams->m_av1SegData.m_updateMap;
    pEventData->SegData_temporalUpdate = pAv1PicParams->m_av1SegData.m_temporalUpdate;
    pEventData->SegData_updateData     = pAv1PicParams->m_av1SegData.m_updateData;
    for (int i = 0; i < 8; i++)
    {
        pEventData->SegData_featureMask[i] = pAv1PicParams->m_av1SegData.m_featureMask[i];
    }
    for (int j = 0; j < 8; j++)
    {
        for (int i = 0; i < 8; i++)
        {
            pEventData->SegData_featureData[j][i] = pAv1PicParams->m_av1SegData.m_featureData[j][i];
        }
    }
    for (int i = 0; i < 8; i++)
    {
        pEventData->SegData_losslessFlag[i] = pAv1PicParams->m_av1SegData.m_losslessFlag[i];
        pEventData->SegData_qmLevelY[i]     = pAv1PicParams->m_av1SegData.m_qmLevelY[i];
        pEventData->SegData_qmLevelU[i]     = pAv1PicParams->m_av1SegData.m_qmLevelU[i];
        pEventData->SegData_qmLevelV[i]     = pAv1PicParams->m_av1SegData.m_qmLevelV[i];
    }
}

void DecodeEventDataAV1FilmGrainParamInit(
    DECODE_EVENTDATA_FILMGRAINPARAM_AV1 *pEventData,
    CodecAv1PicParams                   *pAv1PicParams)
{
    pEventData->CurrFrameIdx          = pAv1PicParams->m_currPic.FrameIdx;
    pEventData->applyGrain            = pAv1PicParams->m_filmGrainParams.m_filmGrainInfoFlags.m_fields.m_applyGrain;
    pEventData->chromaScalingFromLuma = pAv1PicParams->m_filmGrainParams.m_filmGrainInfoFlags.m_fields.m_chromaScalingFromLuma;
    pEventData->grainScalingMinus8    = pAv1PicParams->m_filmGrainParams.m_filmGrainInfoFlags.m_fields.m_grainScalingMinus8;
    pEventData->arCoeffLag            = pAv1PicParams->m_filmGrainParams.m_filmGrainInfoFlags.m_fields.m_arCoeffLag;
    pEventData->arCoeffShiftMinus6    = pAv1PicParams->m_filmGrainParams.m_filmGrainInfoFlags.m_fields.m_arCoeffShiftMinus6;
    pEventData->grainScaleShift       = pAv1PicParams->m_filmGrainParams.m_filmGrainInfoFlags.m_fields.m_grainScaleShift;
    pEventData->clipToRestrictedRange = pAv1PicParams->m_filmGrainParams.m_filmGrainInfoFlags.m_fields.m_clipToRestrictedRange;
    pEventData->overlapFlag           = pAv1PicParams->m_filmGrainParams.m_filmGrainInfoFlags.m_fields.m_overlapFlag;
    pEventData->randomSeed            = pAv1PicParams->m_filmGrainParams.m_randomSeed;
    pEventData->numYPoints            = pAv1PicParams->m_filmGrainParams.m_numYPoints;
    pEventData->numCbPoints           = pAv1PicParams->m_filmGrainParams.m_numCbPoints;
    pEventData->numCrPoints           = pAv1PicParams->m_filmGrainParams.m_numCrPoints;
    pEventData->cbMult                = pAv1PicParams->m_filmGrainParams.m_cbMult;
    pEventData->cbLumaMult            = pAv1PicParams->m_filmGrainParams.m_cbLumaMult;
    pEventData->cbOffset              = pAv1PicParams->m_filmGrainParams.m_cbOffset;
    pEventData->crMult                = pAv1PicParams->m_filmGrainParams.m_crMult;
    pEventData->crLumaMult            = pAv1PicParams->m_filmGrainParams.m_crLumaMult;
    pEventData->crOffset              = pAv1PicParams->m_filmGrainParams.m_crOffset;

    for (int i = 0; i < 14; i++)
    {
        pEventData->pointYValue[i]   = pAv1PicParams->m_filmGrainParams.m_pointYValue[i];
        pEventData->pointYScaling[i] = pAv1PicParams->m_filmGrainParams.m_pointYScaling[i];
    }
    for (int i = 0; i < 10; i++)
    {
        pEventData->pointCbValue[i]   = pAv1PicParams->m_filmGrainParams.m_pointCbValue[i];
        pEventData->pointCbScaling[i] = pAv1PicParams->m_filmGrainParams.m_pointCbScaling[i];
        pEventData->pointCrValue[i]   = pAv1PicParams->m_filmGrainParams.m_pointCrValue[i];
        pEventData->pointCrScaling[i] = pAv1PicParams->m_filmGrainParams.m_pointCrScaling[i];
    }
    for (int i = 0; i < 24; i++)
    {
        pEventData->arCoeffsY[i] = pAv1PicParams->m_filmGrainParams.m_arCoeffsY[i];
    }
    for (int i = 0; i < 25; i++)
    {
        pEventData->arCoeffsCb[i] = pAv1PicParams->m_filmGrainParams.m_arCoeffsCb[i];
        pEventData->arCoeffsCr[i] = pAv1PicParams->m_filmGrainParams.m_arCoeffsCr[i];
    }
}

void DecodeEventDataAV1TileParamInit(
    DECODE_EVENTDATA_TILEPARAM_AV1 *pEventData,
    DECODE_EVENTDATA_TILEINFO_AV1  *pEventTileData,
    CodecAv1PicParams              *pAv1PicParams,
    CodecAv1TileParams             *pAv1TileParams,
    uint32_t                       dwNumTiles)
{
    pEventData->NumTiles                       = dwNumTiles;
    pEventData->largeScaleTile                 = pAv1PicParams->m_picInfoFlags.m_fields.m_largeScaleTile;
    pEventData->tileCountMinus1                = pAv1PicParams->m_tileCountMinus1;
    pEventData->outputFrameWidthInTilesMinus1  = pAv1PicParams->m_outputFrameWidthInTilesMinus1;
    pEventData->outputFrameHeightInTilesMinus1 = pAv1PicParams->m_outputFrameHeightInTilesMinus1;
    pEventData->anchorFrameInsertion           = pAv1PicParams->m_anchorFrameInsertion;

    for (uint32_t i = 0; i < dwNumTiles; i++)
    {
        pEventTileData->tileIndex                = pAv1TileParams->m_tileIndex;
        pEventTileData->bsTileDataLocation       = pAv1TileParams->m_bsTileDataLocation;
        pEventTileData->bsTileBytesInBuffer      = pAv1TileParams->m_bsTileBytesInBuffer;
        pEventTileData->badBSBufferChopping      = pAv1TileParams->m_badBSBufferChopping;
        pEventTileData->tileRow                  = pAv1TileParams->m_tileRow;
        pEventTileData->tileColumn               = pAv1TileParams->m_tileColumn;
        pEventTileData->anchorFrameIdx           = pAv1TileParams->m_anchorFrameIdx.FrameIdx;
        pEventTileData->bsTilePayloadSizeInBytes = pAv1TileParams->m_bsTilePayloadSizeInBytes;
        pAv1TileParams++;
        pEventTileData++;
    }
}

#endif
}