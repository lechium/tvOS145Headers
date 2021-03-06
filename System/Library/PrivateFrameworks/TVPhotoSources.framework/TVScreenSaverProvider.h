/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol _TVPhotoServiceInterfaceForwardingProtocol;
@class NSXPCListener, NSString, NSDictionary;

@interface TVScreenSaverProvider : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	id<_TVPhotoServiceInterfaceForwardingProtocol> _serviceProvider;

}

@property (nonatomic,readonly) BOOL isCurrentScreenSaver; 
@property (nonatomic,readonly) NSString * currentScreenSaverName; 
@property (nonatomic,readonly) NSDictionary * currentScreenSaverInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_bundleForTVPhotoSources;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)_collectionIdentifier;
-(void)setScreenSaverWithName:(id)arg1 style:(id)arg2 extraInfo:(id)arg3 showConfirmation:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)setDefaultScreenSaver;
-(BOOL)isCurrentScreenSaver;
-(NSString *)currentScreenSaverName;
-(NSDictionary *)currentScreenSaverInfo;
-(void)registerAppWithProviderObject:(id)arg1 ;
-(void)_setScreenSaverWithName:(id)arg1 style:(id)arg2 extraInfo:(id)arg3 ;
-(void)setScreenSaverDisplayStatusForBundleIdentifier:(id)arg1 isEnabled:(BOOL)arg2 extraInfo:(id)arg3 ;
@end

