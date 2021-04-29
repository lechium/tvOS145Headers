/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject {

	vector<std::__1::pair<unsigned short, unsigned short>, std::__1::allocator<std::__1::pair<unsigned short, unsigned short>>>* _vectorStorage;
	NSMutableDictionary* _dictStorage;
	type _vectorInlineStorage;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)dictionary;
-(void)addValue:(unsigned short)arg1 ;
-(unsigned short)countForValue:(unsigned short)arg1 ;
-(void)_convertToDictionaryRepresentation;
-(unsigned long long)uniqueValueCount;
-(void)enumerateValuesAndCountsUsingBlock:(/*^block*/id)arg1 ;
-(void)_vectorEnumerateValuesAndCountsUsingBlock:(/*^block*/id)arg1 ;
-(void)_dictEnumerateValuesAndCountsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqualToU16CountedSet:(id)arg1 ;
@end

