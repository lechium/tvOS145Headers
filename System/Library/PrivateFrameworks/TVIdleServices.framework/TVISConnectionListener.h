/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <TVIdleServices/TVISScreenSaverServiceInterface.h>

@class NSXPCListener, NSString;

@interface TVISConnectionListener : NSObject <NSXPCListenerDelegate, TVISScreenSaverServiceInterface> {

	NSXPCListener* _listener;

}

@property (nonatomic,retain) NSXPCListener * listener;              //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)fetchScreenSaverConfigurationWithReply:(/*^block*/id)arg1 ;
-(void)forceDownloadAssetsWithIDs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)activateCategoryWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)deactivateCategoryWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

