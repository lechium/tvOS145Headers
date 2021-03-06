/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString;

@interface GEOCollectionPublisherAttribution : NSObject {

	unsigned _iconIdentifier;
	unsigned _logoIdentifier;
	unsigned _logoCenteredIdentifier;
	unsigned _logoCenteredColorizedIdentifier;
	NSURL* _websiteURL;
	NSString* _applicationAdamId;
	NSString* _displayName;
	NSString* _subtitle;
	NSString* _themeColorLightMode;
	NSString* _themeColorDarkMode;

}

@property (nonatomic,readonly) NSURL * websiteURL;                                    //@synthesize websiteURL=_websiteURL - In the implementation block
@property (nonatomic,readonly) NSString * applicationAdamId;                          //@synthesize applicationAdamId=_applicationAdamId - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) unsigned iconIdentifier;                               //@synthesize iconIdentifier=_iconIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned logoIdentifier;                               //@synthesize logoIdentifier=_logoIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned logoCenteredIdentifier;                       //@synthesize logoCenteredIdentifier=_logoCenteredIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned logoCenteredColorizedIdentifier;              //@synthesize logoCenteredColorizedIdentifier=_logoCenteredColorizedIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * themeColorLightMode;                        //@synthesize themeColorLightMode=_themeColorLightMode - In the implementation block
@property (nonatomic,readonly) NSString * themeColorDarkMode;                         //@synthesize themeColorDarkMode=_themeColorDarkMode - In the implementation block
+(id)bestAttributionForPublisher:(id)arg1 ;
+(id)bestAttributionForPublisher:(id)arg1 preferredLanguages:(id)arg2 ;
-(NSString *)displayName;
-(NSString *)subtitle;
-(NSString *)themeColorLightMode;
-(NSString *)themeColorDarkMode;
-(unsigned)iconIdentifier;
-(unsigned)logoIdentifier;
-(unsigned)logoCenteredIdentifier;
-(unsigned)logoCenteredColorizedIdentifier;
-(NSURL *)websiteURL;
-(id)initWithPublisherAttributionSource:(id)arg1 preferredLanguages:(id)arg2 ;
-(NSString *)applicationAdamId;
@end

