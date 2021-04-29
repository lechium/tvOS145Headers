/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BPSPublisher.h>

@class NSArray;

@interface BPSOrderedMerge : BPSPublisher {

	NSArray* _publishers;
	/*^block*/id _comparator;

}

@property (nonatomic,readonly) NSArray * publishers;              //@synthesize publishers=_publishers - In the implementation block
@property (nonatomic,copy) id comparator;                         //@synthesize comparator=_comparator - In the implementation block
-(id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(id)bookmarkableUpstreams;
-(id)init;
-(id)comparator;
-(NSArray *)publishers;
-(void)subscribe:(id)arg1 ;
-(void)setComparator:(id)arg1 ;
-(id)initWithPublishers:(id)arg1 comparator:(/*^block*/id)arg2 ;
-(id)initWithA:(id)arg1 b:(id)arg2 comparator:(/*^block*/id)arg3 ;
@end

