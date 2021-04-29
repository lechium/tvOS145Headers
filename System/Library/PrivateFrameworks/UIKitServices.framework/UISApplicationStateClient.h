/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, BSServiceConnection;

@interface UISApplicationStateClient : NSObject <BSInvalidatable> {

	NSString* _bundleIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _queue_invalidated;
	BSServiceConnection* _queue_connection;

}

@property (nonatomic,copy) NSString * badgeValue; 
@property (assign,nonatomic) BOOL usesBackgroundNetwork; 
@property (assign,nonatomic) double nextWakeIntervalSinceReferenceDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)badgeValue;
-(void)setBadgeValue:(NSString *)arg1 ;
-(id)_remoteTarget;
-(void)setMinimumBackgroundFetchInterval:(double)arg1 ;
-(void)setUsesBackgroundNetwork:(BOOL)arg1 ;
-(BOOL)usesBackgroundNetwork;
-(double)nextWakeIntervalSinceReferenceDate;
-(void)setNextWakeIntervalSinceReferenceDate:(double)arg1 ;
@end

