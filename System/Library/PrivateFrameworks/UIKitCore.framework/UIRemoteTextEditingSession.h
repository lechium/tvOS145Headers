/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIRemoteTextEditingAttributes, NSString;

@interface UIRemoteTextEditingSession : NSObject {

	UIRemoteTextEditingAttributes* _attributes;
	NSString* _text;

}

@property (nonatomic,copy) UIRemoteTextEditingAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSString * text;                                         //@synthesize text=_text - In the implementation block
-(UIRemoteTextEditingAttributes *)attributes;
-(void)setAttributes:(UIRemoteTextEditingAttributes *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end
