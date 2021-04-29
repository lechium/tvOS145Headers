/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMDAccessoryBrowserInjectedSettings.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings> {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(id)workQueue;
-(id)createIpAccessoryBrowser;
-(id)createBtleAccessoryBrowser;
-(id)createRelayAccessoryBrowser;
-(id)createHap2AccessoryBrowserWithStorage:(id)arg1 ;
-(id)createAuthServerWithDelegate:(id)arg1 ;
@end
