/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/TRIPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRIPBMessage, NSMutableDictionary;

@interface TRIPBStringUInt32Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {

	TRIPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) unsigned long long count; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)removeAll;
-(id)initWithUInt32s:(const unsigned*)arg1 forKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateKeysAndUInt32sUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)getUInt32:(unsigned*)arg1 forKey:(id)arg2 ;
-(void)setUInt32:(unsigned)arg1 forKey:(id)arg2 ;
-(void)removeUInt32ForKey:(id)arg1 ;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
-(void)setTRIPBGenericValue:(/*function pointer*/void**)arg1 forTRIPBGenericValueKey:(/*function pointer*/void**)arg2 ;
@end

