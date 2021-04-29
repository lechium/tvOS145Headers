/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface LPImageProperties : NSObject <NSCopying> {

	NSString* _accessibilityText;
	long long _type;
	UIColor* _overlaidTextColor;

}

@property (nonatomic,copy) NSString * accessibilityText;               //@synthesize accessibilityText=_accessibilityText - In the implementation block
@property (assign,nonatomic) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIColor * overlaidTextColor;              //@synthesize overlaidTextColor=_overlaidTextColor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)accessibilityText;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(UIColor *)overlaidTextColor;
-(void)setOverlaidTextColor:(UIColor *)arg1 ;
@end
