/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, _MXVersion;

@interface _MXBundleBlacklistEntry : NSObject {

	NSString* _bundleIdentifier;
	_MXVersion* _minimum;
	_MXVersion* _maximum;

}
+(id)blacklistEntriesFromDefaultsValue:(id)arg1 ;
-(BOOL)_isVersionValueAllowed:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 minimumDisallowedVersion:(id)arg2 maximumDisallowedVersion:(id)arg3 ;
-(BOOL)isBundleProxyAllowed:(id)arg1 ;
-(BOOL)isExtensionAllowed:(id)arg1 ;
@end
