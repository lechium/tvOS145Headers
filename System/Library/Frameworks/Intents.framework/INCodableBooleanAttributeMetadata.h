/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INCodableAttributeMetadata.h>
#import <libobjc.A.dylib/INCodableAttributeDefaultValueProviding.h>

@class NSNumber, NSString;

@interface INCodableBooleanAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding> {

	NSNumber* _defaultValue;
	NSString* _falseDisplayName;
	NSString* _falseDisplayNameID;
	NSString* _trueDisplayName;
	NSString* _trueDisplayNameID;

}

@property (nonatomic,copy) NSNumber * defaultValue;                                    //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) NSString * falseDisplayName;                                //@synthesize falseDisplayName=_falseDisplayName - In the implementation block
@property (nonatomic,copy) NSString * falseDisplayNameID;                              //@synthesize falseDisplayNameID=_falseDisplayNameID - In the implementation block
@property (nonatomic,copy) NSString * trueDisplayName;                                 //@synthesize trueDisplayName=_trueDisplayName - In the implementation block
@property (nonatomic,copy) NSString * trueDisplayNameID;                               //@synthesize trueDisplayNameID=_trueDisplayNameID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTrueDisplayName; 
@property (nonatomic,copy,readonly) NSString * localizedFalseDisplayName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)defaultValue;
-(void)setDefaultValue:(NSNumber *)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)defaultValueForIntentDefaultValueProvider;
-(id)__INCodableDescriptionDefaultValueKey;
-(id)__INIntentResponseCodableDescriptionDefaultValueKey;
-(id)__INTypeCodableDescriptionDefaultValueKey;
-(NSString *)localizedTrueDisplayName;
-(id)localizedTrueDisplayNameWithLocalizer:(id)arg1 ;
-(NSString *)localizedFalseDisplayName;
-(id)localizedFalseDisplayNameWithLocalizer:(id)arg1 ;
-(NSString *)falseDisplayName;
-(void)setFalseDisplayName:(NSString *)arg1 ;
-(NSString *)falseDisplayNameID;
-(void)setFalseDisplayNameID:(NSString *)arg1 ;
-(NSString *)trueDisplayName;
-(void)setTrueDisplayName:(NSString *)arg1 ;
-(NSString *)trueDisplayNameID;
-(void)setTrueDisplayNameID:(NSString *)arg1 ;
-(id)__INCodableDescriptionFalseDisplayNameIDKey;
-(id)__INCodableDescriptionFalseDisplayNameKey;
-(id)__INCodableDescriptionTrueDisplayNameIDKey;
-(id)__INCodableDescriptionTrueDisplayNameKey;
-(id)__INIntentResponseCodableDescriptionFalseDisplayNameKey;
-(id)__INTypeCodableDescriptionFalseDisplayNameKey;
-(id)__INIntentResponseCodableDescriptionFalseDisplayNameIDKey;
-(id)__INTypeCodableDescriptionFalseDisplayNameIDKey;
-(id)__INIntentResponseCodableDescriptionTrueDisplayNameKey;
-(id)__INTypeCodableDescriptionTrueDisplayNameKey;
-(id)__INIntentResponseCodableDescriptionTrueDisplayNameIDKey;
-(id)__INTypeCodableDescriptionTrueDisplayNameIDKey;
@end

