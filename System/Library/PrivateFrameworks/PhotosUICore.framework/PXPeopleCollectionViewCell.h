/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/PXUIAssetBadgeViewDelegate.h>

@protocol PXPeopleCollectionViewCellDelegate;
@class UIImageView, NSString, UILabel, UIView, PXRoundedCornerOverlayView, UIButton, UIVisualEffectView, UIImage;

@interface PXPeopleCollectionViewCell : UICollectionViewCell <PXUIAssetBadgeViewDelegate> {

	CGRect _unitRect;
	BOOL _titleUsesAllCaps;
	BOOL _favorite;
	BOOL _isReordering;
	BOOL _ppt_fullImageLoaded;
	BOOL _blurApplied;
	UIImageView* _avatarView;
	NSString* _name;
	double _textAlpha;
	unsigned long long _selectionStyle;
	id<PXPeopleCollectionViewCellDelegate> _delegate;
	UILabel* _nameLabel;
	UIView* _selectionView;
	PXRoundedCornerOverlayView* _roundCornerOverlay;
	UIButton* _favoriteBadge;
	UIView* _highlightOverlayView;
	UIView* _checkmarkView;
	UIView* _gradientView;
	UIImageView* _mirrorView;
	UIVisualEffectView* _blurView;
	CGSize _avatarSize;

}

@property (nonatomic,retain) UILabel * nameLabel;                                                 //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UIView * selectionView;                                              //@synthesize selectionView=_selectionView - In the implementation block
@property (nonatomic,retain) PXRoundedCornerOverlayView * roundCornerOverlay;                     //@synthesize roundCornerOverlay=_roundCornerOverlay - In the implementation block
@property (nonatomic,retain) UIButton * favoriteBadge;                                            //@synthesize favoriteBadge=_favoriteBadge - In the implementation block
@property (nonatomic,retain) UIView * highlightOverlayView;                                       //@synthesize highlightOverlayView=_highlightOverlayView - In the implementation block
@property (nonatomic,retain) UIView * checkmarkView;                                              //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,retain) UIView * gradientView;                                               //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) UIImageView * mirrorView;                                            //@synthesize mirrorView=_mirrorView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                                       //@synthesize blurView=_blurView - In the implementation block
@property (assign,nonatomic) BOOL blurApplied;                                                    //@synthesize blurApplied=_blurApplied - In the implementation block
@property (assign,nonatomic) CGSize avatarSize;                                                   //@synthesize avatarSize=_avatarSize - In the implementation block
@property (nonatomic,readonly) UIImageView * avatarView;                                          //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * name;                                                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double textAlpha;                                                    //@synthesize textAlpha=_textAlpha - In the implementation block
@property (assign,nonatomic) BOOL titleUsesAllCaps;                                               //@synthesize titleUsesAllCaps=_titleUsesAllCaps - In the implementation block
@property (assign,getter=isFavorite,nonatomic) BOOL favorite;                                     //@synthesize favorite=_favorite - In the implementation block
@property (assign,setter=setReordering:,nonatomic) BOOL isReordering;                             //@synthesize isReordering=_isReordering - In the implementation block
@property (assign,nonatomic) unsigned long long selectionStyle;                                   //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (assign,nonatomic,__weak) id<PXPeopleCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL ppt_fullImageLoaded;                                            //@synthesize ppt_fullImageLoaded=_ppt_fullImageLoaded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(id<PXPeopleCollectionViewCellDelegate>)delegate;
-(void)setDelegate:(id<PXPeopleCollectionViewCellDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)_updateType;
-(void)setSelected:(BOOL)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(BOOL)isFavorite;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)selectionView;
-(long long)_preferredSizeClass;
-(void)layoutSubviews;
-(void)setFavorite:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)selectionStyle;
-(void)setSelectionStyle:(unsigned long long)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UIImageView *)avatarView;
-(CGSize)avatarSize;
-(void)setAvatarSize:(CGSize)arg1 ;
-(void)setImage:(id)arg1 normalizedFaceRect:(CGRect)arg2 ;
-(void)setTextAlpha:(double)arg1 ;
-(void)setReordering:(BOOL)arg1 ;
-(double)textAlpha;
-(BOOL)isReordering;
-(void)setSelectionView:(UIView *)arg1 ;
-(PXRoundedCornerOverlayView *)roundCornerOverlay;
-(void)setRoundCornerOverlay:(PXRoundedCornerOverlayView *)arg1 ;
-(void)setTitleUsesAllCaps:(BOOL)arg1 ;
-(void)setBlurApplied:(BOOL)arg1 ;
-(CGSize)_avatarSizeForImageSize:(CGSize)arg1 ;
-(void)_favoriteBadgePressed:(id)arg1 ;
-(void)_updateSelection;
-(void)_updateTitleAndFavoriteBadgeForLayoutChange;
-(id)_stretchableGradientImageWithSize:(CGSize)arg1 scale:(double)arg2 gradientColor:(id)arg3 ;
-(BOOL)titleUsesAllCaps;
-(BOOL)ppt_fullImageLoaded;
-(void)setPpt_fullImageLoaded:(BOOL)arg1 ;
-(UIButton *)favoriteBadge;
-(void)setFavoriteBadge:(UIButton *)arg1 ;
-(UIView *)highlightOverlayView;
-(void)setHighlightOverlayView:(UIView *)arg1 ;
-(UIView *)checkmarkView;
-(void)setCheckmarkView:(UIView *)arg1 ;
-(UIView *)gradientView;
-(void)setGradientView:(UIView *)arg1 ;
-(UIImageView *)mirrorView;
-(void)setMirrorView:(UIImageView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(BOOL)blurApplied;
@end

