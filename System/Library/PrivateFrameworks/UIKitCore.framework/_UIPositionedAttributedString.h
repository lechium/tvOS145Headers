/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSAttributedString, UITextPosition;

@interface _UIPositionedAttributedString : NSObject {

	NSAttributedString* _string;
	UITextPosition* _position;

}

@property (nonatomic,copy,readonly) NSAttributedString * string;              //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) UITextPosition * position;                     //@synthesize position=_position - In the implementation block
+(id)attributedString:(id)arg1 atPosition:(id)arg2 ;
-(id)description;
-(NSAttributedString *)string;
-(UITextPosition *)position;
@end

