/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray, APSConnection, NSString;

@interface PKPushTokenFetcher : NSObject <APSConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSMutableArray* _completionHandlers;
	APSConnection* _pushConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)_handleTimeout;
-(void)_invokeCompletionWithPushToken:(id)arg1 ;
-(void)fetchPushTokenWithTimeout:(double)arg1 completion:(/*^block*/id)arg2 ;
@end

