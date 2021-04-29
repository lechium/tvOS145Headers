/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIImageConfiguration.h>
@class UITraitCollection;


@protocol UIImageConfiguration <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@required
-(UITraitCollection *)traitCollection;
-(id)configurationByApplyingConfiguration:(id)arg1;
-(id)configurationWithTraitCollection:(id)arg1;
-(BOOL)isEquivalentToConfiguration:(id)arg1;

@end

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UITraitCollection, NSString;

@interface UIImageConfiguration : NSObject <UIImageConfiguration, NSCopying, NSSecureCoding> {

	BOOL _ignoresDynamicType;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,readonly) BOOL _ignoresDynamicType;                         //@synthesize ignoresDynamicType=_ignoresDynamicType - In the implementation block
@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_completeConfiguration:(id)arg1 fromConfiguration:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(UITraitCollection *)traitCollection;
-(id)configurationByApplyingConfiguration:(id)arg1 ;
-(id)_configurationIgnoringDynamicType;
-(id)configurationWithTraitCollection:(id)arg1 ;
-(BOOL)_ignoresDynamicType;
-(BOOL)_isUnspecified;
-(BOOL)isEquivalentToConfiguration:(id)arg1 ;
-(id)_initWithTraitCollection:(id)arg1 ;
-(BOOL)_shouldApplyConfiguration:(id)arg1 ;
-(void)_applyConfigurationValuesTo:(id)arg1 ;
@end

