/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TKProtocolSlotClientNotification.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSArray, NSObject;

@interface TKSmartCardSlotManager : NSObject <TKProtocolSlotClientNotification> {

	NSXPCConnection* _connection;
	NSMutableDictionary* _endpoints;
	NSArray* _slotNames;
	NSObject*<OS_dispatch_queue> _slotNamesQueue;

}

@property (readonly) NSArray * slotNames; 
+(id)defaultManager;
-(id)init;
-(id)initWithServer:(id)arg1 ;
-(void)setSlotWithName:(id)arg1 endpoint:(id)arg2 type:(id)arg3 reply:(/*^block*/id)arg4 ;
-(NSArray *)slotNames;
-(void)getSlotWithName:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)slotNamed:(id)arg1 ;
@end

