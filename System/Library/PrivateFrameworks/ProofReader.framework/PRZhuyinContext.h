/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProofReader/PRAutocorrectionContext.h>

@class NSMutableArray;

@interface PRZhuyinContext : PRAutocorrectionContext {

	NSMutableArray* _modifications;
	NSMutableArray* _addedModifications;
	NSMutableArray* _removedModifications;
	NSMutableArray* _addedRemovedModifications;
	NSMutableArray* _prefixes;
	char* _buffer;
	unsigned long long* _syllableLengthArray;
	void* _connection;
	unsigned long long _length;
	unsigned long long _lengthBeforeApostrophes;
	unsigned long long _startingPoint;
	unsigned long long _lastIndexes[4];
	unsigned long long _nextIndexes[2];
	unsigned long long _startIndex;
	unsigned long long _endIndex;
	BOOL _lastSyllableIsPartial;

}
-(id)description;
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)_removeModificationsAndMoveStartingPoint;
-(void)_advanceIndexes;
-(void)_addTranspositions;
-(void)_addReplacements;
-(void)_addDeletions;
-(void)_filterModifications;
-(void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3 ;
-(void)_addInsertions;
-(void)removeNumberOfInputCharacters:(unsigned long long)arg1 ;
-(id)currentModifications;
-(id)addedModifications;
-(id)removedModifications;
@end

