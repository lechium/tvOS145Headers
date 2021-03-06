/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, MPCPlayerResponse, NSString, MPNowPlayingInfoLanguageOption;

@interface MPCPlayerLanguageOptionGroup : NSObject {

	unsigned long long _currentIndex;
	BOOL _allowEmptySelection;
	NSArray* _options;
	MPCPlayerResponse* _response;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;                          //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long numberOfOptions; 
@property (nonatomic,readonly) unsigned long long indexOfSelectedOption; 
@property (nonatomic,readonly) NSArray * options;                                            //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) MPNowPlayingInfoLanguageOption * selectedOption; 
@property (nonatomic,readonly) BOOL allowEmptySelection;                                     //@synthesize allowEmptySelection=_allowEmptySelection - In the implementation block
-(MPCPlayerResponse *)response;
-(NSArray *)options;
-(NSString *)localizedTitle;
-(BOOL)allowEmptySelection;
-(MPNowPlayingInfoLanguageOption *)selectedOption;
-(id)initWithLanguageOptionGroups:(id)arg1 currentLanguageOptions:(id)arg2 response:(id)arg3 ;
-(unsigned long long)numberOfOptions;
-(unsigned long long)indexOfSelectedOption;
-(id)localizedTitleForOptionAtIndex:(unsigned long long)arg1 ;
-(id)changeRequestForOptionAtIndex:(unsigned long long)arg1 ;
@end

