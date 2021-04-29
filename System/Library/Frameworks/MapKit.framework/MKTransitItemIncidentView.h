/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKTransitItemIncidentView.h>

@protocol MKTransitItemIncidentView <NSObject>
@property (assign,nonatomic) long long position; 
@property (assign,nonatomic) BOOL padBottom; 
@required
-(long long)position;
-(void)setPosition:(long long)arg1;
-(void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4;
-(BOOL)padBottom;
-(void)configureWithIncidentMessage:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4;
-(void)configureWithMessage:(id)arg1 incident:(id)arg2 referenceDate:(id)arg3 shouldShowImage:(BOOL)arg4 inSiri:(BOOL)arg5;
-(void)setPadBottom:(BOOL)arg1;

@end


@class UIImageView, NSArray, _MKUILabel, MKTransitIncidentItemCellBackgroundView, NSLayoutConstraint, NSString;

@interface MKTransitItemIncidentView : UIView <MKTransitItemIncidentView> {

	UIImageView* _incidentIconImageView;
	BOOL _needsConstraintsRebuild;
	NSArray* _constraints;
	_MKUILabel* _titleLabel;
	_MKUILabel* _lastUpdatedLabel;
	MKTransitIncidentItemCellBackgroundView* _backgroundView;
	BOOL _incidentIsBlocking;
	BOOL _useCondensedWidthLayout;
	NSLayoutConstraint* _titleLabelToTopConstraint;
	NSLayoutConstraint* _bottomToLabelConstraint;
	NSLayoutConstraint* _titleToLastUpdatedLabelConstraint;
	NSLayoutConstraint* _bottomToBackgroundConstraint;
	double _bottomToBackgroundOffset;
	BOOL _padBottom;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) long long position; 
@property (assign,nonatomic) BOOL padBottom;                          //@synthesize padBottom=_padBottom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)position;
-(void)setPosition:(long long)arg1 ;
-(UIEdgeInsets)contentInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)infoCardThemeChanged;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)configureViews;
-(void)_configureWithMessage:(id)arg1 referenceDate:(id)arg2 lastUpdated:(id)arg3 incidentIsBlocking:(BOOL)arg4 shouldShowImage:(BOOL)arg5 inSiri:(BOOL)arg6 ;
-(void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4 ;
-(id)_blockingImage;
-(id)_nonBlockingImage;
-(void)_updateBottomConstraintWithOffset:(double)arg1 ;
-(BOOL)padBottom;
-(void)rebuildConstraints;
-(void)configureWithIncidentMessage:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4 ;
-(void)configureWithMessage:(id)arg1 incident:(id)arg2 referenceDate:(id)arg3 shouldShowImage:(BOOL)arg4 inSiri:(BOOL)arg5 ;
-(void)setPadBottom:(BOOL)arg1 ;
@end
