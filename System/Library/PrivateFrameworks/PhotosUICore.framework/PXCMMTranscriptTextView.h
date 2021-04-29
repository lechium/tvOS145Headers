/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class PXUpdater, UILabel, NSString;

@interface PXCMMTranscriptTextView : UIView {

	PXUpdater* _updater;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	NSString* _primaryText;
	NSString* _secondaryText;

}

@property (nonatomic,copy) NSString * primaryText;                //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;              //@synthesize secondaryText=_secondaryText - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(NSString *)primaryText;
-(NSString *)secondaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)_performLayoutInSize:(CGSize)arg1 minimizingSize:(BOOL)arg2 updateSubviewFrames:(BOOL)arg3 ;
-(void)_updatePrimaryLabel;
-(void)_updateSecondaryLabel;
@end

