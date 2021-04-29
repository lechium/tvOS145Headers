/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@protocol OS_dispatch_queue, BWMRCDetectedResultsObserver;
@class NSObject, FigWeakReference;

@interface BWAppClipCodeNode : BWNode {

	NSObject*<OS_dispatch_queue> _processingQueue;
	FigWeakReference* _weakSelf;
	BOOL _haveInputTransform;
	int _rotationDegrees;
	BOOL _mirroringHorizontal;
	BOOL _mirroringVertical;
	id<BWMRCDetectedResultsObserver> _detectedResultsObserver;
	long long _lastAppClipCodeCount;

}

@property (assign,nonatomic) id<BWMRCDetectedResultsObserver> detectedResultsObserver;              //@synthesize detectedResultsObserver=_detectedResultsObserver - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)_processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)_updateInputRequirements;
-(void)_endAppClipCodeSession;
-(void)_startAppClipCodeSession;
-(id)_pixelFormatsSupportedByAppC3D;
-(id)initWithProcessingQueuePriority:(unsigned)arg1 ;
-(BOOL)_shouldEmitSBufForAppClipCodeCount:(long long)arg1 originalPTS:(SCD_Struct_BW7)arg2 ;
-(CGAffineTransform)_transformToDeviceCoordinateSpaceWithUserData:(id)arg1 ;
-(id<BWMRCDetectedResultsObserver>)detectedResultsObserver;
-(void)setDetectedResultsObserver:(id<BWMRCDetectedResultsObserver>)arg1 ;
@end

