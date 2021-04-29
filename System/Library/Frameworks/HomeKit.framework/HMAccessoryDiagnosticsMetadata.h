/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSURL, NSNumber;

@interface HMAccessoryDiagnosticsMetadata : NSObject <NSSecureCoding, NSCopying> {

	NSString* _snapshotPath;
	NSDictionary* _urlParameters;
	NSURL* _privacyPolicyURL;
	NSURL* _uploadDestination;
	NSNumber* _consentVersion;
	NSNumber* _uploadType;

}

@property (readonly) NSString * snapshotPath;                        //@synthesize snapshotPath=_snapshotPath - In the implementation block
@property (copy,readonly) NSDictionary * urlParameters;              //@synthesize urlParameters=_urlParameters - In the implementation block
@property (readonly) NSURL * privacyPolicyURL;                       //@synthesize privacyPolicyURL=_privacyPolicyURL - In the implementation block
@property (readonly) NSURL * uploadDestination;                      //@synthesize uploadDestination=_uploadDestination - In the implementation block
@property (readonly) NSNumber * consentVersion;                      //@synthesize consentVersion=_consentVersion - In the implementation block
@property (readonly) NSNumber * uploadType;                          //@synthesize uploadType=_uploadType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)privacyPolicyURL;
-(id)attributeDescriptions;
-(NSString *)snapshotPath;
-(NSDictionary *)urlParameters;
-(NSURL *)uploadDestination;
-(NSNumber *)consentVersion;
-(NSNumber *)uploadType;
-(id)initWithSnapshotPath:(id)arg1 urlParameters:(id)arg2 privacyPolicyURL:(id)arg3 uploadDestination:(id)arg4 consentVersion:(id)arg5 uploadType:(id)arg6 ;
@end

