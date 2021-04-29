/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiskImages2/DIBaseXPCHandler.h>

@class NSXPCListenerEndpoint;

@interface DIClient2IODaemonXPCHandler : DIBaseXPCHandler {

	NSXPCListenerEndpoint* _xpcListenerEndpoint;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * xpcListenerEndpoint;              //@synthesize xpcListenerEndpoint=_xpcListenerEndpoint - In the implementation block
-(id)initWithEndpoint:(id)arg1 ;
-(id)remoteObjectInterface;
-(void)createConnection;
-(BOOL)addToRefCountWithError:(id*)arg1 ;
-(NSXPCListenerEndpoint *)xpcListenerEndpoint;
-(void)setXpcListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
@end

