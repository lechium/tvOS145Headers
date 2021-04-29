/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSCoder.h>

@class NSMutableData, NSMutableSet;

@interface UINibEncoder : NSCoder {

	CFDictionaryRef objectsToObjectIDs;
	CFDictionaryRef objectIDsToObjects;
	CFArrayRef values;
	CFSetRef encodedObjects;
	NSMutableData* data;
	CFDictionaryRef replacements;
	unsigned nextObjectID;
	UINibArchiveTableInfo recursiveState;
	NSMutableSet* objectsUniquedByValue;
	CFSetRef objectsReplacedWithNil;
	id delegate;

}

@property (assign) id delegate; 
+(id)archivedDataWithRootObject:(id)arg1 ;
+(BOOL)archiveRootObject:(id)arg1 toFile:(id)arg2 ;
-(void)dealloc;
-(id)delegate;
-(BOOL)allowsKeyedCoding;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(void)encodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(id)initForWritingWithMutableData:(id)arg1 ;
-(void)encodeRootObject:(id)arg1 ;
-(long long)versionForClassName:(id)arg1 ;
-(void)encodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)encodeConditionalObject:(id)arg1 ;
-(unsigned)systemVersion;
-(void)encodeBycopyObject:(id)arg1 ;
-(void)encodeByrefObject:(id)arg1 ;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)finishEncoding;
-(void)serializeObject:(id)arg1 ;
-(void)encodeCGPoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)encodeCGSize:(CGSize)arg1 forKey:(id)arg2 ;
-(void)encodeCGRect:(CGRect)arg1 forKey:(id)arg2 ;
-(void)serializeDictionary:(id)arg1 ;
-(id)nextGenericKey;
-(id)assignObjectIDForObject:(id)arg1 ;
-(id)objectIDForObject:(id)arg1 ;
-(Class)encodedClassForObject:(id)arg1 ;
-(id)encodedClassNameForClass:(Class)arg1 ;
-(BOOL)object:(id)arg1 encodesWithCoderFromClass:(Class)arg2 ;
-(BOOL)object:(id)arg1 encodesAsMemberAndWithCoderOfClass:(Class)arg2 ;
-(BOOL)shouldUniqueObjectByValue:(id)arg1 ;
-(void)serializeArray:(id)arg1 ;
-(void)serializeSet:(id)arg1 ;
-(id)replacementObjectForObject:(id)arg1 forKey:(id)arg2 ;
-(void)appendValue:(id)arg1 ;
-(void)encodeArrayOfDoubles:(double*)arg1 count:(long long)arg2 forKey:(id)arg3 ;
-(void)encodeArrayOfCGFloats:(double*)arg1 count:(long long)arg2 forKey:(id)arg3 ;
-(BOOL)previouslyCodedObject:(id)arg1 ;
-(id)encodedClassNameForObject:(id)arg1 ;
-(void)encodeArrayOfFloats:(float*)arg1 count:(long long)arg2 forKey:(id)arg3 ;
-(void)encodeCGAffineTransform:(CGAffineTransform)arg1 forKey:(id)arg2 ;
-(void)encodeUIEdgeInsets:(UIEdgeInsets)arg1 forKey:(id)arg2 ;
@end

