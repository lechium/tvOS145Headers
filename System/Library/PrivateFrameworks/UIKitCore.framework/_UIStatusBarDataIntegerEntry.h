/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataEntry.h>

@interface _UIStatusBarDataIntegerEntry : _UIStatusBarDataEntry {

	BOOL _displayRawValue;
	long long _rawValue;
	long long _displayValue;

}

@property (assign,nonatomic) long long rawValue;                  //@synthesize rawValue=_rawValue - In the implementation block
@property (assign,nonatomic) long long displayValue;              //@synthesize displayValue=_displayValue - In the implementation block
@property (assign,nonatomic) BOOL displayRawValue;                //@synthesize displayRawValue=_displayRawValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)rawValue;
-(long long)displayValue;
-(void)setDisplayValue:(long long)arg1 ;
-(BOOL)displayRawValue;
-(id)_ui_descriptionBuilder;
-(void)setRawValue:(long long)arg1 ;
-(void)setDisplayRawValue:(BOOL)arg1 ;
@end

