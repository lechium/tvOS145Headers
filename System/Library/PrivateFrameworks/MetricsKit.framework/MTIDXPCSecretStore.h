/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTIDSecretStore.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface MTIDXPCSecretStore : NSObject <MTIDSecretStore> {

	double _idleCountDown;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;

}

@property (retain) NSXPCConnection * xpcConnection;                 //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)debugInfo;
-(id)setupXPCConnection;
-(id)resetSchemes:(id)arg1 options:(id)arg2 ;
-(id)maintainSchemes:(id)arg1 options:(id)arg2 ;
-(id)secretForScheme:(id)arg1 options:(id)arg2 ;
-(void)clearLocalData;
-(id)newXPCConnection;
@end

