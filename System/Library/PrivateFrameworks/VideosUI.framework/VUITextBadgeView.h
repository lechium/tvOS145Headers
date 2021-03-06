/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol VUITextBadgeViewDelegate;
@class NSAttributedString, UIImage, UIView, VUITextBadgeLayout, VUIRentalExpirationLabel, IKViewElement, NSTimer, NSOperation;

@interface VUITextBadgeView : UIView {

	BOOL _backgroundImageForMaterialRenderingHasChanged;
	NSAttributedString* _attributedTitle;
	double _strokeSize;
	UIImage* _backgroundImage;
	UIView* _imageView;
	VUITextBadgeLayout* _badgeLayout;
	VUIRentalExpirationLabel* _rentalExpirationLabel;
	id<VUITextBadgeViewDelegate> _delegate;
	UIImage* _backgroundImageForMaterialRendering;
	IKViewElement* _viewElement;
	NSTimer* _expiryUpdateTimer;
	NSOperation* _pendingOperation;
	CGSize _glyphSize;

}

@property (assign,nonatomic) CGSize glyphSize;                                                //@synthesize glyphSize=_glyphSize - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                                     //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) NSTimer * expiryUpdateTimer;                                     //@synthesize expiryUpdateTimer=_expiryUpdateTimer - In the implementation block
@property (nonatomic,retain) NSOperation * pendingOperation;                                  //@synthesize pendingOperation=_pendingOperation - In the implementation block
@property (assign,nonatomic) BOOL backgroundImageForMaterialRenderingHasChanged;              //@synthesize backgroundImageForMaterialRenderingHasChanged=_backgroundImageForMaterialRenderingHasChanged - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedTitle;                              //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (assign,nonatomic) double strokeSize;                                               //@synthesize strokeSize=_strokeSize - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                                       //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIView * imageView;                                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) VUITextBadgeLayout * badgeLayout;                                //@synthesize badgeLayout=_badgeLayout - In the implementation block
@property (nonatomic,retain) VUIRentalExpirationLabel * rentalExpirationLabel;                //@synthesize rentalExpirationLabel=_rentalExpirationLabel - In the implementation block
@property (assign,nonatomic,__weak) id<VUITextBadgeViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImageForMaterialRendering;                   //@synthesize backgroundImageForMaterialRendering=_backgroundImageForMaterialRendering - In the implementation block
+(BOOL)badgeElementHasContent:(id)arg1 ;
+(BOOL)_viewBackgroundImageNeedsUpdatingWithFrame:(CGRect)arg1 currentBackgroundImage:(id)arg2 ;
-(void)dealloc;
-(id<VUITextBadgeViewDelegate>)delegate;
-(void)setDelegate:(id<VUITextBadgeViewDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(void)reset;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(CGSize)glyphSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIView *)imageView;
-(void)_imageLoaded;
-(void)setImageView:(UIView *)arg1 ;
-(void)_invalidateTimer;
-(IKViewElement *)viewElement;
-(void)setGlyphSize:(CGSize)arg1 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(CGSize)_textSize;
-(void)setRentalExpirationLabel:(VUIRentalExpirationLabel *)arg1 ;
-(VUIRentalExpirationLabel *)rentalExpirationLabel;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
-(void)_cancelPendingOperation;
-(BOOL)_textBadgeBackgroundImageNeedsUpdating;
-(void)_redrawTextBadgeWithDuration:(double)arg1 ;
-(void)_updateBackgroundImagesWithCompletedOperation:(id)arg1 ;
-(void)setElement:(id)arg1 withBadgeLayout:(id)arg2 ;
-(void)_redrawView:(id)arg1 withDuration:(double)arg2 ;
-(void)setBackgroundImageForMaterialRendering:(UIImage *)arg1 ;
-(UIImage *)backgroundImageForMaterialRendering;
-(NSOperation *)pendingOperation;
-(void)setPendingOperation:(NSOperation *)arg1 ;
-(VUITextBadgeLayout *)badgeLayout;
-(void)setBadgeLayout:(VUITextBadgeLayout *)arg1 ;
-(NSTimer *)expiryUpdateTimer;
-(void)setExpiryUpdateTimer:(NSTimer *)arg1 ;
-(void)setBackgroundImageForMaterialRendering:(id)arg1 imageSize:(CGSize)arg2 overlayViewFrame:(CGRect)arg3 ;
-(void)_updateBackgroundMaterialImagesWithBackgroundImageSize:(CGSize)arg1 performSynchronously:(BOOL)arg2 overlayViewFrame:(CGRect)arg3 ;
-(double)strokeSize;
-(void)setStrokeSize:(double)arg1 ;
-(BOOL)backgroundImageForMaterialRenderingHasChanged;
-(void)setBackgroundImageForMaterialRenderingHasChanged:(BOOL)arg1 ;
@end

