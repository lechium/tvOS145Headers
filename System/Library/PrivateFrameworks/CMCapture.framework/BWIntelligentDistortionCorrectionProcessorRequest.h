/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWStillImageProcessorControllerDelegate;
@class BWIntelligentDistortionCorrectionProcessorInput;

@interface BWIntelligentDistortionCorrectionProcessorRequest : NSObject {

	BWIntelligentDistortionCorrectionProcessorInput* _input;
	id<BWStillImageProcessorControllerDelegate> _delegate;
	int _err;

}

@property (nonatomic,readonly) BWIntelligentDistortionCorrectionProcessorInput * input;              //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) id<BWStillImageProcessorControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int err;                                                                //@synthesize err=_err - In the implementation block
-(id)description;
-(void)dealloc;
-(id<BWStillImageProcessorControllerDelegate>)delegate;
-(BWIntelligentDistortionCorrectionProcessorInput *)input;
-(id)initWithInput:(id)arg1 delegate:(id)arg2 ;
-(int)err;
-(void)setErr:(int)arg1 ;
@end

