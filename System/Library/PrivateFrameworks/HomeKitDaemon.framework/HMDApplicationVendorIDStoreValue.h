/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface HMDApplicationVendorIDStoreValue : HMFObject <NSSecureCoding> {

	BOOL _spiClient;
	NSData* _vendorIdSha1;
	NSString* _applicationBundleId;
	NSString* _companionAppBundleId;

}

@property (nonatomic,readonly) NSData * vendorIdSha1;                        //@synthesize vendorIdSha1=_vendorIdSha1 - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleId;               //@synthesize applicationBundleId=_applicationBundleId - In the implementation block
@property (nonatomic,readonly) NSString * companionAppBundleId;              //@synthesize companionAppBundleId=_companionAppBundleId - In the implementation block
@property (nonatomic,readonly) BOOL spiClient;                               //@synthesize spiClient=_spiClient - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationBundleId;
-(NSData *)vendorIdSha1;
-(NSString *)companionAppBundleId;
-(BOOL)spiClient;
-(id)initWithVendorIDSha1:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(BOOL)arg4 ;
@end

