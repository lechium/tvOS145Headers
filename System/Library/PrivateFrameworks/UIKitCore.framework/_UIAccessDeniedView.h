/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, NSString;

@interface _UIAccessDeniedView : UIView {

	UIImageView* _lockView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	NSString* _title;
	NSString* _message;

}

@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)_textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

