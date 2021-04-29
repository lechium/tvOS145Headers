/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Coordination.framework/Coordination
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/COTimerManagerConnectionProvider.h>

@class NSXPCConnection, NSString;

@interface _COTimerManagerConnectionProvider : NSObject <COTimerManagerConnectionProvider> {

	NSXPCConnection* _timerManagerServiceConnection;

}

@property (nonatomic,readonly) NSXPCConnection * timerManagerServiceConnection;              //@synthesize timerManagerServiceConnection=_timerManagerServiceConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCConnection *)timerManagerServiceConnection;
@end

