/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSOrderedSet.h>

@interface NSMutableOrderedSet : NSOrderedSet
+(id)orderedSetWithCapacity:(unsigned long long)arg1 ;
-(void)applyDifference:(id)arg1 ;
-(void)filterUsingPredicate:(id)arg1 ;
-(void)sortUsingDescriptors:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)setObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjects:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)_mutate;
-(void)addObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)removeObject:(id)arg1 ;
-(void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)addObjectsFromArray:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)addObjectsFromOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 ;
-(void)addObjectsFromSet:(id)arg1 ;
-(void)intersectOrderedSet:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusOrderedSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(void)removeObjectsInOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 ;
-(void)removeObjectsInSet:(id)arg1 ;
-(void)removeObjectsPassingTest:(/*^block*/id)arg1 ;
-(void)replaceObject:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(void)setArray:(id)arg1 ;
-(void)setOrderedSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(void)unionOrderedSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertObjects:(const id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)removeLastObject;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(void)insertObjectsFromArray:(id)arg1 range:(NSRange)arg2 atIndex:(unsigned long long)arg3 ;
-(void)insertObjectsFromOrderedSet:(id)arg1 range:(NSRange)arg2 atIndex:(unsigned long long)arg3 ;
-(void)insertObjectsFromSet:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)removeObjectsInRange:(NSRange)arg1 inOrderedSet:(id)arg2 range:(NSRange)arg3 ;
-(void)insertObjectsFromArray:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)insertObjectsFromOrderedSet:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)sortedArrayFromRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)sortRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)removeFirstObject;
-(void)removeObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 inArray:(id)arg2 range:(NSRange)arg3 ;
-(void)removeObjectsInRange:(NSRange)arg1 inArray:(id)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 inOrderedSet:(id)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 inSet:(id)arg2 ;
-(void)removeObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)replaceObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 range:(NSRange)arg3 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromOrderedSet:(id)arg2 range:(NSRange)arg3 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromOrderedSet:(id)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromSet:(id)arg2 ;
-(void)sortWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
-(Class)classForCoder;
@end

