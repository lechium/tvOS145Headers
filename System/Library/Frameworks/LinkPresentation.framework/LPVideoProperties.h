/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString;

@interface LPVideoProperties : NSObject <NSCopying> {

	BOOL _hasAudio;
	UIColor* _overlappingControlsColor;
	NSString* _accessibilityText;

}

@property (setter=_setOverlappingControlsColor:,nonatomic,retain) UIColor * _overlappingControlsColor;              //@synthesize overlappingControlsColor=_overlappingControlsColor - In the implementation block
@property (assign,nonatomic) BOOL hasAudio;                                                                         //@synthesize hasAudio=_hasAudio - In the implementation block
@property (nonatomic,copy) NSString * accessibilityText;                                                            //@synthesize accessibilityText=_accessibilityText - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)accessibilityText;
-(BOOL)hasAudio;
-(void)setHasAudio:(BOOL)arg1 ;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(UIColor *)_overlappingControlsColor;
-(void)_setOverlappingControlsColor:(id)arg1 ;
@end

