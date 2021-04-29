/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RTPurgable.h>

@protocol OS_dispatch_queue;
@class NSObject, NSManagedObjectContext, NSString;

@interface RTVehicleLocationHistoryController : NSObject <RTPurgable> {

	NSObject*<OS_dispatch_queue> _queue;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_getAllVehicleEventsFromHistory;
-(BOOL)_deleteVehicleEventsBeforeDate:(id)arg1 ;
-(id)initWithQueue:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)_evaluateUsualLocationWithVehicleEvent:(id)arg1 ;
-(BOOL)_persistVehicleEventToHistory:(id)arg1 ;
@end
