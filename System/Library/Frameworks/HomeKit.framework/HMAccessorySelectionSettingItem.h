/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, HMAccessorySelectionSetting;

@interface HMAccessorySelectionSettingItem : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _title;
	HMAccessorySelectionSetting* _setting;

}

@property (__weak) HMAccessorySelectionSetting * setting;              //@synthesize setting=_setting - In the implementation block
@property (copy,readonly) NSString * keyPath; 
@property (copy,readonly) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (copy,readonly) NSString * localizedTitle; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)keyPath;
-(NSString *)title;
-(NSString *)localizedTitle;
-(id)initWithTitle:(id)arg1 ;
-(HMAccessorySelectionSetting *)setting;
-(void)setSetting:(HMAccessorySelectionSetting *)arg1 ;
@end

