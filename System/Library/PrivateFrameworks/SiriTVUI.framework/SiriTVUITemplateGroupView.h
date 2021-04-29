/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <SiriTVUI/SiriTVUIGroupView.h>
#import <SiriTVUI/SiriTVUITemplateItemView.h>

@protocol SiriTVUITemplatedViewDelegate;
@class NSArray, NSMutableArray, NSMutableIndexSet, NSMutableDictionary, NSString;

@interface SiriTVUITemplateGroupView : UIView <SiriTVUIGroupView, SiriTVUITemplateItemView> {

	NSMutableArray* _groupedSubviews;
	NSMutableIndexSet* _priorityLayoutIndexes;
	NSMutableIndexSet* _nonPriorityLayoutIndexes;
	NSMutableDictionary* _sizeThatFitsCache;
	BOOL hasPriorityLayout;
	id<SiriTVUITemplatedViewDelegate> _delegate;
	unsigned long long _layoutStyle;
	unsigned long long _alignment;

}

@property (assign,nonatomic,__weak) id<SiriTVUITemplatedViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long layoutStyle;                                 //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) unsigned long long alignment;                                   //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) NSArray * groupedSubviews;                                    //@synthesize groupedSubviews=_groupedSubviews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasPriorityLayout; 
-(id<SiriTVUITemplatedViewDelegate>)delegate;
-(void)setDelegate:(id<SiriTVUITemplatedViewDelegate>)arg1 ;
-(unsigned long long)alignment;
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)setLayoutStyle:(unsigned long long)arg1 ;
-(unsigned long long)layoutStyle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)hasPriorityLayout;
-(void)setHasPriorityLayout:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)shouldFitWithinContentMargins;
-(CGSize)sizeThatFits:(CGSize)arg1 forPartialLayout:(BOOL)arg2 ;
-(CGSize)_cachedSizeThatFitsGroupedSubview:(id)arg1 forSize:(CGSize)arg2 forPartialLayout:(BOOL)arg3 ;
-(BOOL)_isHorizontalLayout;
-(NSArray *)groupedSubviews;
-(void)addGroupedSubview:(id)arg1 ;
-(void)removeGroupedSubview:(id)arg1 ;
@end
