/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PXSearchSettings : PXSettings {

	BOOL _alwaysTrySiriSearch;
	BOOL _enableImplicitTokenization;
	BOOL _implicitTokenizationUsePrefixMatch;
	BOOL _implicitTokenizationLastTokenUsesPrefixMatch;
	BOOL _preventUnnecessaryImplicitTokenization;
	BOOL _exactMatchIgnoreUntokenizedCharacters;
	BOOL _lastImplicitTokenAllowsWordEmbeddings;
	BOOL _newSearchUIEnabled;
	BOOL _forceIndexingFooter;
	unsigned long long _maxNumberOfSuggestionsToShow;
	unsigned long long _maxNumberOfTopAssetColumns;
	unsigned long long _maxNumberOfResultColumns;
	unsigned long long _maxNumberOfTopAssetRows;
	unsigned long long _standardNumberOfTopAssetRows;

}

@property (assign,nonatomic) BOOL alwaysTrySiriSearch;                                         //@synthesize alwaysTrySiriSearch=_alwaysTrySiriSearch - In the implementation block
@property (assign,nonatomic) BOOL enableImplicitTokenization;                                  //@synthesize enableImplicitTokenization=_enableImplicitTokenization - In the implementation block
@property (assign,nonatomic) BOOL implicitTokenizationUsePrefixMatch;                          //@synthesize implicitTokenizationUsePrefixMatch=_implicitTokenizationUsePrefixMatch - In the implementation block
@property (assign,nonatomic) BOOL implicitTokenizationLastTokenUsesPrefixMatch;                //@synthesize implicitTokenizationLastTokenUsesPrefixMatch=_implicitTokenizationLastTokenUsesPrefixMatch - In the implementation block
@property (assign,nonatomic) BOOL preventUnnecessaryImplicitTokenization;                      //@synthesize preventUnnecessaryImplicitTokenization=_preventUnnecessaryImplicitTokenization - In the implementation block
@property (assign,nonatomic) BOOL exactMatchIgnoreUntokenizedCharacters;                       //@synthesize exactMatchIgnoreUntokenizedCharacters=_exactMatchIgnoreUntokenizedCharacters - In the implementation block
@property (assign,nonatomic) BOOL lastImplicitTokenAllowsWordEmbeddings;                       //@synthesize lastImplicitTokenAllowsWordEmbeddings=_lastImplicitTokenAllowsWordEmbeddings - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfSuggestionsToShow;                  //@synthesize maxNumberOfSuggestionsToShow=_maxNumberOfSuggestionsToShow - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfTopAssetColumns;                    //@synthesize maxNumberOfTopAssetColumns=_maxNumberOfTopAssetColumns - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfResultColumns;                      //@synthesize maxNumberOfResultColumns=_maxNumberOfResultColumns - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfTopAssetRows;                       //@synthesize maxNumberOfTopAssetRows=_maxNumberOfTopAssetRows - In the implementation block
@property (assign,nonatomic) unsigned long long standardNumberOfTopAssetRows;                  //@synthesize standardNumberOfTopAssetRows=_standardNumberOfTopAssetRows - In the implementation block
@property (assign,getter=isNewSearchUIEnabled,nonatomic) BOOL newSearchUIEnabled;              //@synthesize newSearchUIEnabled=_newSearchUIEnabled - In the implementation block
@property (assign,nonatomic) BOOL forceIndexingFooter;                                         //@synthesize forceIndexingFooter=_forceIndexingFooter - In the implementation block
+(id)sharedInstance;
-(BOOL)implicitTokenizationUsePrefixMatch;
-(BOOL)implicitTokenizationLastTokenUsesPrefixMatch;
-(BOOL)lastImplicitTokenAllowsWordEmbeddings;
-(BOOL)enableImplicitTokenization;
-(BOOL)preventUnnecessaryImplicitTokenization;
-(BOOL)exactMatchIgnoreUntokenizedCharacters;
-(void)setEnableImplicitTokenization:(BOOL)arg1 ;
-(void)setImplicitTokenizationUsePrefixMatch:(BOOL)arg1 ;
-(void)setImplicitTokenizationLastTokenUsesPrefixMatch:(BOOL)arg1 ;
-(void)setPreventUnnecessaryImplicitTokenization:(BOOL)arg1 ;
-(void)setExactMatchIgnoreUntokenizedCharacters:(BOOL)arg1 ;
-(void)setLastImplicitTokenAllowsWordEmbeddings:(BOOL)arg1 ;
-(void)setDefaultValues;
-(id)parentSettings;
-(unsigned long long)maxNumberOfSuggestionsToShow;
-(unsigned long long)maxNumberOfTopAssetColumns;
-(unsigned long long)maxNumberOfResultColumns;
-(unsigned long long)standardNumberOfTopAssetRows;
-(unsigned long long)maxNumberOfTopAssetRows;
-(BOOL)alwaysTrySiriSearch;
-(void)setAlwaysTrySiriSearch:(BOOL)arg1 ;
-(void)setMaxNumberOfSuggestionsToShow:(unsigned long long)arg1 ;
-(void)setMaxNumberOfTopAssetColumns:(unsigned long long)arg1 ;
-(void)setMaxNumberOfResultColumns:(unsigned long long)arg1 ;
-(void)setMaxNumberOfTopAssetRows:(unsigned long long)arg1 ;
-(void)setStandardNumberOfTopAssetRows:(unsigned long long)arg1 ;
-(BOOL)isNewSearchUIEnabled;
-(void)setNewSearchUIEnabled:(BOOL)arg1 ;
-(BOOL)forceIndexingFooter;
-(void)setForceIndexingFooter:(BOOL)arg1 ;
@end

