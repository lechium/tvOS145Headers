/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFOutputVoiceColorDescriptor : NSObject <NSCopying, NSSecureCoding> {

	float _alpha;
	NSString* _hexColor;
	NSString* _colorName;
	NSString* _localizedOutputVoiceColor;
	NSString* _localizedOutputVoice;

}

@property (nonatomic,copy,readonly) NSString * hexColor;                               //@synthesize hexColor=_hexColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * colorName;                              //@synthesize colorName=_colorName - In the implementation block
@property (nonatomic,readonly) float alpha;                                            //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedOutputVoiceColor;              //@synthesize localizedOutputVoiceColor=_localizedOutputVoiceColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedOutputVoice;                   //@synthesize localizedOutputVoice=_localizedOutputVoice - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)alpha;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithHexColor:(id)arg1 colorName:(id)arg2 alpha:(float)arg3 localizedOutputVoiceColor:(id)arg4 localizedOutputVoice:(id)arg5 ;
-(NSString *)hexColor;
-(NSString *)colorName;
-(NSString *)localizedOutputVoiceColor;
-(NSString *)localizedOutputVoice;
@end
