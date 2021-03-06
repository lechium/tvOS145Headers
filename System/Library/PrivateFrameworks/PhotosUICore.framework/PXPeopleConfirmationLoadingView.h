/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXPerson;
@class UIView, UILabel, UIActivityIndicatorView;

@interface PXPeopleConfirmationLoadingView : UIView {

	unsigned long long _loadingState;
	UIView* _loadingStatusView;
	UILabel* _noneFoundLabel;
	UIActivityIndicatorView* _loadingIndicator;
	id<PXPerson> _person;

}

@property (nonatomic,readonly) UIView * loadingStatusView;                              //@synthesize loadingStatusView=_loadingStatusView - In the implementation block
@property (nonatomic,readonly) UILabel * noneFoundLabel;                                //@synthesize noneFoundLabel=_noneFoundLabel - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,readonly) id<PXPerson> person;                                     //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) unsigned long long loadingState;                           //@synthesize loadingState=_loadingState - In the implementation block
-(id)init;
-(id<PXPerson>)person;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(id)initWithFrame:(CGRect)arg1 person:(id)arg2 localizedName:(id)arg3 ;
-(void)setLoadingState:(unsigned long long)arg1 ;
-(unsigned long long)loadingState;
-(UIView *)loadingStatusView;
-(UILabel *)noneFoundLabel;
@end

