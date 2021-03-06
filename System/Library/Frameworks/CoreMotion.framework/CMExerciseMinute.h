/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CMExerciseMinuteInternal;

@interface CMExerciseMinute : NSObject {

	CMExerciseMinuteInternal* _internal;

}

@property (nonatomic,readonly) CMExerciseMinuteInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(id)maxExerciseMinuteDataEntries;
+(BOOL)isExerciseMinuteAvailable;
-(id)init;
-(void)dealloc;
-(CMExerciseMinuteInternal *)_internal;
-(void)startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopUpdates;
-(void)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)queryExerciseMinutesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

