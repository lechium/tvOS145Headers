/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileWiFi.framework/MobileWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SFPasswordSharingServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, SFPasswordSharingService;

@interface WiFiPasswordSharingSimulator : NSObject <SFPasswordSharingServiceDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	SFPasswordSharingService* _service;
	/*^block*/id _replyHandler;

}
-(id)init;
-(void)dealloc;
-(void)service:(id)arg1 receivedNetworkInfo:(id)arg2 ;
-(BOOL)service:(id)arg1 shouldPromptForNetwork:(id)arg2 ;
-(void)runWithSSID:(id)arg1 reply:(/*^block*/id)arg2 ;
@end
