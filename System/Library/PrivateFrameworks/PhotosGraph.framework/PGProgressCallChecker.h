/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
@class NSObject, NSString;

@interface PGProgressCallChecker : NSObject {

	double _timestampOfLastCallToProgress;
	double _timestampOfLastRecordedCallToProgress;
	unsigned long long _numberOfCallsToProgressSinceLastRecordedCall;
	NSObject*<OS_os_log> _loggingConnection;
	BOOL _wasStopped;
	NSString* _taskName;

}

@property (nonatomic,copy) NSString * taskName;              //@synthesize taskName=_taskName - In the implementation block
-(NSString *)taskName;
-(void)setTaskName:(NSString *)arg1 ;
-(void)checkCallsWithProgress:(double)arg1 stop:(BOOL)arg2 ;
-(id)initWithTaskName:(id)arg1 loggingConnection:(id)arg2 ;
-(id)initWithTaskName:(id)arg1 ;
@end

