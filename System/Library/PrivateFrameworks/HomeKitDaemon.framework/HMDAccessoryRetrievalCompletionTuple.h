/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HMDAccessoryRetrievalCompletionTuple : HMFObject {

	long long _linkType;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completion;

}

@property (assign,nonatomic) long long linkType;                              //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id completion;                                     //@synthesize completion=_completion - In the implementation block
+(id)tupleWithLinkType:(long long)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)completion;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(long long)linkType;
-(void)setLinkType:(long long)arg1 ;
@end

