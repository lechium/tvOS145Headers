/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class NSArray, CNCardGroupItem;

@interface CNContactCell : UITableViewCell {

	NSArray* _constantConstraints;
	NSArray* _variableConstraints;
	BOOL _hasBeenDisplayed;
	BOOL _shouldUseExpandedContentStyle;
	CNCardGroupItem* _cardGroupItem;
	double _leftContentMargin;
	double _rightContentMargin;

}

@property (assign,nonatomic) BOOL showSeparator; 
@property (nonatomic,retain) CNCardGroupItem * cardGroupItem;                 //@synthesize cardGroupItem=_cardGroupItem - In the implementation block
@property (assign,nonatomic) double leftContentMargin;                        //@synthesize leftContentMargin=_leftContentMargin - In the implementation block
@property (assign,nonatomic) double rightContentMargin;                       //@synthesize rightContentMargin=_rightContentMargin - In the implementation block
@property (assign,nonatomic) BOOL hasBeenDisplayed;                           //@synthesize hasBeenDisplayed=_hasBeenDisplayed - In the implementation block
@property (assign,nonatomic) BOOL shouldUseExpandedContentStyle;              //@synthesize shouldUseExpandedContentStyle=_shouldUseExpandedContentStyle - In the implementation block
-(void)dealloc;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(CNCardGroupItem *)cardGroupItem;
-(void)setCardGroupItem:(CNCardGroupItem *)arg1 ;
-(id)variableConstraints;
-(double)minCellHeight;
-(BOOL)shouldPerformDefaultAction;
-(id)constantConstraints;
-(void)performDefaultAction;
-(BOOL)shouldPerformAccessoryAction;
-(void)performAccessoryAction;
-(void)setShowSeparator:(BOOL)arg1 ;
-(BOOL)showSeparator;
-(double)leftContentMargin;
-(void)setLeftContentMargin:(double)arg1 ;
-(double)rightContentMargin;
-(void)setRightContentMargin:(double)arg1 ;
-(BOOL)hasBeenDisplayed;
-(void)setHasBeenDisplayed:(BOOL)arg1 ;
-(BOOL)shouldUseExpandedContentStyle;
-(void)setShouldUseExpandedContentStyle:(BOOL)arg1 ;
@end

