/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXObservable.h>

@protocol PXDisplayAsset, PXUIImageProvider;
@class NSString, NSAttributedString, UIColor;

@interface PXCMMInvitationViewModel : PXObservable {

	BOOL _highlighted;
	BOOL _selected;
	NSString* _posterTitle;
	NSString* _posterSubtitle;
	id<PXDisplayAsset> _posterAsset;
	id<PXUIImageProvider> _posterMediaProvider;
	NSAttributedString* _attributedTitle;
	NSAttributedString* _attributedSubtitle1;
	NSAttributedString* _attributedSubtitle2;
	UIColor* _opaqueAncestorBackgroundColor;

}

@property (nonatomic,copy,readonly) NSString * posterTitle;                                 //@synthesize posterTitle=_posterTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * posterSubtitle;                              //@synthesize posterSubtitle=_posterSubtitle - In the implementation block
@property (nonatomic,copy,readonly) id<PXDisplayAsset> posterAsset;                         //@synthesize posterAsset=_posterAsset - In the implementation block
@property (nonatomic,copy,readonly) id<PXUIImageProvider> posterMediaProvider;              //@synthesize posterMediaProvider=_posterMediaProvider - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * attributedTitle;                   //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * attributedSubtitle1;               //@synthesize attributedSubtitle1=_attributedSubtitle1 - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * attributedSubtitle2;               //@synthesize attributedSubtitle2=_attributedSubtitle2 - In the implementation block
@property (nonatomic,readonly) UIColor * opaqueAncestorBackgroundColor;                     //@synthesize opaqueAncestorBackgroundColor=_opaqueAncestorBackgroundColor - In the implementation block
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted;                       //@synthesize highlighted=_highlighted - In the implementation block
@property (getter=isSelected,nonatomic,readonly) BOOL selected;                             //@synthesize selected=_selected - In the implementation block
-(id)init;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id<PXDisplayAsset>)posterAsset;
-(id<PXUIImageProvider>)posterMediaProvider;
-(void)setPosterTitle:(NSString *)arg1 ;
-(void)setPosterSubtitle:(NSString *)arg1 ;
-(void)setPosterAsset:(id<PXDisplayAsset>)arg1 ;
-(void)setPosterMediaProvider:(id<PXUIImageProvider>)arg1 ;
-(void)setAttributedSubtitle1:(NSAttributedString *)arg1 ;
-(void)setAttributedSubtitle2:(NSAttributedString *)arg1 ;
-(void)setOpaqueAncestorBackgroundColor:(UIColor *)arg1 ;
-(NSString *)posterTitle;
-(NSString *)posterSubtitle;
-(NSAttributedString *)attributedSubtitle1;
-(NSAttributedString *)attributedSubtitle2;
-(UIColor *)opaqueAncestorBackgroundColor;
@end

