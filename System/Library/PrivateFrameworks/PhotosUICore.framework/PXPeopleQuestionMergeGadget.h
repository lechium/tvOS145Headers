/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate;
@class PXGadgetSpec, PHPerson, PXPeopleScalableAvatarView, UILabel, UIButton, NSString;

@interface PXPeopleQuestionMergeGadget : UIViewController <PXGadget> {

	id<PXGadgetDelegate> _delegate;
	PXGadgetSpec* _gadgetSpec;
	unsigned long long _gadgetType;
	PHPerson* _person;
	PXPeopleScalableAvatarView* _keyFaceView;
	UILabel* _titleLabel;
	UIButton* _reviewButton;

}

@property (nonatomic,retain) PHPerson * person;                                     //@synthesize person=_person - In the implementation block
@property (nonatomic,retain) PXPeopleScalableAvatarView * keyFaceView;              //@synthesize keyFaceView=_keyFaceView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * reviewButton;                               //@synthesize reviewButton=_reviewButton - In the implementation block
@property (nonatomic,readonly) unsigned long long gadgetType;                       //@synthesize gadgetType=_gadgetType - In the implementation block
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                             //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PXGadgetDelegate>)delegate;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(PHPerson *)person;
-(void)setPerson:(PHPerson *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(id)initWithPerson:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)contentViewController;
-(unsigned long long)gadgetType;
-(unsigned long long)gadgetCapabilities;
-(PXGadgetSpec *)gadgetSpec;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(PXPeopleScalableAvatarView *)keyFaceView;
-(void)setKeyFaceView:(PXPeopleScalableAvatarView *)arg1 ;
-(void)reviewButtonTapped:(id)arg1 ;
-(UIButton *)reviewButton;
-(void)setReviewButton:(UIButton *)arg1 ;
@end

