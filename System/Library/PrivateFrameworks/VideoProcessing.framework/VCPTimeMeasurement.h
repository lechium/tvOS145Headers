/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPTimeMeasurement : NSObject {

	mach_timebase_info _timebase;
	unsigned long long _start;
	BOOL _started;
	double _elapsedTimeSeconds;

}

@property (readonly) double elapsedTimeSeconds;              //@synthesize elapsedTimeSeconds=_elapsedTimeSeconds - In the implementation block
@property (readonly) BOOL started;                           //@synthesize started=_started - In the implementation block
-(id)init;
-(int)start;
-(int)stop;
-(BOOL)started;
-(void)reset;
-(double)elapsedTimeSeconds;
@end

