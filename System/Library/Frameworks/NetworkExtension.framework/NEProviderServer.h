/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSMutableArray, NEExtensionProviderContext, NSString;

@interface NEProviderServer : NSObject <NSXPCListenerDelegate> {

	NSMutableArray* _listeners;
	NSMutableArray* _contexts;

}

@property (nonatomic,readonly) NSMutableArray * listeners;                   //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,readonly) NSMutableArray * contexts;                    //@synthesize contexts=_contexts - In the implementation block
@property (readonly) NEExtensionProviderContext * firstContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(NSMutableArray *)contexts;
-(NSMutableArray *)listeners;
-(void)removeProviderContext:(id)arg1 ;
-(id)getListenerForExtensionPoint:(id)arg1 ;
-(void)generateProviderEndpointInfoInMessage:(id)arg1 extensionPoint:(id)arg2 ;
-(NEExtensionProviderContext *)firstContext;
@end

