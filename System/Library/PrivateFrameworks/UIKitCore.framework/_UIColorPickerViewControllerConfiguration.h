/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIColorPickerViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL __shouldUseDarkGridInDarkMode;
	BOOL _showsAlpha;
	BOOL __isEmbedded;
	long long __userInterfaceStyleForGrid;
	NSString* _title;
	double __keyboardSpace;

}

@property (nonatomic,copy) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL showsAlpha;                                   //@synthesize showsAlpha=_showsAlpha - In the implementation block
@property (assign,nonatomic) BOOL _isEmbedded;                                  //@synthesize _isEmbedded=__isEmbedded - In the implementation block
@property (assign,nonatomic) double _keyboardSpace;                             //@synthesize _keyboardSpace=__keyboardSpace - In the implementation block
@property (assign,nonatomic) BOOL _shouldUseDarkGridInDarkMode;                 //@synthesize _shouldUseDarkGridInDarkMode=__shouldUseDarkGridInDarkMode - In the implementation block
@property (assign,nonatomic) long long _userInterfaceStyleForGrid;              //@synthesize _userInterfaceStyleForGrid=__userInterfaceStyleForGrid - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)set_isEmbedded:(BOOL)arg1 ;
-(BOOL)showsAlpha;
-(void)setShowsAlpha:(BOOL)arg1 ;
-(void)set_shouldUseDarkGridInDarkMode:(BOOL)arg1 ;
-(BOOL)_shouldUseDarkGridInDarkMode;
-(void)set_userInterfaceStyleForGrid:(long long)arg1 ;
-(long long)_userInterfaceStyleForGrid;
-(void)set_keyboardSpace:(double)arg1 ;
-(BOOL)_isEmbedded;
-(double)_keyboardSpace;
@end

