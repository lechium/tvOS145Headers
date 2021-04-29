/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/GCJSONRepresentable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GCHapticActuator : NSObject <NSSecureCoding, GCJSONRepresentable, NSCopying> {

	NSString* _label;
	long long _type;
	unsigned long long _index;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * label;                        //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(unsigned long long)index;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(id)jsonDictionaryRepresentation;
-(id)initWithJSONDictionaryRepresentation:(id)arg1 ;
-(id)initWithLabel:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 ;
@end

