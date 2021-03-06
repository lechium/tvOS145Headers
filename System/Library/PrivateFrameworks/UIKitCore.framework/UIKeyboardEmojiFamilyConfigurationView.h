/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKBKeyViewContentView.h>

@class NSMutableArray, UIView, UIStackView, UIKeyboardEmojiWellView, NSIndexPath, NSString, NSArray, UIKBTree;

@interface UIKeyboardEmojiFamilyConfigurationView : UIView <UIKBKeyViewContentView> {

	double _metachronalRhythmAnimationStartTime;
	BOOL _usesDarkStyle;
	BOOL _hasSplitFontSupport;
	NSMutableArray* _familyMemberStackViews;
	UIView* _separatorView;
	UIStackView* _previewWellStackView;
	UIKeyboardEmojiWellView* _neutralWellView;
	UIKeyboardEmojiWellView* _configuredWellView;
	NSIndexPath* _lastSelectedIndexPath;
	NSString* _baseEmojiString;
	NSMutableArray* _selectedVariantIndices;
	NSArray* _skinToneVariantRows;
	NSArray* _variantDisplayRows;
	UIKBTree* _representedKey;

}

@property (assign,nonatomic) BOOL usesDarkStyle;                                        //@synthesize usesDarkStyle=_usesDarkStyle - In the implementation block
@property (nonatomic,retain) NSMutableArray * familyMemberStackViews;                   //@synthesize familyMemberStackViews=_familyMemberStackViews - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                                    //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UIStackView * previewWellStackView;                        //@synthesize previewWellStackView=_previewWellStackView - In the implementation block
@property (nonatomic,retain) UIKeyboardEmojiWellView * neutralWellView;                 //@synthesize neutralWellView=_neutralWellView - In the implementation block
@property (nonatomic,retain) UIKeyboardEmojiWellView * configuredWellView;              //@synthesize configuredWellView=_configuredWellView - In the implementation block
@property (nonatomic,retain) NSIndexPath * lastSelectedIndexPath;                       //@synthesize lastSelectedIndexPath=_lastSelectedIndexPath - In the implementation block
@property (nonatomic,retain) NSString * baseEmojiString;                                //@synthesize baseEmojiString=_baseEmojiString - In the implementation block
@property (nonatomic,retain) NSMutableArray * selectedVariantIndices;                   //@synthesize selectedVariantIndices=_selectedVariantIndices - In the implementation block
@property (nonatomic,retain) NSArray * skinToneVariantRows;                             //@synthesize skinToneVariantRows=_skinToneVariantRows - In the implementation block
@property (nonatomic,retain) NSArray * variantDisplayRows;                              //@synthesize variantDisplayRows=_variantDisplayRows - In the implementation block
@property (nonatomic,retain) UIKBTree * representedKey;                                 //@synthesize representedKey=_representedKey - In the implementation block
@property (assign,nonatomic) BOOL hasSplitFontSupport;                                  //@synthesize hasSplitFontSupport=_hasSplitFontSupport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)preferredContentViewSizeForKey:(id)arg1 withTraits:(id)arg2 ;
+(id)_selectionAndSeparatorColorForDarkMode:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)separatorView;
-(void)setSeparatorView:(UIView *)arg1 ;
-(NSIndexPath *)lastSelectedIndexPath;
-(NSMutableArray *)selectedVariantIndices;
-(void)setSelectedVariantIndices:(NSMutableArray *)arg1 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)updateRenderConfig:(id)arg1 ;
-(void)setFamilyMemberStackViews:(NSMutableArray *)arg1 ;
-(BOOL)usesDarkStyle;
-(void)setNeutralWellView:(UIKeyboardEmojiWellView *)arg1 ;
-(UIKeyboardEmojiWellView *)neutralWellView;
-(void)setConfiguredWellView:(UIKeyboardEmojiWellView *)arg1 ;
-(UIKeyboardEmojiWellView *)configuredWellView;
-(void)setPreviewWellStackView:(UIStackView *)arg1 ;
-(UIStackView *)previewWellStackView;
-(void)setHasSplitFontSupport:(BOOL)arg1 ;
-(NSMutableArray *)familyMemberStackViews;
-(BOOL)hasSplitFontSupport;
-(void)setBaseEmojiString:(NSString *)arg1 ;
-(void)setSkinToneVariantRows:(NSArray *)arg1 ;
-(void)setVariantDisplayRows:(NSArray *)arg1 ;
-(void)_configureFamilyMemberWellStackViews;
-(NSString *)baseEmojiString;
-(NSArray *)variantDisplayRows;
-(NSArray *)skinToneVariantRows;
-(void)_updatePreviewWellForCurrentSelection;
-(id)_wellViewForSection:(long long)arg1 item:(long long)arg2 ;
-(void)_updateBottomRowForSelections:(id)arg1 ;
-(UIKBTree *)representedKey;
-(void)setLastSelectedIndexPath:(NSIndexPath *)arg1 ;
-(id)_currentlySelectedSkinToneConfiguration;
-(unsigned long long)_silhouetteFromCurrentSelections;
-(BOOL)_hasCompletelyConfiguredSkinToneConfiguration;
-(void)_updateReferencedKeySelectedVariantIndexBasedOnCurrentConfiguration;
-(void)_beginFamilyMetachronalRhythmAnimation;
-(void)setRepresentedKey:(UIKBTree *)arg1 ;
-(void)_configureSkinToneVariantSpecifiersForBaseString:(id)arg1 ;
-(void)_setCurrentlySelectedSkinToneConfiguration:(id)arg1 ;
-(void)setUsesDarkStyle:(BOOL)arg1 ;
-(void)_colorConfigurationDidChange;
@end

