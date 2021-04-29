/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RBJetsamBandProviding.h>

@protocol RBEntitlementManaging;
@class NSString;

@interface RBJetsamBandProvider : NSObject <RBJetsamBandProviding> {

	id<RBEntitlementManaging> _entitlementManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(int)jetsamPriorityForProcess:(id)arg1 withState:(id)arg2 ;
-(id)initWithEntitlementManager:(id)arg1 ;
-(int)defaultPriorityForProcess:(id)arg1 inBand:(unsigned char)arg2 ;
@end

