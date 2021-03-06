/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXGReusableView.h>

@class PXUpdater, PXRoundProgressView, PXGAssetDecorationViewConfiguration;

@interface PXGAssetDecorationView : UIView <PXGReusableView> {

	PXUpdater* _updater;
	PXRoundProgressView* _progressIndicatorView;
	PXGAssetDecorationViewConfiguration* _userData;
	CGRect _clippingRect;

}

@property (nonatomic,copy) PXGAssetDecorationViewConfiguration * userData;              //@synthesize userData=_userData - In the implementation block
@property (assign,nonatomic) CGRect clippingRect;                                       //@synthesize clippingRect=_clippingRect - In the implementation block
+(BOOL)_wantsProgressIndicatorForConfiguration:(id)arg1 ;
+(BOOL)wantsDecorationViewForConfiguration:(id)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserData:(PXGAssetDecorationViewConfiguration *)arg1 ;
-(PXGAssetDecorationViewConfiguration *)userData;
-(void)layoutSubviews;
-(void)_setNeedsUpdate;
-(CGRect)clippingRect;
-(void)setClippingRect:(CGRect)arg1 ;
-(void)becomeReusable;
-(void)_invalidateProgressIndicator;
-(void)_updateProgressIndicator;
@end

