/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INPersonHandleExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface INPersonHandle : NSObject <INPersonHandleExport, NSCopying, NSSecureCoding> {

	BOOL _suggested;
	NSString* _value;
	long long _type;
	NSString* _label;
	long long _emergencyType;

}

@property (nonatomic,readonly) long long emergencyType;                        //@synthesize emergencyType=_emergencyType - In the implementation block
@property (getter=isSuggested,nonatomic,readonly) BOOL suggested;              //@synthesize suggested=_suggested - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                          //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)value;
-(NSString *)label;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithValue:(id)arg1 type:(long long)arg2 ;
-(id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 ;
-(id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 emergencyType:(long long)arg4 ;
-(id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 suggested:(BOOL)arg4 ;
-(id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 emergencyType:(long long)arg4 suggested:(BOOL)arg5 ;
-(long long)emergencyType;
-(BOOL)isSuggested;
@end

