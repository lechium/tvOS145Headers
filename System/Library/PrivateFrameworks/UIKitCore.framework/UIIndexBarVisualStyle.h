/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIIndexBarView;


@protocol UIIndexBarVisualStyle <NSObject>
@property (assign,nonatomic,__weak) UIIndexBarView * indexBarView; 
@property (nonatomic,readonly) BOOL canBecomeFocused; 
@property (nonatomic,readonly) BOOL overlay; 
@property (nonatomic,readonly) double minLineHeight; 
@property (assign,nonatomic) BOOL expanded; 
@optional
-(void)drawRect:(CGRect)arg1;
-(void)layoutSubviews;
-(BOOL)expanded;
-(void)setExpanded:(BOOL)arg1;
-(void)traitCollectionDidChange:(id)arg1;
-(void)highlightedIndexUpdated;
-(void)entriesUpdated;
-(void)displayEntriesUpdated;
-(void)sizeUpdated;
-(void)deflectionUpdated;
-(void)deflectionReset:(BOOL)arg1;
-(BOOL)updateSectionForTouch:(id)arg1 withEvent:(id)arg2;
-(void)highlightStyleUpdated;
-(void)indexColorUpdated;
-(long long)_accessibility_indexForEntryAtPoint:(CGPoint)arg1;

@required
-(BOOL)overlay;
-(CGSize*)sizeThatFits:(CGSize)arg1;
-(id)initWithView:(id)arg1;
-(BOOL)canBecomeFocused;
-(UIIndexBarView *)indexBarView;
-(double)minLineHeight;
-(id)displayEntryFromEntry:(id)arg1;
-(void)setIndexBarView:(id)arg1;

@end

