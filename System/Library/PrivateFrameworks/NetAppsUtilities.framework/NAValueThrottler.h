/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NAScheduler, NACancelable;
@class NSMutableSet;

@interface NAValueThrottler : NSObject {

	double _throttleInterval;
	id<NAScheduler> _updateScheduler;
	id _value;
	NSMutableSet* _observerBlocks;
	id<NACancelable> _valueUpdateCancelationToken;

}

@property (nonatomic,readonly) NSMutableSet * observerBlocks;                           //@synthesize observerBlocks=_observerBlocks - In the implementation block
@property (nonatomic,retain) id<NACancelable> valueUpdateCancelationToken;              //@synthesize valueUpdateCancelationToken=_valueUpdateCancelationToken - In the implementation block
@property (nonatomic,readonly) double throttleInterval;                                 //@synthesize throttleInterval=_throttleInterval - In the implementation block
@property (nonatomic,retain) id<NAScheduler> updateScheduler;                           //@synthesize updateScheduler=_updateScheduler - In the implementation block
@property (nonatomic,readonly) id value;                                                //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingValueChange; 
-(id)init;
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithThrottleInterval:(double)arg1 initialValue:(id)arg2 ;
-(id)initWithThrottleInterval:(double)arg1 ;
-(id<NACancelable>)valueUpdateCancelationToken;
-(void)_enqueueValueUpdateIfNecessary;
-(void)setValue:(id)arg1 notifyObservers:(BOOL)arg2 ;
-(void)setValueUpdateCancelationToken:(id<NACancelable>)arg1 ;
-(id<NAScheduler>)updateScheduler;
-(double)throttleInterval;
-(void)_notifyObserversOfValueUpdate;
-(void)setUpdateScheduler:(id<NAScheduler>)arg1 ;
-(id)observeValueChangesWithBlock:(/*^block*/id)arg1 ;
-(void)flushValueChanges;
-(BOOL)hasPendingValueChange;
-(NSMutableSet *)observerBlocks;
@end

