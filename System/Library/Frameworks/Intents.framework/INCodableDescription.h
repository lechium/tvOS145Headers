/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSMutableDictionary, INCodableLocalizationTable, NSString, INSchema, NSDictionary, NSOrderedSet, NSArray;

@interface INCodableDescription : NSObject <NSSecureCoding, INCodableCoding> {

	NSMutableDictionary* _attributesByName;
	INCodableLocalizationTable* _localizationTable;
	INCodableLocalizationTable* _customLocalizationTable;
	NSString* _mainBundleIdentifier;
	INSchema* _schema;
	NSString* _intentDefinitionNamespace;
	NSString* _className;
	NSString* _typeName;
	NSDictionary* _attributes;
	NSOrderedSet* _displayOrderedAttributes;
	NSString* _semanticRoot;

}

@property (setter=_setLocalizationTable:,nonatomic,copy) INCodableLocalizationTable * _localizationTable;                          //@synthesize localizationTable=_localizationTable - In the implementation block
@property (setter=_setCustomLocalizationTable:,nonatomic,copy) INCodableLocalizationTable * _customLocalizationTable;              //@synthesize customLocalizationTable=_customLocalizationTable - In the implementation block
@property (nonatomic,copy,readonly) NSString * _attributeKey; 
@property (nonatomic,copy,readonly) NSString * _attributesKey; 
@property (assign,nonatomic,__weak) INSchema * schema;                                                                             //@synthesize schema=_schema - In the implementation block
@property (nonatomic,copy) NSString * intentDefinitionNamespace;                                                                   //@synthesize intentDefinitionNamespace=_intentDefinitionNamespace - In the implementation block
@property (nonatomic,copy) NSString * className;                                                                                   //@synthesize className=_className - In the implementation block
@property (nonatomic,copy) NSString * typeName;                                                                                    //@synthesize typeName=_typeName - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;                                                                              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSOrderedSet * displayOrderedAttributes;                                                                //@synthesize displayOrderedAttributes=_displayOrderedAttributes - In the implementation block
@property (nonatomic,copy) NSString * semanticRoot;                                                                                //@synthesize semanticRoot=_semanticRoot - In the implementation block
@property (nonatomic,copy) NSString * mainBundleIdentifier;                                                                        //@synthesize mainBundleIdentifier=_mainBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * referencedCodableEnums; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)__INCodableAttributeUnsupportedReasonCodeKey;
+(id)__INCodableAttributeUnsupportedReasonKey;
+(id)__INCodableFileAttributeMetadataTypeKey;
+(id)__INCodableFileAttributeMetadataCustomUTIsKey;
+(id)__INCodableAttributeDialogFormatStringKey;
+(id)__INCodableAttributeUnsupportedReasonFormatStringKey;
+(id)__INCodableAttributePromptDialogFormatStringKey;
+(id)__INCodableAttributeDialogFormatStringIDKey;
+(id)__INCodableAttributeUnsupportedReasonFormatStringIDKey;
+(id)__INCodableAttributePromptDialogFormatStringIDKey;
+(id)__INCodableAttributeDialogFormatStringLanguageCodeKey;
+(id)__INCodableAttributeUnsupportedReasonFormatStringLanguageCodeKey;
+(id)__INCodableAttributePromptDialogFormatStringLanguageCodeKey;
+(id)__INCodableAttributeDialogFormatStringDictionaryKey;
+(id)__INCodableAttributeUnsupportedReasonFormatStringDictionaryKey;
+(id)__INCodableAttributePromptDialogFormatStringDictionaryKey;
+(id)__INCodableAttributeDialogFormatStringDictionaryLanguageCodeKey;
+(id)__INCodableAttributeUnsupportedReasonFormatStringDictionaryLanguageCodeKey;
+(id)__INCodableAttributePromptDialogFormatStringDictionaryLanguageCodeKey;
+(id)_calculateReferencedCodableDescriptionsFromAttributes:(id)arg1 usingTypes:(id)arg2 foundAttributes:(id)arg3 ;
+(id)_calculateReferencedCodableDescriptionsFromAttributes:(id)arg1 usingTypes:(id)arg2 ;
+(id)_codableDescriptionForTypedObject:(id)arg1 inDictionary:(id)arg2 ;
+(id)__INIntentCodablePhrasePhraseKey;
+(id)__INIntentCodablePhrasePronunciationHintKey;
+(id)__INIntentCodablePhrasePronunciationHintIDKey;
+(id)__INIntentCodablePhrasePhraseIDKey;
+(id)__INCodableObjectAttributeTypeKey;
+(id)__INCodableObjectAttributeKey;
+(id)__INCodableScalarAttributeTypeKey;
+(id)__INCodableScalarAttributeKey;
+(id)__INCodableEnumAttributeEnumTypeNamespaceKey;
+(id)__INCodableEnumAttributeEnumTypeKey;
+(id)__INCodableAttributeSupportsResolutionKey;
+(id)__INCodableAttributeSupportsDynamicEnumerationKey;
+(id)__INCodableAttributeSupportsSearchKey;
+(id)__INCodableAttributeConfigurableKey;
+(id)__INCodableAttributeWindowSizeKey;
+(id)__INCodableAttributeSupportsMultipleValuesKey;
+(id)__INCodableAttributeFixedSizeArrayKey;
+(id)__INCodableAttributePromptDialogsKey;
+(id)__INCodableAttributeTagKey;
+(id)__INCodableAttributeArraySizesKey;
+(id)__INCodableAttributeArraySizeSizeKey;
+(id)__INCodableAttributeArraySizeSizeClassKey;
+(id)__INCodableAttributeUnsupportedReasonsKey;
+(id)__INCodableAttributeMetadataKey;
+(id)__INCodableAttributeTypeKey;
+(id)__INCodableAttributeEnumTypeKey;
+(id)__INCodableAttributeRelationshipKey;
+(id)__INCodableAttributeEntityKeypathKey;
+(id)__INCodableAttributeNameKey;
+(id)__INCodableAttributeDisplayNameKey;
+(id)__INCodableAttributeDisplayNameIDKey;
+(id)__INCodableAttributeDisplayPriorityKey;
+(id)__INCodableAttributeDefaultKey;
+(id)__INCodableStringAttributeMetadataCapitalizationKey;
+(id)__INCodableStringAttributeMetadataDisableAutocorrectKey;
+(id)__INCodableStringAttributeMetadataDisableSmartDashesKey;
+(id)__INCodableStringAttributeMetadataDisableSmartQuotesKey;
+(id)__INCodableStringAttributeMetadataDefaultValueKey;
+(id)__INCodableStringAttributeMetadataDefaultValueIDKey;
+(id)__INCodableStringAttributeMetadataMultilineKey;
+(id)__INCodableTimeIntervalAttributeMetadataUnitKey;
+(id)__INCodableTimeIntervalAttributeMetadataDefaultValueKey;
+(id)__INCodableTimeIntervalAttributeMetadataMinimumValueKey;
+(id)__INCodableTimeIntervalAttributeMetadataMaximumValueKey;
+(id)__INCodableTimeIntervalAttributeMetadataDefaultUnitKey;
+(id)__INCodableTimeIntervalAttributeMetadataMinimumUnitKey;
+(id)__INCodableTimeIntervalAttributeMetadataMaximumUnitKey;
+(id)__INCodableBooleanAttributeMetadataDefaultValueKey;
+(id)__INCodableBooleanAttributeMetadataFalseDisplayNameKey;
+(id)__INCodableBooleanAttributeMetadataFalseDisplayNameIDKey;
+(id)__INCodableBooleanAttributeMetadataTrueDisplayNameKey;
+(id)__INCodableBooleanAttributeMetadataTrueDisplayNameIDKey;
+(id)__INCodableCurrencyAmountAttributeMetadataCurrencyCodesKey;
+(id)__INCodableCurrencyAmountAttributeMetadataCurrencyCodeKey;
+(id)__INCodableCustomObjectAttributeObjectTypeKey;
+(id)__INCodableCustomObjectAttributeObjectTypeNamespaceKey;
+(id)__INCodableEnumAttributeMetadataDefaultValueKey;
+(id)__INCodableEnumAttributeMetadataKey;
+(id)__INCodableMeasurementAttributeMetadataUnitKey;
+(id)__INCodableMeasurementAttributeMetadataDefaultUnitKey;
+(id)__INCodableMeasurementAttributeMetadataSupportsNegativeNumbersKey;
+(id)__INCodableMeasurementAttributeMetadataDefaultValueKey;
+(id)__INCodablePlacemarkAttributeMetadataKey;
+(id)__INCodablePlacemarkAttributeMetadataTypeKey;
+(id)__INCodablePersonAttributeMetadataTypeKey;
+(id)__INCodablePersonAttributeMetadataKey;
+(id)__INCodableDateComponentsAttributeMetadataTemplateIDKey;
+(id)__INCodableDateComponentsAttributeMetadataTypeKey;
+(id)__INCodableDateComponentsAttributeMetadataFormatKey;
+(id)__INCodableDateComponentsAttributeMetadataDateStyleKey;
+(id)__INCodableDateComponentsAttributeMetadataTimeStyleKey;
+(id)__INCodableDateComponentsAttributeMetadataTemplateKey;
+(id)__INCodableNumberAttributeMetadataDefaultValueKey;
+(id)__INCodableNumberAttributeMetadataMinimumValueKey;
+(id)__INCodableNumberAttributeMetadataMaximumValueKey;
+(id)__INCodableNumberAttributeMetadataSupportsNegativeNumbersKey;
+(id)__INCodableNumberAttributeMetadataTypeKey;
+(id)__INIntentResponseCodableCodeNameKey;
+(id)__INIntentResponseCodableCodeFormatStringIDKey;
+(id)__INIntentResponseCodableCodeConciseFormatStringKey;
+(id)__INIntentResponseCodableCodeConciseFormatStringIDKey;
+(id)__INIntentResponseCodableCodeSuccessKey;
+(id)__INIntentResponseCodableCodeFormatStringLanguageCodeKey;
+(id)__INIntentResponseCodableCodeConciseFormatStringLanguageCodeKey;
+(id)__INIntentResponseCodableCodeFormatStringDictionaryKey;
+(id)__INIntentResponseCodableCodeFormatStringDictionaryLanguageCodeKey;
+(id)__INIntentResponseCodableCodeConciseFormatStringDictionaryKey;
+(id)__INIntentResponseCodableCodeConciseFormatStringDictionaryLanguageCodeKey;
+(id)__INIntentResponseCodableCodeFormatStringKey;
+(id)__INCodableAttributeMetadataPlaceholderKey;
+(id)__INCodableAttributeMetadataPlaceholderIDKey;
+(id)__INCodableAttributePromptDialogTypeKey;
+(id)__INCodableAttributePromptDialogKey;
+(id)__INCodableAttributeRelationshipParentNameKey;
+(id)__INCodableAttributeRelationshipPredicateNameKey;
+(id)__INCodableAttributeRelationshipPredicateValueKey;
+(id)__INCodableAttributeRelationshipPredicateValuesKey;
+(id)__INCodableURLAttributeMetadataDefaultValueKey;
+(id)__INCodableURLAttributeMetadataKey;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)attributes;
-(id)dictionaryRepresentation;
-(INSchema *)schema;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(NSString *)className;
-(INCodableLocalizationTable *)_localizationTable;
-(NSString *)_attributeKey;
-(NSString *)mainBundleIdentifier;
-(void)setClassName:(NSString *)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INCodableLocalizationTable *)_customLocalizationTable;
-(id)_ignoredAttributeTags;
-(NSString *)_attributesKey;
-(void)_updateAttributesByName;
-(id)_nullable_schema;
-(id)attributeByKeyPath:(id)arg1 ;
-(id)attributeByName:(id)arg1 ;
-(unsigned long long)highestAttributeTag;
-(NSArray *)referencedCodableEnums;
-(void)_setLocalizationTable:(id)arg1 ;
-(void)_setCustomLocalizationTable:(id)arg1 ;
-(void)setMainBundleIdentifier:(NSString *)arg1 ;
-(void)setSchema:(INSchema *)arg1 ;
-(NSString *)intentDefinitionNamespace;
-(void)setIntentDefinitionNamespace:(NSString *)arg1 ;
-(NSString *)typeName;
-(void)setTypeName:(NSString *)arg1 ;
-(NSOrderedSet *)displayOrderedAttributes;
-(void)setDisplayOrderedAttributes:(NSOrderedSet *)arg1 ;
-(NSString *)semanticRoot;
-(void)setSemanticRoot:(NSString *)arg1 ;
@end

