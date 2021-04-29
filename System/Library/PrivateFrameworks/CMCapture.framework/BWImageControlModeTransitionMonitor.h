/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class NSDictionary, NSMutableDictionary;

@interface BWImageControlModeTransitionMonitor : NSObject {

	NSDictionary* _expectedSphereModesByPortType;
	NSDictionary* _expectedMinimumFrameRatesByPortType;
	NSDictionary* _expectedLTMCurvesByPortType;
	int _ltmCurvesTransitionFrameCount;
	double _coarseFocusCheckTimeout;
	BOOL _waitForTorchToRampUp;
	NSMutableDictionary* _currentSphereModesByPortType;
	NSMutableDictionary* _currentFrameRatesByPortType;
	NSMutableDictionary* _currentLTMCurvesByPortType;
	int _ltmCurvesTransitionFrameWaitCount;
	SCD_Struct_BW7 _firstFramePTS;
	int _frameWaitCount;
	BOOL _coarseFocusHasSettled;

}

@property (nonatomic,copy) NSDictionary * expectedSphereModesByPortType;                    //@synthesize expectedSphereModesByPortType=_expectedSphereModesByPortType - In the implementation block
@property (nonatomic,copy) NSDictionary * expectedMinimumFrameRatesByPortType;              //@synthesize expectedMinimumFrameRatesByPortType=_expectedMinimumFrameRatesByPortType - In the implementation block
@property (nonatomic,copy) NSDictionary * expectedLTMCurvesByPortType;                      //@synthesize expectedLTMCurvesByPortType=_expectedLTMCurvesByPortType - In the implementation block
@property (assign,nonatomic) int ltmCurvesTransitionFrameCount;                             //@synthesize ltmCurvesTransitionFrameCount=_ltmCurvesTransitionFrameCount - In the implementation block
@property (assign,nonatomic) double coarseFocusCheckTimeout;                                //@synthesize coarseFocusCheckTimeout=_coarseFocusCheckTimeout - In the implementation block
@property (assign,nonatomic) BOOL waitForTorchToRampUp;                                     //@synthesize waitForTorchToRampUp=_waitForTorchToRampUp - In the implementation block
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)setExpectedSphereModesByPortType:(NSDictionary *)arg1 ;
-(void)setCoarseFocusCheckTimeout:(double)arg1 ;
-(void)setWaitForTorchToRampUp:(BOOL)arg1 ;
-(BOOL)isTransitionCompleteWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 masterCaptureStreamPortType:(id)arg2 activeSlaveStreamPortType:(id)arg3 ;
-(void)setExpectedMinimumFrameRatesByPortType:(NSDictionary *)arg1 ;
-(void)setExpectedLTMCurvesByPortType:(NSDictionary *)arg1 ;
-(void)setLtmCurvesTransitionFrameCount:(int)arg1 ;
-(NSDictionary *)expectedSphereModesByPortType;
-(NSDictionary *)expectedMinimumFrameRatesByPortType;
-(NSDictionary *)expectedLTMCurvesByPortType;
-(int)ltmCurvesTransitionFrameCount;
-(double)coarseFocusCheckTimeout;
-(BOOL)waitForTorchToRampUp;
@end

