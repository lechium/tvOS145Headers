/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BPSSubscription.h>

@protocol BPSSubscription <BPSCancellable,NSObject>
@required
-(void)requestDemand:(long long)arg1;

@end

#import <libobjc.A.dylib/BPSUpstreamSubscriptions.h>

@class NSArray, NSString;

@interface BPSSubscription : NSObject <BPSSubscription, BPSUpstreamSubscriptions>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * upstreamSubscriptions; 
-(id)newBookmark;
-(void)cancel;
-(void)requestDemand:(long long)arg1 ;
-(NSArray *)upstreamSubscriptions;
@end
