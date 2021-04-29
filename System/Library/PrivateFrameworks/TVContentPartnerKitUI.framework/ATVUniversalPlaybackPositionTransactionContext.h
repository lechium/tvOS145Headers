/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBKUniversalPlaybackPositionTransactionContext.h>

@class NSString, ATVUPPClientState, NSDictionary;

@interface ATVUniversalPlaybackPositionTransactionContext : NSObject <SBKUniversalPlaybackPositionTransactionContext> {

	NSString* _capturedDomainVersion;
	ATVUPPClientState* _clientState;
	NSDictionary* _changes;

}

@property (nonatomic,readonly) ATVUPPClientState * clientState;              //@synthesize clientState=_clientState - In the implementation block
@property (nonatomic,readonly) NSDictionary * changes;                       //@synthesize changes=_changes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)changes;
-(ATVUPPClientState *)clientState;
-(id)lastSyncedDomainVersion;
-(id)initWithClientState:(id)arg1 changes:(id)arg2 ;
@end

