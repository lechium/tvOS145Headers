/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableOrderedSet, NSMutableDictionary;

@interface PPQuickTypeItemCache : NSObject {

	NSMutableOrderedSet* _keys;
	NSMutableDictionary* _entries;

}
-(id)init;
-(void)clear;
-(id)entryWithKey:(id)arg1 ;
-(void)setEntry:(id)arg1 key:(id)arg2 ;
@end
