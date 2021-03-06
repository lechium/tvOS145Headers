/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWNoiseReductionAndFusionProcessorDelegate <BWStillImageProcessorControllerDelegate>
@optional
-(void)processorController:(id)arg1 didSelectNewReferenceFrameWithPTS:(SCD_Struct_BW7)arg2 transform:(id)arg3 processorInput:(id)arg4;
-(void)processorController:(id)arg1 didSelectLowLightReferenceFrame:(opaqueCMSampleBufferRef)arg2 processorInput:(id)arg3;

@required
-(void)processorController:(id)arg1 didSelectFusionMode:(int)arg2 processorInput:(id)arg3;
-(id)processorController:(id)arg1 newSemanticRenderingInputForProcessorInput:(id)arg2;

@end

