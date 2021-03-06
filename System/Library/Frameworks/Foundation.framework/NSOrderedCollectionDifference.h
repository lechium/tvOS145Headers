/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSIndexSet, NSArray, _NSOrderedCollectionDifferenceMoves;

@interface NSOrderedCollectionDifference : NSObject <NSFastEnumeration> {

	NSIndexSet* _insertIndexes;
	NSArray* _insertObjects;
	NSIndexSet* _removeIndexes;
	NSArray* _removeObjects;
	_NSOrderedCollectionDifferenceMoves* _moves;

}

@property (readonly) NSArray * insertions; 
@property (readonly) NSArray * removals; 
@property (readonly) BOOL hasChanges; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithChanges:(id)arg1 ;
-(id)initWithInsertIndexes:(id)arg1 insertedObjects:(id)arg2 removeIndexes:(id)arg3 removedObjects:(id)arg4 additionalChanges:(id)arg5 ;
-(id)_changeWithType:(long long)arg1 index:(unsigned long long)arg2 object:(id)arg3 ;
-(id)inverseDifference;
-(id)differenceByTransformingChangesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)hasChanges;
-(id)initWithInsertIndexes:(id)arg1 insertedObjects:(id)arg2 removeIndexes:(id)arg3 removedObjects:(id)arg4 ;
-(NSArray *)insertions;
-(NSArray *)removals;
-(void)_enumerateChangesInDiffOrderWithBlock:(/*^block*/id)arg1 ;
-(id)invertedDifference;
@end

