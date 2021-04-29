/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICellAccessoryConfiguration.h>

@class UIView;

@interface _UICellAccessoryConfigurationCustomView : _UICellAccessoryConfiguration {

	BOOL _maintainsFixedSize;
	UIView* _customView;

}

@property (nonatomic,readonly) UIView * customView;                //@synthesize customView=_customView - In the implementation block
@property (assign,nonatomic) BOOL maintainsFixedSize;              //@synthesize maintainsFixedSize=_maintainsFixedSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_identifier;
-(id)initWithCustomView:(id)arg1 ;
-(UIView *)customView;
-(BOOL)maintainsFixedSize;
-(void)setMaintainsFixedSize:(BOOL)arg1 ;
-(BOOL)_isSystemType;
@end

