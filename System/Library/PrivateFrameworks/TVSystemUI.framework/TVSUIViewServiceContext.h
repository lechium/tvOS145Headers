/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface TVSUIViewServiceContext : NSObject <NSCopying> {

	NSString* _extensionBundleIdentifer;
	NSString* _extensionPointIdentifier;
	NSDictionary* _extensionAttributes;
	NSDictionary* _options;

}

@property (nonatomic,readonly) NSString * extensionBundleIdentifer;              //@synthesize extensionBundleIdentifer=_extensionBundleIdentifer - In the implementation block
@property (nonatomic,readonly) NSString * extensionPointIdentifier;              //@synthesize extensionPointIdentifier=_extensionPointIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * extensionAttributes;               //@synthesize extensionAttributes=_extensionAttributes - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;                           //@synthesize options=_options - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSDictionary *)options;
-(NSString *)extensionPointIdentifier;
-(NSDictionary *)extensionAttributes;
-(NSString *)extensionBundleIdentifer;
-(id)initWithExtensionBundleIdentifier:(id)arg1 options:(id)arg2 extensionAttributes:(id)arg3 ;
-(id)initWithExtensionBundleIdentifier:(id)arg1 ;
@end

