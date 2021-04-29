/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileAsset/MADownloadOptions.h>

@class NSString;

@interface MAMsuDownloadOptions : MADownloadOptions {

	BOOL _supervised;
	BOOL _allowSameVersion;
	BOOL _prerequisiteReleaseTypeIsOverridden;
	NSString* _requestedProductVersion;
	long long _delayPeriod;
	NSString* _prerequisiteBuildVersion;
	NSString* _prerequisiteProductVersion;
	NSString* _prerequisiteReleaseType;
	NSString* _downloadAuthorizationHeader;
	NSString* _liveAssetAudienceUUID;
	NSString* _purpose;

}

@property (nonatomic,retain) NSString * requestedProductVersion;                    //@synthesize requestedProductVersion=_requestedProductVersion - In the implementation block
@property (assign,nonatomic) long long delayPeriod;                                 //@synthesize delayPeriod=_delayPeriod - In the implementation block
@property (assign,nonatomic) BOOL supervised;                                       //@synthesize supervised=_supervised - In the implementation block
@property (assign,nonatomic) BOOL allowSameVersion;                                 //@synthesize allowSameVersion=_allowSameVersion - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteBuildVersion;                   //@synthesize prerequisiteBuildVersion=_prerequisiteBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteProductVersion;                 //@synthesize prerequisiteProductVersion=_prerequisiteProductVersion - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteReleaseType;                    //@synthesize prerequisiteReleaseType=_prerequisiteReleaseType - In the implementation block
@property (assign,nonatomic) BOOL prerequisiteReleaseTypeIsOverridden;              //@synthesize prerequisiteReleaseTypeIsOverridden=_prerequisiteReleaseTypeIsOverridden - In the implementation block
@property (nonatomic,retain) NSString * downloadAuthorizationHeader;                //@synthesize downloadAuthorizationHeader=_downloadAuthorizationHeader - In the implementation block
@property (nonatomic,retain) NSString * liveAssetAudienceUUID;                      //@synthesize liveAssetAudienceUUID=_liveAssetAudienceUUID - In the implementation block
@property (nonatomic,retain) NSString * purpose;                                    //@synthesize purpose=_purpose - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPurpose:(NSString *)arg1 ;
-(NSString *)purpose;
-(void)setRequestedProductVersion:(NSString *)arg1 ;
-(void)setPrerequisiteBuildVersion:(NSString *)arg1 ;
-(void)setPrerequisiteProductVersion:(NSString *)arg1 ;
-(void)setPrerequisiteReleaseType:(NSString *)arg1 ;
-(void)setDownloadAuthorizationHeader:(NSString *)arg1 ;
-(void)setLiveAssetAudienceUUID:(NSString *)arg1 ;
-(NSString *)downloadAuthorizationHeader;
-(NSString *)liveAssetAudienceUUID;
-(NSString *)requestedProductVersion;
-(long long)delayPeriod;
-(BOOL)supervised;
-(BOOL)allowSameVersion;
-(NSString *)prerequisiteBuildVersion;
-(NSString *)prerequisiteProductVersion;
-(void)setDelayPeriod:(long long)arg1 ;
-(void)setSupervised:(BOOL)arg1 ;
-(void)setAllowSameVersion:(BOOL)arg1 ;
-(NSString *)prerequisiteReleaseType;
-(BOOL)prerequisiteReleaseTypeIsOverridden;
-(void)setPrerequisiteReleaseTypeIsOverridden:(BOOL)arg1 ;
@end

