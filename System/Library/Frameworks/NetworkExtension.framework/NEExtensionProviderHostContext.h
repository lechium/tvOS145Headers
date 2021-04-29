/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/NEExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionProviderHostProtocol.h>

@protocol NEExtensionProviderProtocol, NEExtensionProviderHostDelegate;
@class NSString, NEUserNotification, NEProcessIdentity, NSXPCConnection;

@interface NEExtensionProviderHostContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol> {

	id<NEExtensionProviderProtocol> _vendorContext;
	NSString* _description;
	NEUserNotification* _notification;
	BOOL _stopped;
	BOOL _isHostingSystemExtension;
	id<NEExtensionProviderHostDelegate> _delegate;
	NEProcessIdentity* _extensionProcessIdentity;
	NSXPCConnection* _vendorConnection;

}

@property (assign,nonatomic) BOOL stopped;                                                //@synthesize stopped=_stopped - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * vendorConnection;                        //@synthesize vendorConnection=_vendorConnection - In the implementation block
@property (nonatomic,readonly) BOOL isHostingSystemExtension;                             //@synthesize isHostingSystemExtension=_isHostingSystemExtension - In the implementation block
@property (__weak) id<NEExtensionProviderHostDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) int requiredEntitlement; 
@property (nonatomic,readonly) NEProcessIdentity * extensionProcessIdentity;              //@synthesize extensionProcessIdentity=_extensionProcessIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(NSString *)description;
-(id<NEExtensionProviderHostDelegate>)delegate;
-(void)setDelegate:(id<NEExtensionProviderHostDelegate>)arg1 ;
-(BOOL)stopped;
-(void)wake;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopWithReason:(int)arg1 ;
-(void)createWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dispose;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 ;
-(void)validateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startedWithError:(id)arg1 ;
-(void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)vendorContext;
-(int)requiredEntitlement;
-(NEProcessIdentity *)extensionProcessIdentity;
-(void)setDescription:(NSString *)arg1 ;
-(NSXPCConnection *)vendorConnection;
-(id)copyValueForEntitlement:(id)arg1 ;
-(BOOL)isHostingSystemExtension;
-(BOOL)isSignedWithDeveloperID;
-(id)initWithVendorEndpoint:(id)arg1 processIdentity:(id)arg2 delegate:(id)arg3 ;
-(BOOL)deriveProcessIdentity;
-(void)setStopped:(BOOL)arg1 ;
@end
