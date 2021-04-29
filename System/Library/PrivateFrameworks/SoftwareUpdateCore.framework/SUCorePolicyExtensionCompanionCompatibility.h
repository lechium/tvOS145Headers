/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <SoftwareUpdateCore/SUCorePolicyExtension.h>
#import <libobjc.A.dylib/SUCorePolicyExtensionProtocol.h>

@class NSNumber;

@interface SUCorePolicyExtensionCompanionCompatibility : SUCorePolicyExtension <SUCorePolicyExtensionProtocol> {

	NSNumber* _minCompatibility;
	NSNumber* _maxCompatibility;

}

@property (nonatomic,retain) NSNumber * minCompatibility;              //@synthesize minCompatibility=_minCompatibility - In the implementation block
@property (nonatomic,retain) NSNumber * maxCompatibility;              //@synthesize maxCompatibility=_maxCompatibility - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)summary;
-(id)extensionName;
-(NSNumber *)minCompatibility;
-(NSNumber *)maxCompatibility;
-(void)setMinCompatibility:(NSNumber *)arg1 ;
-(void)setMaxCompatibility:(NSNumber *)arg1 ;
-(void)extendSoftwareUpdateMAAssetQuery:(id)arg1 ;
-(void)extendDocumentationMAAssetQuery:(id)arg1 ;
-(id)filterSoftwareUpdateAssetArray:(id)arg1 ;
-(id)filterDocumentationAssetArray:(id)arg1 ;
-(void)extendMASoftwareUpdateCatalogDownloadOptions:(id)arg1 ;
-(void)extendMADocumentationCatalogDownloadOptions:(id)arg1 descriptor:(id)arg2 ;
-(void)extendMASoftwareUpdateAssetDownloadOptions:(id)arg1 ;
-(void)extendMADocumentationAssetDownloadOptions:(id)arg1 ;
@end

