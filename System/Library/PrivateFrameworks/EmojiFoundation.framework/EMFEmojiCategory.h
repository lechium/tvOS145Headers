/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface EMFEmojiCategory : NSObject {

	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * shortLocalizedName; 
+(id)_emojiSetForIdentifier:(id)arg1 ;
+(BOOL)_supportsCoupleSkinToneSelection:(id)arg1 ;
+(BOOL)_isCoupleMultiSkinToneEmoji:(id)arg1 ;
+(id)PrepopulatedEmoji;
+(id)PeopleEmoji;
+(id)NatureEmoji;
+(id)FoodAndDrinkEmoji;
+(id)ActivityEmoji;
+(id)TravelAndPlacesEmoji;
+(id)ObjectsEmoji;
+(id)SymbolsEmoji;
+(id)computeEmojiFlagsSortedByLanguage;
+(id)extraFlagsForCountryCode:(id)arg1 ;
+(id)flagEmojiCountryCodesCommon;
+(id)stringToRegionalIndicatorString:(id)arg1 ;
+(id)insertionFlagsForCountryCodes:(id)arg1 inSortedCountryCodes:(id)arg2 ;
+(void)insertToSortedCountries:(id)arg1 withAdditionalFlags:(id)arg2 ;
+(id)FlagsEmoji;
+(id)_baseLocalizationKeyForIdentifier:(id)arg1 ;
+(id)DingbatsVariantEmoji;
+(id)NoneVariantEmoji;
+(id)SkinToneEmoji;
+(id)GenderEmoji;
+(id)ProfessionEmoji;
+(BOOL)_isHandholdingCoupleEmoji:(id)arg1 ;
+(id)CoupleMultiSkinToneEmoji;
+(id)ExtendedCoupleMultiSkinToneEmoji;
+(id)MultiPersonFamilySkinToneEmoji;
+(id)categoryIdentifierList;
+(id)categoryWithIdentifier:(id)arg1 ;
+(id)localizedRecentsDescription;
+(id)localizedSkinToneEmojiDescription;
+(BOOL)_isDingbatsVariantEmoji:(id)arg1 ;
+(BOOL)_isNoneVariantEmoji:(id)arg1 ;
+(BOOL)_isSkinToneEmoji:(id)arg1 ;
+(BOOL)_isGenderEmoji:(id)arg1 ;
+(BOOL)_isProfessionEmoji:(id)arg1 ;
+(BOOL)_isFlagEmoji:(id)arg1 ;
+(BOOL)_isComposedCoupleMultiSkinToneEmoji:(id)arg1 ;
+(BOOL)_isMultiPersonFamilySkinToneEmoji:(id)arg1 ;
+(BOOL)_isNewlyAddedEmoji:(id)arg1 ;
+(id)ProfessionWithoutSkinToneEmoji;
+(id)NewlyAddedEmoji;
+(id)CelebrationEmoji;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)localizedName;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)shortLocalizedName;
-(id)emojiTokensForLocaleData:(id)arg1 ;
@end

