/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSLocale, NSArray, NSDictionary;

@interface TIInputMode : NSObject <NSCopying> {

	NSString* _languageWithRegion;
	NSString* _variant;
	NSLocale* _locale;
	Class _inputManagerClass;
	Class _keyboardFeatureSpecializationClass;
	Class _multilingualInputManagerClass;
	NSString* _normalizedIdentifier;

}

@property (nonatomic,readonly) NSString * normalizedIdentifier;                       //@synthesize normalizedIdentifier=_normalizedIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * languageWithRegion; 
@property (nonatomic,readonly) NSString * variant; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) Class inputManagerClass; 
@property (nonatomic,readonly) Class keyboardFeatureSpecializationClass; 
@property (nonatomic,readonly) Class multilingualInputManagerClass; 
@property (nonatomic,readonly) BOOL supportsPrediction; 
@property (nonatomic,readonly) BOOL supportsMultilingualKeyboard; 
@property (nonatomic,readonly) BOOL spaceAutocorrectionEnabled; 
@property (nonatomic,readonly) NSString * replacementForDoubleSpace; 
@property (nonatomic,readonly) BOOL doesComposeText; 
@property (nonatomic,readonly) NSArray * allAccentKeyStrings; 
@property (nonatomic,readonly) NSDictionary * layoutTags; 
@property (nonatomic,readonly) NSDictionary * compositionMap; 
@property (nonatomic,readonly) NSDictionary * reverseCompositionMap; 
@property (nonatomic,readonly) NSString * nonstopPunctuationCharacters; 
@property (nonatomic,readonly) NSString * sentencePrefixingCharacters; 
@property (nonatomic,readonly) NSString * sentenceDelimitingCharacters; 
@property (nonatomic,readonly) NSString * sentenceTrailingCharacters; 
+(id)inputModeWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSLocale *)locale;
-(NSString *)variant;
-(NSString *)replacementForDoubleSpace;
-(NSString *)languageWithRegion;
-(id)initWithNormalizedIdentifier:(id)arg1 ;
-(Class)inputManagerClass;
-(Class)keyboardFeatureSpecializationClass;
-(Class)multilingualInputManagerClass;
-(BOOL)supportsPrediction;
-(BOOL)supportsMultilingualKeyboard;
-(BOOL)spaceAutocorrectionEnabled;
-(BOOL)doesComposeText;
-(NSArray *)allAccentKeyStrings;
-(NSDictionary *)layoutTags;
-(NSDictionary *)compositionMap;
-(NSDictionary *)reverseCompositionMap;
-(NSString *)nonstopPunctuationCharacters;
-(NSString *)sentencePrefixingCharacters;
-(NSString *)sentenceDelimitingCharacters;
-(NSString *)sentenceTrailingCharacters;
-(NSString *)normalizedIdentifier;
@end

