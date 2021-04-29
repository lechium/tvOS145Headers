/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ExtensionKit.framework/ExtensionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/_NSExtensionContextVendor.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/EXExtensionContextVending.h>

@class NSMutableDictionary, NSString;

@interface EXConcreteExtensionContextVendor : _NSExtensionContextVendor <NSXPCListenerDelegate, EXExtensionContextVending> {

	NSMutableDictionary* __extensionServiceConnections;
	NSMutableDictionary* __extensionContexts;
	NSMutableDictionary* __extensionPrincipalObjects;

}

@property (setter=_setExtensionServiceConnections:,nonatomic,retain) NSMutableDictionary * _extensionServiceConnections;              //@synthesize _extensionServiceConnections=__extensionServiceConnections - In the implementation block
@property (setter=_setExtensionContexts:,nonatomic,retain) NSMutableDictionary * _extensionContexts;                                  //@synthesize _extensionContexts=__extensionContexts - In the implementation block
@property (setter=_setExtensionPrincipalObjects:,nonatomic,retain) NSMutableDictionary * _extensionPrincipalObjects;                  //@synthesize _extensionPrincipalObjects=__extensionPrincipalObjects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_startListening;
+(void)_startListening:(BOOL)arg1 ;
+(id)_extensionDictionary;
+(Class)_extensionPrincipalClass;
+(id)_extensionMainStoryboard;
+(Class)_extensionContextClass;
+(id)_completionConcurrentQueue;
+(id)_expirationConcurrentQueue;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_tearDownContextWithUUID:(id)arg1 ;
-(id)_extensionContextForUUID:(id)arg1 ;
-(void)_setPrincipalObject:(id)arg1 forUUID:(id)arg2 ;
-(void)_beginRequestWithExtensionItems:(id)arg1 listenerEndpoint:(id)arg2 withContextUUID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_hostDidEnterBackgroundForContextUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hostWillEnterForegroundForContextUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hostWillResignActiveForContextUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hostDidBecomeActiveForContextUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_shouldCreatePrincipalObject;
-(void)_onGlobalStateQueueOnly_setPrincipalObject:(id)arg1 forUUID:(id)arg2 ;
-(NSMutableDictionary *)_extensionServiceConnections;
-(void)_setExtensionServiceConnections:(id)arg1 ;
-(NSMutableDictionary *)_extensionContexts;
-(void)_setExtensionContexts:(id)arg1 ;
-(NSMutableDictionary *)_extensionPrincipalObjects;
-(void)_setExtensionPrincipalObjects:(id)arg1 ;
@end

