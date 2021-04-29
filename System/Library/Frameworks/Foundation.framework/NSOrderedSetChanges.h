/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableOrderedSet.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSOrderedSetChanges : NSMutableOrderedSet <NSCopying>

@property (readonly) unsigned long long changeCount; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isToManyChangeInformation;
-(long long)_toManyPropertyType;
-(void)applyChangesToOrderedSet:(id)arg1 ;
-(void)updateObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)changeCount;
-(void)enumerateChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateChanges:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addChange:(id)arg1 ;
-(void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)addChanges:(id)arg1 ;
@end

