/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PVHostApplicationDelegate.h>

@protocol PVHostApplicationDelegate;
@class NSString;

@interface PVHostApplicationDelegateHandler : NSObject <PVHostApplicationDelegate> {

	BOOL _cacheDelegateResponses;
	id<PVHostApplicationDelegate> _hostApplicationDelegate;

}

@property (nonatomic,retain) id<PVHostApplicationDelegate> hostApplicationDelegate;              //@synthesize hostApplicationDelegate=_hostApplicationDelegate - In the implementation block
@property (assign,nonatomic) BOOL cacheDelegateResponses;                                        //@synthesize cacheDelegateResponses=_cacheDelegateResponses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)setHostApplicationDelegate:(id<PVHostApplicationDelegate>)arg1 ;
-(id)effectTemplatesDirectoryName;
-(id)effectTemplatesBundle;
-(BOOL)wantsExtraLineSpacingForDiacritics;
-(BOOL)wantsDynamicLineSpacingForDiacritics;
-(BOOL)wantsToScaleEmojiToCapHeight;
-(BOOL)wantsToSkipSuggestedLineBreaksInParagraphLayout;
-(BOOL)wantsToUseBinarySearchForScalingToBothMargins;
-(BOOL)wantsToLimitLinesOfText;
-(unsigned)getNumberOfLinesToLimitTextTo;
-(BOOL)wantsToImproveQualityOfDraftQualityText;
-(BOOL)wantsToDownscaleGlyphsToOutputSize;
-(BOOL)wantsToSetTranscriptionsUsingArray;
-(BOOL)wantsToIgnoreTextBoundsOfTransparentObjects;
-(BOOL)wantsToIgnoreTextBoundsOfNewlinesOfTranscriptions;
-(BOOL)wantsToUseCachedTextureForText;
-(BOOL)wantsToIncludeSubstituteFontNameInAttributedString;
-(BOOL)wantsToIncludeTrackingValueInAttributedString;
-(BOOL)wantsToComputeTypographicHeightWithoutLastLineLeading;
-(BOOL)wantsToAdjustTextBoundsHeightUsingCapHeight;
-(BOOL)wantsToIncludeTrailingWhitespaceInParagraphLineWidth;
-(BOOL)wantsToCacheTopLevelGroupRender;
-(unsigned)getMaxGlyphResolution;
-(id)preferredDisplayColorSpace;
-(id)preferredExportColorSpace;
-(id<PVHostApplicationDelegate>)hostApplicationDelegate;
-(BOOL)cacheDelegateResponses;
-(void)setCacheDelegateResponses:(BOOL)arg1 ;
@end
