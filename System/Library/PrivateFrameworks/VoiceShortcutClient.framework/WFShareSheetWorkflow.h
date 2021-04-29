/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFShareSheetWorkflow : NSObject <NSSecureCoding> {

	unsigned short _glyphCharacter;
	NSString* _identifier;
	NSString* _name;
	CGImageRef _iconImage;
	double _iconScale;

}

@property (nonatomic,readonly) unsigned short glyphCharacter;              //@synthesize glyphCharacter=_glyphCharacter - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CGImageRef iconImage;                       //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,readonly) double iconScale;                           //@synthesize iconScale=_iconScale - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(double)iconScale;
-(CGImageRef)iconImage;
-(void)setIconImage:(CGImageRef)arg1 scale:(double)arg2 ;
-(unsigned short)glyphCharacter;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 glyphCharacter:(unsigned short)arg3 ;
@end

