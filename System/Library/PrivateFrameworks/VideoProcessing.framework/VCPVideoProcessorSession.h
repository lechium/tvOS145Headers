/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject, NSMutableArray;

@interface VCPVideoProcessorSession : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _nodes;
	BOOL _modified;
	SCD_Struct_VC6 _startTime;
	CF<opaqueCMSampleBuffer *>* _nextSampleBuffer;
	unsigned long long _frameCount;
	unsigned _orientation;

}

@property (assign,nonatomic) unsigned orientation;              //@synthesize orientation=_orientation - In the implementation block
-(id)init;
-(unsigned)orientation;
-(void)setOrientation:(unsigned)arg1 ;
-(BOOL)removeRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)addRequest:(id)arg1 withConfiguration:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldProcessSampleWithTimeRange:(SCD_Struct_VC17)arg1 atSamplingInterval:(SCD_Struct_VC6)arg2 ;
-(BOOL)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 withEndTime:(SCD_Struct_VC6)arg2 error:(id*)arg3 ;
-(BOOL)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)flushWithEndTime:(SCD_Struct_VC6)arg1 error:(id*)arg2 ;
@end

