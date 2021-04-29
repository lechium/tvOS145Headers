/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RETaggedFeatureValueArray : NSObject <NSCopying> {

	CFArrayRef _array;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long count; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)initWithValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)featureValueAtIndex:(unsigned long long)arg1 ;
-(void)enumerateFeatureValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)addFeatureValue:(unsigned long long)arg1 ;
-(id)initWithFeatureValues:(id)arg1 ;
-(unsigned long long)firstFeatureValue;
-(void)removeAllFeatureValues;
-(void)removeFeatureValueAtIndex:(unsigned long long)arg1 ;
-(void)insertFeatureValue:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)_locked_count;
-(unsigned long long)_locked_featureValueAtIndex:(unsigned long long)arg1 ;
-(void)replaceFeatureValueAtIndex:(unsigned long long)arg1 withValue:(unsigned long long)arg2 ;
-(unsigned long long)lastFeatureValue;
@end
