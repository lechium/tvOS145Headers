/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableArray, NSString;

@interface DKDiagnosticService : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	Class _principalClass;
	NSMutableArray* _connections;

}

@property (nonatomic,retain) NSXPCListener * listener;                  //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) Class principalClass;                      //@synthesize principalClass=_principalClass - In the implementation block
@property (nonatomic,retain) NSMutableArray * connections;              //@synthesize connections=_connections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)resume;
-(Class)principalClass;
-(NSXPCListener *)listener;
-(NSMutableArray *)connections;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setConnections:(NSMutableArray *)arg1 ;
-(void)setPrincipalClass:(Class)arg1 ;
@end

