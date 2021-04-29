/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _TVSUITextAlertButtonViewInterface, TVSUITextAlertButtonDelegate;
@class UIView, NSString;

@interface TVSUITextAlertButton : NSObject {

	UIView*<_TVSUITextAlertButtonViewInterface> _contentView;
	unsigned long long _type;
	/*^block*/id _selectHandler;
	id<TVSUITextAlertButtonDelegate> _delegate;

}

@property (nonatomic,readonly) UIView*<_TVSUITextAlertButtonViewInterface> contentView; 
@property (assign,nonatomic,__weak) id<TVSUITextAlertButtonDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * detailText; 
@property (nonatomic,copy) id selectHandler;                                                         //@synthesize selectHandler=_selectHandler - In the implementation block
@property (nonatomic,readonly) double minimumWidth; 
+(id)buttonWithTitle:(id)arg1 type:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)init;
-(id<TVSUITextAlertButtonDelegate>)delegate;
-(void)setDelegate:(id<TVSUITextAlertButtonDelegate>)arg1 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIView*<_TVSUITextAlertButtonViewInterface>)contentView;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(double)minimumWidth;
-(id)selectHandler;
-(void)setSelectHandler:(id)arg1 ;
-(void)_handleSelect:(id)arg1 ;
-(void)setTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDetailText:(id)arg1 animated:(BOOL)arg2 ;
@end

