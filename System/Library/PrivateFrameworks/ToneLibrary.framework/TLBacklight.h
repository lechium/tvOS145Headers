/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSHashTable;

@interface TLBacklight : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	NSHashTable* _observers;
	BOOL _isObservingBacklight;
	long long _backlightStatus;

}

@property (readonly) long long backlightStatus; 
+(id)sharedBacklight;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_performBlockOnAccessQueue:(/*^block*/id)arg1 ;
-(void)_assertRunningOnAccessQueue;
-(void)_assertNotRunningOnAccessQueue;
-(void)_notifyObservers:(id)arg1 ofUpdatedBacklightStatus:(long long)arg2 ;
-(void)_setObservingBacklight:(BOOL)arg1 ;
-(long long)backlightStatus;
-(void)_setBacklightStatus:(long long)arg1 ;
@end

