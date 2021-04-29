/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataEntry.h>

@interface _UIStatusBarDataThermalEntry : _UIStatusBarDataEntry {

	BOOL _sunlightMode;
	long long _color;

}

@property (assign,nonatomic) long long color;                //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL sunlightMode;              //@synthesize sunlightMode=_sunlightMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)color;
-(void)setColor:(long long)arg1 ;
-(BOOL)sunlightMode;
-(id)_ui_descriptionBuilder;
-(void)setSunlightMode:(BOOL)arg1 ;
@end

