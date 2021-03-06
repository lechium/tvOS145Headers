/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSValueTransformer;

@interface INCodableObjectAttribute : INCodableAttribute <NSSecureCoding> {

	NSString* _originalTypeName;
	NSString* _typeName;

}

@property (setter=_setOriginalTypeName:,nonatomic,copy) NSString * _originalTypeName;              //@synthesize originalTypeName=_originalTypeName - In the implementation block
@property (nonatomic,copy) NSString * typeName;                                                    //@synthesize typeName=_typeName - In the implementation block
@property (nonatomic,readonly) NSValueTransformer * valueTransformer; 
@property (nonatomic,copy,readonly) NSString * className; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)className;
-(Class)objectClass;
-(long long)valueType;
-(void)setClassName:(NSString *)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)__INCodableDescriptionKey;
-(id)__INIntentResponseCodableDescriptionKey;
-(id)__INTypeCodableDescriptionKey;
-(id)__INCodableDescriptionTypeKey;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(id)__INTypeCodableDescriptionTypeKey;
-(NSString *)typeName;
-(void)setTypeName:(NSString *)arg1 ;
-(NSString *)_originalTypeName;
-(Class)resolutionResultClass;
-(NSValueTransformer *)valueTransformer;
-(Class)_relationshipValueTransformerClass;
-(void)_setOriginalTypeName:(id)arg1 ;
@end

