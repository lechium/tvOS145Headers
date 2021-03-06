/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/RUIPageAccessory.h>

@protocol GKRemoteUIAuxiliaryViewDelegate;
@class GKLabel, GKButton, NSDictionary, NSArray, NSString;

@interface GKRemoteUITableHeaderView : UIView <RUIPageAccessory> {

	int _layoutStyle;
	id<GKRemoteUIAuxiliaryViewDelegate> _delegate;
	double _height;
	GKLabel* _label;
	GKLabel* _subLabel;
	GKButton* _button;
	NSDictionary* _attributes;
	NSArray* _replaceableConstraints;

}

@property (assign,nonatomic) double height;                                                    //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) GKLabel * label;                                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) GKLabel * subLabel;                                               //@synthesize subLabel=_subLabel - In the implementation block
@property (nonatomic,retain) GKButton * button;                                                //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;                                        //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSArray * replaceableConstraints;                                 //@synthesize replaceableConstraints=_replaceableConstraints - In the implementation block
@property (assign,nonatomic) int layoutStyle;                                                  //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic,__weak) id<GKRemoteUIAuxiliaryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<GKRemoteUIAuxiliaryViewDelegate>)delegate;
-(void)setDelegate:(id<GKRemoteUIAuxiliaryViewDelegate>)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(GKLabel *)label;
-(double)height;
-(void)setLabel:(GKLabel *)arg1 ;
-(void)setHeight:(double)arg1 ;
-(GKButton *)button;
-(void)setButton:(GKButton *)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(void)setLayoutStyle:(int)arg1 ;
-(int)layoutStyle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(double)rightMargin;
-(void)objectModelDidChange:(id)arg1 ;
-(double)bottomMargin;
-(GKLabel *)subLabel;
-(double)leftMargin;
-(void)createLabelWithAttributes:(id)arg1 ;
-(void)createSubLabelWithAttributes:(id)arg1 ;
-(void)createButtonWithAttributes:(id)arg1 ;
-(void)applyConstraints;
-(void)buttonTapped:(id)arg1 ;
-(double)labelBaselineOffset;
-(NSArray *)replaceableConstraints;
-(double)labelBaselineToSubLabelTopOffset;
-(double)labelBaselineToButtonBaselineOffset;
-(double)labelTopOffset;
-(void)setReplaceableConstraints:(NSArray *)arg1 ;
-(void)setSubLabel:(GKLabel *)arg1 ;
@end

