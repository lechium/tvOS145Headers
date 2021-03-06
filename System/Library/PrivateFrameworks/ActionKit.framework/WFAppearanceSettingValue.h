/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFAppearanceSettingValue : NSObject <WFNaming, NSSecureCoding, NSCopying> {

	long long _setting;

}

@property (nonatomic,readonly) long long setting;                   //@synthesize setting=_setting - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)setting;
-(id)initWithSetting:(long long)arg1 ;
-(NSString *)wfName;
-(id)valueByInvertingSetting;
-(BOOL)isDarkModeOn;
@end

