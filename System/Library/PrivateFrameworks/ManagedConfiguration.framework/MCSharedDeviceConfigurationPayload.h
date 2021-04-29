/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSDictionary;

@interface MCSharedDeviceConfigurationPayload : MCPayload {

	NSString* _lockScreenFootnote;
	NSString* _assetTagInformation;

}

@property (nonatomic,readonly) NSString * lockScreenFootnote;               //@synthesize lockScreenFootnote=_lockScreenFootnote - In the implementation block
@property (nonatomic,readonly) NSString * assetTagInformation;              //@synthesize assetTagInformation=_assetTagInformation - In the implementation block
@property (nonatomic,readonly) NSDictionary * configuration; 
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(NSDictionary *)configuration;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(NSString *)lockScreenFootnote;
-(NSString *)assetTagInformation;
@end
