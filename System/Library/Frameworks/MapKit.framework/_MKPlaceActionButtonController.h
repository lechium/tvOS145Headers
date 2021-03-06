/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@protocol _MKPlaceActionControlledButton;
@class NSString;

@interface _MKPlaceActionButtonController : NSObject <_MKInfoCardChildViewControllerAnalyticsDelegate> {

	BOOL _disabled;
	int _analyticsAction;
	NSString* _buttonTitle;
	NSString* _buttonSubTitle;
	/*^block*/id _buttonSelectedBlock;
	id<_MKPlaceActionControlledButton> _delegate;

}

@property (assign,nonatomic,__weak) id<_MKPlaceActionControlledButton> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * buttonTitle;                                        //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,readonly) NSString * buttonSubTitle;                                     //@synthesize buttonSubTitle=_buttonSubTitle - In the implementation block
@property (nonatomic,readonly) id buttonSelectedBlock;                                        //@synthesize buttonSelectedBlock=_buttonSelectedBlock - In the implementation block
@property (nonatomic,readonly) BOOL disabled;                                                 //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) int analyticsAction;                                           //@synthesize analyticsAction=_analyticsAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionButtonControllerWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(/*^block*/id)arg3 disabled:(BOOL)arg4 ;
+(id)actionButtonControllerWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(/*^block*/id)arg3 ;
-(id<_MKPlaceActionControlledButton>)delegate;
-(void)setDelegate:(id<_MKPlaceActionControlledButton>)arg1 ;
-(BOOL)disabled;
-(NSString *)buttonTitle;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithTitle:(id)arg1 subTitle:(id)arg2 analyticsAction:(int)arg3 selectedBlock:(/*^block*/id)arg4 disabled:(BOOL)arg5 ;
-(int)analyticsAction;
-(id)initWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(/*^block*/id)arg3 ;
-(void)buttonTextChanged;
-(NSString *)buttonSubTitle;
-(id)buttonSelectedBlock;
@end

