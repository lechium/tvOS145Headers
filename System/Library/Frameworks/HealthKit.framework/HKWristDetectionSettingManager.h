/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_os_log;
@class NSObject, HKObserverSet;

@interface HKWristDetectionSettingManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _disableWristDetectionChangedNotificationToken;
	HKObserverSet* _observers;
	NSObject*<OS_os_log> _loggingCategory;
	int _disableWristDetectionSettingChangeNotificationToken;
	BOOL _isWristDetectEnabled;

}

@property (nonatomic,readonly) BOOL isWristDetectEnabled;              //@synthesize isWristDetectEnabled=_isWristDetectEnabled - In the implementation block
+(BOOL)isWristDetectEnabled;
-(id)init;
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 queue:(id)arg2 ;
-(BOOL)isWristDetectEnabled;
-(void)_startObserving;
-(void)_stopObserving;
-(void)_queue_notifyObservers;
@end

