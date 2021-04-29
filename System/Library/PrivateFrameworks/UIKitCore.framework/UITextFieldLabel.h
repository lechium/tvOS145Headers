/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@interface UITextFieldLabel : UILabel {

	BOOL _shouldRenderWithoutTextField;

}

@property (assign,nonatomic) BOOL shouldRenderWithoutTextField;              //@synthesize shouldRenderWithoutTextField=_shouldRenderWithoutTextField - In the implementation block
+(id)_defaultAttributes;
+(id)defaultFont;
-(void)drawTextInRect:(CGRect)arg1 ;
-(BOOL)shouldRenderWithoutTextField;
-(void)_defaultDrawTextInRect:(CGRect)arg1 ;
-(BOOL)_shouldDrawUnderlinesLikeWebKit;
-(void)setShouldRenderWithoutTextField:(BOOL)arg1 ;
@end

