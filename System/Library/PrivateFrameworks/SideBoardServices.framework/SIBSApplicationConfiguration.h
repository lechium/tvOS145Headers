/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SideBoardServices.framework/SideBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SIBSApplicationColor, NSArray;

@interface SIBSApplicationConfiguration : NSObject <NSSecureCoding> {

	NSString* _applicationIdentifier;
	long long _audioCategory;
	long long _audioMode;
	SIBSApplicationColor* _ledColor;
	long long _ledAnimation;
	NSArray* _buttonBehaviors;

}

@property (nonatomic,readonly) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (assign,nonatomic) long long audioCategory;                         //@synthesize audioCategory=_audioCategory - In the implementation block
@property (assign,nonatomic) long long audioMode;                             //@synthesize audioMode=_audioMode - In the implementation block
@property (nonatomic,retain) SIBSApplicationColor * ledColor;                 //@synthesize ledColor=_ledColor - In the implementation block
@property (assign,nonatomic) long long ledAnimation;                          //@synthesize ledAnimation=_ledAnimation - In the implementation block
@property (nonatomic,retain) NSArray * buttonBehaviors;                       //@synthesize buttonBehaviors=_buttonBehaviors - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryEncoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationIdentifier;
-(long long)audioCategory;
-(void)setAudioCategory:(long long)arg1 ;
-(id)initWithApplicationIdentifier:(id)arg1 ;
-(long long)audioMode;
-(void)setAudioMode:(long long)arg1 ;
-(SIBSApplicationColor *)ledColor;
-(long long)ledAnimation;
-(NSArray *)buttonBehaviors;
-(void)setLedColor:(SIBSApplicationColor *)arg1 ;
-(void)setLedAnimation:(long long)arg1 ;
-(void)setButtonBehaviors:(NSArray *)arg1 ;
@end
