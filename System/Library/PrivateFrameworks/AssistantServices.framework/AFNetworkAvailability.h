/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AssistantServices/AssistantServices-Structs.h>
@class NSObject, NSHashTable;

@interface AFNetworkAvailability : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _notifyToken;
	AvailabilityState _state;
	NSHashTable* _observers;

}
+(id)sharedAvailability;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)isAvailable;
-(void)_clearState;
-(void)_updateState;
-(void)_availabilityChanged;
-(void)_notifyObservers;
-(void)_startObservingAvailability;
-(void)_stopObservingAvailability;
@end

