/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSCoder.h>
#import <libobjc.A.dylib/MTSerializer.h>

@class NSMutableArray, NSCoder;

@interface MTStorageReader : NSCoder <MTSerializer> {

	NSMutableArray* _stack;

}

@property (nonatomic,retain) NSMutableArray * stack;                   //@synthesize stack=_stack - In the implementation block
@property (nonatomic,readonly) unsigned long long mtType; 
@property (nonatomic,readonly) NSCoder * mtCoder; 
+(BOOL)_dictionaryIsForSerializableObject:(id)arg1 ;
+(id)_unwrap:(id)arg1 ;
-(BOOL)allowsKeyedCoding;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(id)initWithEncodedDictionary:(id)arg1 ;
-(NSMutableArray *)stack;
-(void)setStack:(NSMutableArray *)arg1 ;
-(unsigned long long)mtType;
-(NSCoder *)mtCoder;
-(id)_decodeObject:(id)arg1 ;
-(id)_objectForDictionary:(id)arg1 ;
@end
