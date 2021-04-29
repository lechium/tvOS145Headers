/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <FrontBoard/FrontBoard-Structs.h>
@class RBSProcessHandle;

@interface FBProcessCPUStatistics : NSObject {

	RBSProcessHandle* _handle;
	FBProcessTimes _times;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) double totalElapsedTime; 
@property (nonatomic,readonly) double totalElapsedUserTime; 
@property (nonatomic,readonly) double totalElapsedSystemTime; 
@property (nonatomic,readonly) double totalElapsedIdleTime; 
-(void)reset;
-(double)totalElapsedTime;
-(id)initWithProcessHandle:(id)arg1 ;
-(id)descriptionForCrashReport;
-(void)_lock_getApplicationCPUTimesForUser:(out double*)arg1 system:(out double*)arg2 idle:(out double*)arg3 ;
-(void)_hostwideUserElapsedCPUTime:(out double*)arg1 systemElapsedCPUTime:(out double*)arg2 idleElapsedCPUTime:(out double*)arg3 ;
-(double)totalElapsedUserTime;
-(double)totalElapsedSystemTime;
-(double)totalElapsedIdleTime;
@end

