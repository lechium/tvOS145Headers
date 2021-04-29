/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/SACInfoDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, SACInfoListener, SACInfo, NSString;

@interface CSSACInfoMonitor : CSEventMonitor <SACInfoDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	SACInfoListener* _infoListener;
	SACInfo* _currentSACInfo;
	BOOL _isDeviceRoleStereo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)isDeviceRoleStereo;
-(void)handleSACInfo:(id)arg1 ;
@end

