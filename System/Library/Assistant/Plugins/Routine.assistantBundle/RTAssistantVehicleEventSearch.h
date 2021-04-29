/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Assistant/Plugins/Routine.assistantBundle/Routine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SALocalSearchVehicleEventSearch.h>

@protocol OS_dispatch_queue;
@class NSObject, RTRoutineManager, GEOLocationShifter;

@interface RTAssistantVehicleEventSearch : SALocalSearchVehicleEventSearch {

	NSObject*<OS_dispatch_queue> _queue;
	RTRoutineManager* _routineManager;
	GEOLocationShifter* _locationShifter;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTRoutineManager * routineManager;                 //@synthesize routineManager=_routineManager - In the implementation block
@property (nonatomic,retain) GEOLocationShifter * locationShifter;              //@synthesize locationShifter=_locationShifter - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(GEOLocationShifter *)locationShifter;
-(void)setLocationShifter:(GEOLocationShifter *)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
@end

