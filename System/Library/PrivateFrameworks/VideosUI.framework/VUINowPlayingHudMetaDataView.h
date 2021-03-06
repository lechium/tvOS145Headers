/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSDictionary, VUINowPlayingHudMetaDataViewLayout, VUILabel, VUIFocusableTextView, VUIMediaTagsView;

@interface VUINowPlayingHudMetaDataView : UIView {

	NSDictionary* _viewsMap;
	VUINowPlayingHudMetaDataViewLayout* _layout;
	VUILabel* _titleLabel;
	VUILabel* _badgeDummyLabel;
	VUIFocusableTextView* _descriptionTextView;
	VUIMediaTagsView* _badgeView;

}

@property (nonatomic,retain) VUINowPlayingHudMetaDataViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * badgeDummyLabel;                               //@synthesize badgeDummyLabel=_badgeDummyLabel - In the implementation block
@property (nonatomic,retain) VUIFocusableTextView * descriptionTextView;               //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,retain) VUIMediaTagsView * badgeView;                             //@synthesize badgeView=_badgeView - In the implementation block
-(VUINowPlayingHudMetaDataViewLayout *)layout;
-(void)setLayout:(VUINowPlayingHudMetaDataViewLayout *)arg1 ;
-(void)layoutSubviews;
-(VUILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(VUIMediaTagsView *)badgeView;
-(void)_updateAppearance;
-(void)setBadgeView:(VUIMediaTagsView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 layout:(id)arg2 ;
-(VUIFocusableTextView *)descriptionTextView;
-(void)setDescriptionTextView:(VUIFocusableTextView *)arg1 ;
-(void)_configureSubviews;
-(void)updateWithMetadata:(id)arg1 ;
-(void)setDescriptionTextSelectionHandler:(/*^block*/id)arg1 ;
-(VUILabel *)badgeDummyLabel;
-(void)setBadgeDummyLabel:(VUILabel *)arg1 ;
@end

