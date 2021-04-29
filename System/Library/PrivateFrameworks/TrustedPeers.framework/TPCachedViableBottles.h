/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface TPCachedViableBottles : NSObject {

	NSArray* _viableBottles;
	NSArray* _partialBottles;

}

@property (retain,readonly) NSArray * viableBottles;               //@synthesize viableBottles=_viableBottles - In the implementation block
@property (retain,readonly) NSArray * partialBottles;              //@synthesize partialBottles=_partialBottles - In the implementation block
-(id)initWithViableBottles:(id)arg1 partialBottles:(id)arg2 ;
-(NSArray *)viableBottles;
-(NSArray *)partialBottles;
@end

