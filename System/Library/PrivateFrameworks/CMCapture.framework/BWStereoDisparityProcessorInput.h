/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorInput.h>

@protocol BWStereoDisparityProcessorInputDelegate;
@interface BWStereoDisparityProcessorInput : BWStillImageProcessorInput {

	id<BWStereoDisparityProcessorInputDelegate> _delegate;
	opaqueCMSampleBufferRef _referenceSbuf;
	opaqueCMSampleBufferRef _auxiliarySbuf;
	BOOL _equalizeTeleGainToMatchReference;
	BOOL _emitAuxiliaryInput;

}

@property (nonatomic,retain) id<BWStereoDisparityProcessorInputDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL equalizeTeleGainToMatchReference;                             //@synthesize equalizeTeleGainToMatchReference=_equalizeTeleGainToMatchReference - In the implementation block
@property (assign,nonatomic) BOOL emitAuxiliaryInput;                                           //@synthesize emitAuxiliaryInput=_emitAuxiliaryInput - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef referenceSbuf;                           //@synthesize referenceSbuf=_referenceSbuf - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef auxiliarySbuf;                           //@synthesize auxiliarySbuf=_auxiliarySbuf - In the implementation block
-(void)dealloc;
-(id<BWStereoDisparityProcessorInputDelegate>)delegate;
-(void)setDelegate:(id<BWStereoDisparityProcessorInputDelegate>)arg1 ;
-(id)initWithSettings:(id)arg1 portType:(id)arg2 ;
-(void)addSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)referenceSbuf;
-(opaqueCMSampleBufferRef)auxiliarySbuf;
-(BOOL)equalizeTeleGainToMatchReference;
-(void)setEqualizeTeleGainToMatchReference:(BOOL)arg1 ;
-(BOOL)emitAuxiliaryInput;
-(void)setEmitAuxiliaryInput:(BOOL)arg1 ;
@end

