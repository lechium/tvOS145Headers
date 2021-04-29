/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CDPDAuthProviderInternal.h>

@class NSString;

@interface CDPDAuthProxyImpl : NSObject <CDPDAuthProviderInternal>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_authContextFromCDPContext:(id)arg1 ;
-(void)cdpContext:(id)arg1 persistMasterKeyVerifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isPrimaryAppleIDLoggedIn;
-(void)getDevicesLosingAccountAccessWithCompletion:(/*^block*/id)arg1 ;
-(void)setDataPrivacyStatusEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

